#include "database.h"
#include <QDir>
#include <QSqlRecord>
#include <QMessageBox>

QList<QString> database::months ={\
    "1- يناير",\
    "2- فبراير",\
    "3- مارس",\
    "4- ابريل",\
    "5- مايو",\
    "6- يونيو",\
    "7- يوليو",\
    "8- اغسطس",\
    "9- سبتمبر",\
    "10- اكتوبر",\
    "11- نوفمبر",\
    "12- ديسمبر",\
};

database::database(QString filePath)
{
    databaseFile = filePath;
    db.setDatabaseName(databaseFile);
    createDatebaseTabels();
}
database::~database(){
    db.removeDatabase("QSQLITE");
}
void database::createDatebaseTabels()
{
    db.open();
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"estates\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"اسم_رمزى_للعقار\"	TEXT NOT NULL UNIQUE,\
                    \"اسم_المالك\"	TEXT NOT NULL,\
                    \"عنوان_العقار\"	TEXT NOT NULL,\
                    \"عدد_الطوابق\"	INTEGER NOT NULL,\
                    \"عدد_الشقق\"	INTEGER NOT NULL,\
                    \"عدد_المحلات\"	INTEGER NOT NULL,\
                    \"تفاصيل_اخرى\"	TEXT,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT)\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"renters\" (\
                        \"ID\"    INTEGER NOT NULL UNIQUE,\
                        \"estatesID\"     INTEGER  NOT NULL,\
                        \"رقم_الوحدة\"     INTEGER  NOT NULL,\
                        \"نوع_العين_المؤجرة\"  TEXT  NOT NULL,\
                        \"اسم_المستأجر\"  TEXT NOT NULL,\
                        \"الرقم_القومى\"  TEXT NOT NULL,\
                        \"تليفون\"        TEXT,\
                        \"قيمة_الايجار\" REAL NOT NULL,\
                        \"تاريخ_العقد\"   TEXT NOT NULL,\
                        \"تاريخ_انتهاء_العقد\" TEXT NOT NULL,\
                        \"نوع_العقد\"     TEXT NOT NULL,\
                        \"نسبة_مئوية_للمياة\" INTEGER NOT NULL,\
                        PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                        FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\")\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"money\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"estatesID\"	INTEGER  NOT NULL,\
                    \"rentersID\"	INTEGER ,\
                    \"تاريخ_العملية\"	TEXT NOT NULL,\
                    \"المبلغ_المدفوع\"	REAL NOT NULL,\
                    \"نوع_المعاملة\"	TEXT,\
                    \"عن_شهر\"	TEXT,\
                    \"سنة\"	INTEGER ,\
                    \"تفاصيل_اخرى\"	TEXT,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                    FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\"),\
                    FOREIGN KEY (\"rentersID\") REFERENCES renters(\"ID\")\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"water_invoice\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"estatesID\"	INTEGER NOT NULL ,\
                    \"عن_شهر\"	TEXT NOT NULL,\
                    \"سنة\"	INTEGER NOT NULL,\
                    \"قيمة_الفاتورة\" REAL NOT NULL,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                    FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\")\
                );"\
            );
    db.commit();
    db.close();
}

bool database::isDatabaseWork()
{
    //Check if database working or not
    db.open();
    bool check = db.isOpen();
    db.close();
    return check;
}

/******* General *********/
void database::estatesList (QComboBox *estateList)
{
    db.open();
    QSqlQueryModel *model =new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    qry->prepare("select 'estates'.'اسم_رمزى_للعقار' from 'estates'");
    qry->exec();
    model->setQuery(*qry);
    estateList->setModel(model);
    db.open();
}
void database::rentersList (QComboBox *rentersList , QString estate)
{
    QString estatesID ;
    db.open();
    QSqlQuery *qryEstatesID = new QSqlQuery;
    qryEstatesID->exec(QString("select estates.ID from estates where estates.اسم_رمزى_للعقار='%1' ").arg(estate));
    qryEstatesID->next();
    estatesID = qryEstatesID->record().value(0).toString();
    db.close();

    db.open();
    QSqlQueryModel *model =new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    qry->prepare(QString("select renters.اسم_المستأجر from renters where renters.estatesID=%1").arg(estatesID));
    qry->exec();
    model->setQuery(*qry);
    rentersList->setModel(model);
    db.open();
}
/*************************/


/*****Estates Records*****/
bool database::checkEstatesDuplicated(QString valueToCheck)
{
    //check estates Name Duplication
    db.open();
    QSqlQuery x  = db.exec(QString("SELECT * FROM 'estates' WHERE اسم_رمزى_للعقار='%1'").arg(valueToCheck));
    x.next();
    QString data = x.value(1).toString();
    db.close();
    return (data == valueToCheck);
}

void database::estateRecord(QList<QString> textData , QList<int> digitData)
{
    db.open();
    QString sql = "INSERT INTO 'estates' (\
              \"اسم_رمزى_للعقار\",\
              \"اسم_المالك\",\
              \"عنوان_العقار\",\
              \"عدد_الطوابق\",\
              \"عدد_الشقق\",\
              \"عدد_المحلات\",\
              \"تفاصيل_اخرى\"\
          ) VALUES (\
              \"%1\",\
              \"%2\",\
              \"%3\",\
              %4,\
              %5,\
              %6,\
              \"%7\"\
          );";
    sql = sql.arg(textData[0],textData[1],textData[2],QString::number(digitData[0]),QString::number(digitData[1]),QString::number(digitData[2]),textData[3]);
    db.exec(sql);
    db.commit();
    db.close();
}


/*****Renters Records*****/
void database::RenterRecord (QList<QString> textData , QList<int> digitData)
{
    //get ID by find ==> estates -> اسم_رمزى_للعقار
    db.open();
    QSqlQuery *qry = new QSqlQuery(db) ;
    qry->exec(QString("SELECT estates.ID FROM estates where اسم_رمزى_للعقار='%1'").arg(textData[0]));
    qry->next();
    QString estatesID= qry->record().value(0).toString();
    db.close();

    //add data record
    db.open();
    QString sql="INSERT INTO \"renters\" (\
            estatesID,\
            رقم_الوحدة,\
            نوع_العين_المؤجرة,\
            اسم_المستأجر,\
            الرقم_القومى,\
            تليفون,\
            قيمة_الايجار,\
            تاريخ_العقد,\
            تاريخ_انتهاء_العقد,\
            نوع_العقد,\
            نسبة_مئوية_للمياة\
            )VALUES(%1,%2,'%3','%4','%5','%6',%7,'%8','%9','%10',%11)";
    sql = sql.arg(estatesID,\
            QString::number(digitData[0]),\
            textData[1],\
            textData[2],\
            textData[3],\
            textData[4],\
            QString::number(digitData[1]),\
            textData[5],\
            textData[6],\
            textData[7],\
            QString::number(digitData[2]));
    db.exec(sql);

    db.commit();
    db.close();
}

QString database::checkMaxUnitNumber (QString estate , QString unitType , int unitNumber)
{
    QString message = "";
    int MaxUnitNumber ;
    db.open();
    QSqlQuery qry(db);
    if (unitType == "شقة"){
        qry.exec(QString("SELECT estates.عدد_الشقق FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate) );
        qry.next();
        MaxUnitNumber = qry.record().value(0).toInt();
        if(unitNumber > MaxUnitNumber){
            message = "عدد الشقق فى العقار : "+QString::number(MaxUnitNumber);
            db.close();
        }

    }else if (unitType == "محل"){
        qry.exec(QString("SELECT estates.عدد_المحلات FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate) );
        qry.next();
        MaxUnitNumber = qry.record().value(0).toInt();
        if(unitNumber > MaxUnitNumber){
            message = "عدد المحلات فى العقار : "+QString::number(MaxUnitNumber);
            db.close();
        }
    }
    db.close();
    return message;
}

bool database::checkDuplicatedUnitNumber(QString estate ,QString unitType , int unitNumber)
{
    db.open();
    QSqlQuery qryID(db) ;
    qryID.exec(QString("SELECT estates.ID FROM estates Where estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryID.next();
    int ID = qryID.value(0).toInt();
    db.close();

    db.open();
    QString sql = QString("SELECT renters.رقم_الوحدة FROM estates , renters WHERE renters.estatesID=%1 and renters.نوع_العين_المؤجرة='%2' and renters.رقم_الوحدة=%3").arg(QString::number(ID),unitType,QString::number(unitNumber)) ;
    QSqlQuery qry;

    if (unitType == "شقة"){
        db.open();
        qry.exec(sql);
        qry.next();
        if (qry.record().value(0).toInt() == unitNumber){
            db.close();
            return true;
        }
    }else if (unitType == "محل"){
        db.open();
        qry.exec(sql);
        qry.next();
        if (qry.record().value(0).toInt() == unitNumber){
            db.close();
            return true;
        }
    }
    db.close();
    return false;

}

/************************/


/********Money Records********/
void database::MoneyRecord (QList<QString> textData , QList<double> doubleData , QList<int> intData)
{
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(textData[0]));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //get renterID from rentertable
    db.open();
    QSqlQuery qryRenterID(db);
    qryRenterID.exec(QString("SELECT renters.ID from renters WHERE renters.اسم_المستأجر='%1'").arg(textData[1]));
    qryRenterID.next();
    QString RenterID= qryRenterID.record().value(0).toString();
    db.close();

    //do record
    double moneyValue = doubleData[0]; // money value
    if (intData[2]){ //radio button withdraw
         moneyValue *= -1;
    }

    db.open();
    QString sql = "INSERT INTO money (\
        estatesID,\
        rentersID,\
        تاريخ_العملية,\
        المبلغ_المدفوع,\
        نوع_المعاملة,\
        عن_شهر,\
        سنة,\
        تفاصيل_اخرى)\
        VALUES(\
        %1,\
        %2,\
        '%3',\
        %4,\
        '%5',\
        '%6',\
        %7,\
        '%8')";
    sql = sql.arg(\
        estateID,\
        RenterID,\
        textData[2],\
        QString::number(moneyValue),\
        textData[3],\
        textData[4],\
        QString::number(intData[3]),\
        textData[5]);
    db.exec(sql);
    db.commit();
    db.close();
}

void database::MoneyRecordUnclassified (QList<QString> textData , QList<double> doubleData , QList<int> intData)
{
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(textData[0]));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //do record
    double moneyValue = doubleData[0]; // money value
    if (intData[2]){ //radio button withdraw
         moneyValue *= -1;
    }

    db.open();
    QString sql = "INSERT INTO money (\
        estatesID,\
        تاريخ_العملية,\
        المبلغ_المدفوع,\
        تفاصيل_اخرى)\
        VALUES(\
        %1,\
        '%2',\
        %3,\
        '%4')";
    sql = sql.arg(\
        estateID,\
        textData[2],\
        QString::number(moneyValue),\
        textData[5]);
    db.exec(sql);
    db.commit();
    db.close();
}

double database::getRenterWaterInvoiceValue (QString estate , QString renter , QString month , int year)
{
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //get renterID from renter table
    db.open();
    QSqlQuery qryRenterID(db);
    qryRenterID.exec(QString("SELECT renters.ID from renters WHERE renters.اسم_المستأجر='%1'").arg(renter));
    qryRenterID.next();
    QString renterID= qryRenterID.record().value(0).toString();
    db.close();

    /**Calculations needed**/
    //get water invoice value for current month
    db.open();
    QSqlQuery qryWaterInvoiceValue(db);
    qryWaterInvoiceValue.exec(QString("SELECT water_invoice.قيمة_الفاتورة FROM water_invoice WHERE estatesID=%1  and عن_شهر='%2' and سنة=%3").arg(estateID ,month,QString::number(year)));
    qryWaterInvoiceValue.next();
    double waterInvoiceValue= qryWaterInvoiceValue.record().value(0).toDouble();
    db.close();

    //get count of units from renters table for current estate
    db.open();
    QSqlQuery qryUnits(db);
    qryUnits.exec(QString("SELECT COUNT(renters.رقم_الوحدة) FROM renters WHERE estatesID=%1 ").arg(estateID));
    qryUnits.next();
    int unitsCounts = qryUnits.record().value(0).toInt();
    db.close();

    //get all units water pay percentage from renter table for current estate
    db.open();
    QSqlQuery qryWaterInvoicePercitage(db);
    qryWaterInvoicePercitage.exec(QString("SELECT renters.نسبة_مئوية_للمياة FROM renters WHERE estatesID=%1 ").arg(estateID));
    QList<double>WaterInvoicePercitageList ;
    while (qryWaterInvoicePercitage.next()){
        WaterInvoicePercitageList.push_back(qryWaterInvoicePercitage.record().value(0).toDouble());
    }
    db.close();

    /**calculate percent * value per unit = new big water invoice **/
    double valuePerUnit = waterInvoiceValue/unitsCounts;
    double newBigWaterInvoiceValue =0;

    for (int i=0; i<WaterInvoicePercitageList.size(); i++){
        newBigWaterInvoiceValue += WaterInvoicePercitageList[i]/100 *valuePerUnit;
    }

    /**calculate get real  Precentage  **/
    double realPercentage = waterInvoiceValue/newBigWaterInvoiceValue;

    //get current renter water invoice percent
    db.open();
    QSqlQuery qryCurrentRenterWaterPercent(db);
    qryCurrentRenterWaterPercent.exec(QString("SELECT renters.نسبة_مئوية_للمياة FROM renters WHERE ID=%1 ").arg(renterID));
    qryCurrentRenterWaterPercent.next();
    int CurrentRenterWaterPercent= (qryCurrentRenterWaterPercent.record().value(0).toInt())/100;
    db.close();

    return (CurrentRenterWaterPercent*valuePerUnit)*realPercentage;

}
/****************************/

/***** Water Invoce Records*****/
void database::waterInvoiceRecord (QList<QString> textDate , QList<double> doubleDate , QList<int> intData)
{
    db.open();
    QSqlQuery qryEstateID;
    qryEstateID.prepare(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(textDate[0]));
    qryEstateID.exec();
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();
    db.open();
    QString sql="INSERT INTO water_invoice (\
                estatesID ,\
                عن_شهر , \
                سنة,\
                قيمة_الفاتورة)\
                VALUES (%1 , '%2' , %3 , %4)";
    sql = sql.arg( estateID ,\
                textDate[1] ,\
                QString::number(intData[2]),\
                QString::number(doubleDate[0]));
    db.exec(sql);
    db.close();
}
void database::waterInvoiceEditRecord (QList<QString> textDate , QList<double> doubleDate , QList<int> intData)
{
    //get estate id
    db.open();
    QSqlQuery qryEstateID(db) ;
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(textDate[0]));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //aletr data
    db.open();
    QSqlQuery qry(db) ;
    qry.exec(QString("UPDATE water_invoice SET قيمة_الفاتورة=%1 WHERE estatesID=%2 and عن_شهر='%3' and سنة=%4").arg\
             (QString::number(doubleDate[0]),estateID,textDate[1],QString::number(intData[2])));
    db.close();

}
bool database::checkDuplicatedInvoice(QString estate , QString month , QString year)
{
    //get estatesID from estates Name
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates where estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID= qryEstateID.record().value(0).toString();
    db.close();

    db.open();
    QSqlQuery qry(db);
    qry.exec(QString("SELECT water_invoice.ID FROM water_invoice WHERE water_invoice.estatesID=%1 and water_invoice.عن_شهر='%2' and water_invoice.سنة=%3").arg(estateID , month , year));
    qry.next();
    int found = qry.record().value(0).toInt();
    if (found){
        return true;
    }
    db.close();
    return false;
}
void database::setRegisterdMonthList (QString estate , QString year , QComboBox  *monthComboList)
{
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    db.open();
    QSqlQuery qry(db) ;
    qry.exec(QString("SELECT water_invoice.عن_شهر FROM water_invoice WHERE estatesID=%1 and سنة=%2").arg(estateID,year));
    QList<QString> monthsRecoeded;
    while(qry.next()){
        monthsRecoeded.push_back(qry.record().value(0).toString());
    }
    db.close();

    //make monthes name in order after get results from database

    QList<QString> monthsRecoededInOrder;
    for (int i=0; i<months.size(); i++){
        for (int j=0; j< monthsRecoeded.size(); j++){
            if (months[i] == monthsRecoeded[j]){
                monthsRecoededInOrder.push_back(months[i]);
                break;
            }
        }
    }
    monthComboList->addItems(monthsRecoededInOrder);
}
void database::waterInvoiceDeleteRecord (QString month , QString year)
{
    db.open();
    QSqlQuery qry(db);
    qry.exec(QString("DELETE FROM water_invoice WHERE عن_شهر='%1' and سنة=%2").arg(month, year));
    db.close();
}
void database::setMoneyValue (QString estate, QString  month , QString year , QDoubleSpinBox *moneyValue )
{
    //get estateID
    db.open();
    QSqlQuery qryEstateID (db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //set money value
    db.open();
    QSqlQuery qry(db) ;
    qry.exec(QString("SELECT water_invoice.قيمة_الفاتورة FROM water_invoice WHERE estatesID=%1 and عن_شهر='%2' and سنة=%3").arg(estateID, month, year));
    qry.next();
    double x = qry.record().value(0).toDouble();
    moneyValue->setValue(x);

    db.close();
}
/*******************************/


/**********************************/

void database::setTestModel(QTreeView *resultTable , QString tableName){
    db.open();
    QSqlQueryModel  *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    qry->exec(QString("SELECT * FROM %1").arg(tableName));
    model->setQuery(*qry);
    resultTable->setModel(model);
    //resultTable->setColumnHidden(0,true);
    db.close();
}



