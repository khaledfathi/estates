#include "database.h"
#include <QDir>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDate>

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
    createDatebaseTabels();
}
database::~database(){

}
void database::createDatebaseTabels()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");    
    db.setDatabaseName(databaseFile);
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
                        \"اخر_شهر_مدفوع\"     TEXT NOT NULL,\
                        \"سنة\" INTEGER NOT NULL,\
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
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"water_invoice_values\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"estatesID\"	INTEGER NOT NULL ,\
                    \"rentersID\" 	INTEGER NOT NULL ,\
                    \"عن_شهر\"	TEXT NOT NULL,\
                    \"سنة\"	INTEGER NOT NULL,\
                    \"المبلغ_المطلوب\" REAL NOT NULL,\
                    \"نسبة_مئوية\" INTEGER NOT NULL,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                    FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\"),\
                    FOREIGN KEY (\"rentersID\") REFERENCES renters(\"ID\")\
                );"\
            );
    db.commit();
    db.close();
    QSqlDatabase::removeDatabase("conn");
}

bool database::isDatabaseWork()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //Check if database working or not
    db.open();
    bool check = db.isOpen();
    db.close();
    QSqlDatabase::removeDatabase("conn");
    return check;
}

/******* General *********/
void database::estatesList (QComboBox *estateList)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    db.open();
    QSqlQueryModel *model =new QSqlQueryModel();
    QSqlQuery qry(db);
    qry.prepare("select 'estates'.'اسم_رمزى_للعقار' from 'estates'");
    qry.exec();
    model->setQuery(qry);
    estateList->setModel(model);
    db.close();
    QSqlDatabase::removeDatabase("conn");
}
void database::rentersList (QComboBox *rentersList , QString estate)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    QString estatesID ;
    db.open();
    QSqlQuery qryEstatesID(db);
    qryEstatesID.exec(QString("select estates.ID from estates where estates.اسم_رمزى_للعقار='%1' ").arg(estate));
    qryEstatesID.next();
    estatesID = qryEstatesID.record().value(0).toString();
    db.close();

    db.open();
    QSqlQueryModel *model =new QSqlQueryModel();
    QSqlQuery qry(db);
    qry.prepare(QString("select renters.اسم_المستأجر from renters where renters.estatesID=%1").arg(estatesID));
    qry.exec();
    model->setQuery(qry);
    rentersList->setModel(model);
    db.close();
    QSqlDatabase::removeDatabase("conn");
}
/*************************/


/*****Estates Records*****/
bool database::checkEstatesDuplicated(QString valueToCheck)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //check estates Name Duplication
    db.open();
    QSqlQuery qry(db);
    qry.exec(QString("SELECT estates.اسم_رمزى_للعقار FROM 'estates' WHERE اسم_رمزى_للعقار='%1'").arg(valueToCheck));
    qry.next();
    QString data = qry.record().value(0).toString();
    db.close();
    QSqlDatabase::removeDatabase("conn");
    return (data == valueToCheck);

}

void database::estateRecord(QList<QString> textData , QList<int> digitData)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");
}

/*****Renters Records*****/
void database::RenterRecord (QList<QString> textData , QList<int> digitData)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get ID by find ==> estates -> اسم_رمزى_للعقار
    db.open();
    QSqlQuery qry(db) ;
    qry.exec(QString("SELECT estates.ID FROM estates where اسم_رمزى_للعقار='%1'").arg(textData[0]));
    qry.next();
    QString estatesID= qry.record().value(0).toString();
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
            نسبة_مئوية_للمياة,\
            اخر_شهر_مدفوع,\
            سنة\
            )VALUES(%1,%2,'%3','%4','%5','%6',%7,'%8','%9','%10',%11,'%12',%13)";
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
            QString::number(digitData[2]),\
            textData[8],\
            QString::number(digitData[3]));

    db.exec(sql);

    db.commit();
    db.close();
    QSqlDatabase::removeDatabase("conn");
}

QString database::checkMaxUnitNumber (QString estate , QString unitType , int unitNumber)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");
    return message;

}

bool database::checkDuplicatedUnitNumber(QString estate ,QString unitType , int unitNumber)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    db.open();
    QSqlQuery qryID(db) ;
    qryID.exec(QString("SELECT estates.ID FROM estates Where estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryID.next();
    int ID = qryID.value(0).toInt();
    db.close();

    db.open();
    QString sql = QString("SELECT renters.رقم_الوحدة FROM estates , renters WHERE renters.estatesID=%1 and renters.نوع_العين_المؤجرة='%2' and renters.رقم_الوحدة=%3").arg(QString::number(ID),unitType,QString::number(unitNumber)) ;
    QSqlQuery qry(db);

    if (unitType == "شقة"){
        db.open();
        qry.exec(sql);
        qry.next();
        if (qry.record().value(0).toInt() == unitNumber){
            db.close();
            QSqlDatabase::removeDatabase("conn");
            return true;
        }
    }else if (unitType == "محل"){
        db.open();
        qry.exec(sql);
        qry.next();
        if (qry.record().value(0).toInt() == unitNumber){
            db.close();
            QSqlDatabase::removeDatabase("conn");
            return true;
        }
    }
    db.close();
    QSqlDatabase::removeDatabase("conn");
    return false;
}

/************************/


/*****Renters Records*****/
double database::getRenterRentRemaining (QString estate , QString renter , QString month , double year )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //get renterID from rentertable
    db.open();
    QSqlQuery qryRenterID(db);
    qryRenterID.exec(QString("SELECT renters.ID from renters WHERE renters.اسم_المستأجر='%1'").arg(renter));
    qryRenterID.next();
    QString RenterID= qryRenterID.record().value(0).toString();
    db.close();

    //get sum of renter rent value for this renter
    db.open();
    QSqlQuery qryRenterRentValue(db);
    qryRenterRentValue.exec(QString("SELECT renters.قيمة_الايجار from renters WHERE estatesID=%1 and  ID=%2").arg(estateID , RenterID));
    qryRenterRentValue.next();
    double RenterRentValue= qryRenterRentValue.record().value(0).toDouble();
    db.close();

    //get sum of renter register values
    db.open();
    QSqlQuery qryRenterRegisterValue(db);
    QString sql = "SELECT SUM(money.المبلغ_المدفوع ) FROM money WHERE estatesID=%1 and rentersID=%2 and عن_شهر='%3'  and سنة=%4 and نوع_المعاملة='سداد ايجار'";
    sql = sql.arg(estateID, RenterID , month , QString::number(year));
    qryRenterRegisterValue.exec(sql);
    qryRenterRegisterValue.next();
    double renterRegisterValue= qryRenterRegisterValue.record().value(0).toDouble();
    db.close();

    double remaining = RenterRentValue-renterRegisterValue ;
    if (remaining > 0){
        return remaining ;
    }
    QSqlDatabase::removeDatabase("conn");
    return 0;
}
/*************************/

/********Money Records********/
void database::MoneyRecord (QList<QString> textData , QList<double> doubleData , QList<int> intData)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");
}

void database::MoneyRecordUnclassified (QList<QString> textData , QList<double> doubleData , QList<int> intData)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");
}
void database::deleteWaterInvoiceValues(QString estate , QString month , int year)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //delete wate_invoice_value for spcific month/year
    db.open();
    QString sql = "DELETE FROM water_invoice_values WHERE estatesID=%1 and عن_شهر='%2' and سنة='%3'";
    sql = sql.arg(estateID, month , QString::number(year));
    db.exec(sql);
    db.commit();
    db.close();
    QSqlDatabase::removeDatabase("conn");
}

void database::deleteWaterInvoiceMoneyRecords(QString estate , QString month , int year)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //delete water invoice releated from mony tabel
    db.open();
    QString sql = "DELETE FROM money WHERE estatesID=%1 and عن_شهر='%2' and سنة=%3";
    sql = sql.arg(estateID , month , QString::number(year));
    db.exec(sql);
    db.commit();
    db.close();
    QSqlDatabase::removeDatabase("conn");
}

bool database::calculationForRenterWaterInvoiceValue (QString estate , QString month , int year)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
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
    if (unitsCounts == 0) return false; //IF NO UNITS IN THIS ESTATES

    //get all units water pay percentage from renter table for current estate
    db.open();
    QSqlQuery qryWaterInvoicePercitage(db);
    qryWaterInvoicePercitage.exec(QString("SELECT renters.نسبة_مئوية_للمياة , renters.ID FROM renters WHERE estatesID=%1 ").arg(estateID));
    QList<double>WaterInvoicePercitageList ;
    QList<QString>renterIDs ;
    while (qryWaterInvoicePercitage.next()){
        WaterInvoicePercitageList.push_back(qryWaterInvoicePercitage.record().value(0).toDouble());
        renterIDs.push_back(qryWaterInvoicePercitage.record().value(1).toString());
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

    db.open();
    for (int i=0; i<renterIDs.size(); i++){
        QString sql = "INSERT INTO water_invoice_values ( \
                    estatesID,\
                    rentersID,\
                    عن_شهر,\
                    سنة,\
                    المبلغ_المطلوب,\
                    نسبة_مئوية)\
                    VALUES (%1,%2,'%3',%4,%5,%6)";
        sql = sql.arg(estateID,\
                renterIDs[i],\
                month,\
                QString::number(year),\
                QString::number(((WaterInvoicePercitageList[i]/100)*valuePerUnit)*realPercentage),\
                QString::number(WaterInvoicePercitageList[i]) );
        db.exec(sql);
    }
    db.commit();
    db.close();
    QSqlDatabase::removeDatabase("conn");
    return true;
}

double database::getRenterWaterInvoiceRemaining(QString estate , QString renter , QString month , int year)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //get renterID from rentertable
    db.open();
    QSqlQuery qryRenterID(db);
    qryRenterID.exec(QString("SELECT renters.ID from renters WHERE renters.اسم_المستأجر='%1'").arg(renter));
    qryRenterID.next();
    QString RenterID= qryRenterID.record().value(0).toString();
    db.close();

    //get water invoice value for spcific renter
    db.open();
    QSqlQuery qryRenterInvoiceValue(db);
    QString sqlInvoice ="SELECT water_invoice_values.المبلغ_المطلوب FROM water_invoice_values WHERE estatesID=%1 and rentersID=%2 and عن_شهر='%3' and سنة=%4";
    sqlInvoice= sqlInvoice.arg(\
                estateID,\
                RenterID,\
                month,\
                QString::number(year));
    qryRenterInvoiceValue.exec(sqlInvoice);
    qryRenterInvoiceValue.next();
    double renterInvoiceValue= qryRenterInvoiceValue.record().value(0).toDouble();
    db.close();

    //get register water invoice value
    db.open();
    QSqlQuery qryRenterWaterRegisterValue(db);
    QString sqlRegister ="SELECT SUM(money.المبلغ_المدفوع) FROM money WHERE estatesID=%1 and rentersID=%2 and نوع_المعاملة='سداد مياة' and عن_شهر='%3' and سنة=%4";
    sqlRegister= sqlRegister.arg(\
                estateID,\
                RenterID,\
                month,\
                QString::number(year));
    qryRenterWaterRegisterValue.exec(sqlRegister);
    qryRenterWaterRegisterValue.next();
    double renterWaterRegisterValue= qryRenterWaterRegisterValue.record().value(0).toDouble();
    db.close();

    double remaining = (renterInvoiceValue - renterWaterRegisterValue);
    if ( remaining > 0){
        return remaining;
    }
    QSqlDatabase::removeDatabase("conn");
    return 0 ;
}

QList<QString> database::avaliblePayMonthsForRenter(QString estate , QString renter ,  int year)
{
    QList<QString> validMonths={}; //return list
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //get renterID from rentertable
    db.open();
    QSqlQuery qryRenterID(db);
    qryRenterID.exec(QString("SELECT renters.ID from renters WHERE renters.اسم_المستأجر='%1'").arg(renter));
    qryRenterID.next();
    QString RenterID= qryRenterID.record().value(0).toString();
    db.close();

    //avalible dates [contract (start and end date)] and last paid month and year - for this renter
    db.open();
    QSqlQuery qryAvalibleDates(db);
    qryAvalibleDates.exec(QString("SELECT renters.تاريخ_العقد , renters.تاريخ_انتهاء_العقد , renters.اخر_شهر_مدفوع , renters.سنة FROM renters WHERE estatesID=%1 and ID=%2").arg(estateID , RenterID));
    qryAvalibleDates.next();
    QString contractDate = qryAvalibleDates.record().value(0).toString();
    QString contractEndDate = qryAvalibleDates.record().value(1).toString();
    QString lastPaidMonthString = qryAvalibleDates.record().value(2).toString();
    int lastPaidMonth;
    //convert month name to number
    for (int i=0; i<months.size(); i++){
        if(months[i] == lastPaidMonthString){
            if (months[i] == lastPaidMonthString){
                lastPaidMonth= i+1;
                break;
            }
        }
    }
    int lastPaidYear = qryAvalibleDates.record().value(3).toInt();
    db.close();

    if ( (year < lastPaidYear) || (year > QDate::fromString(contractEndDate,"yyyy/M/d").year()) ){
        validMonths.clear();
    }else if ( year == lastPaidYear){
        for (int i =months.size(); i>=0 ; i-- ){
            if ( lastPaidMonth >= i+1 ){
                for (int j=i; j<11; j++){ //11 is months count 12-1 , -1 because it alredy paid with no value record in database
                        validMonths.push_back(months[j+1]);
                }
                break;
            }
        }
    }else if ( year == QDate::fromString(contractEndDate,"yyyy/M/d").year() ){
        for (int i =0; i<months.size(); i++ ){
            if ( QDate::fromString(contractDate,"yyyy/M/d").month() >= i+1 ){
                validMonths.push_back(months[i]);
            }
        }

    }else {
        validMonths = months;
    }

    return validMonths;
}


/****************************/

/***** Water Invoce Records*****/
void database::waterInvoiceRecord (QList<QString> textDate , QList<double> doubleDate , QList<int> intData)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //record in water_invoice table
    db.open();
    QSqlQuery qryEstateID(db);
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
    QSqlDatabase::removeDatabase("conn");
}

void database::waterInvoiceEditRecord (QList<QString> textDate , QList<double> doubleDate , QList<int> intData)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");

}
bool database::checkDuplicatedInvoice(QString estate , QString month , QString year)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");
    return false;
}
void database::setRegisterdMonthList (QString estate , QString year , QComboBox  *monthComboList)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");
}

void database::waterInvoiceDeleteRecord (QString month , QString year)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    db.open();
    QSqlQuery qry(db);
    qry.exec(QString("DELETE FROM water_invoice WHERE عن_شهر='%1' and سنة=%2").arg(month, year));
    db.close();
    QSqlDatabase::removeDatabase("conn");
}

void database::setMoneyValue (QString estate, QString  month , QString year , QDoubleSpinBox *moneyValue )
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
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
    QSqlDatabase::removeDatabase("conn");
}
/*******************************/



/******* Query Dialog *********/
QList<double> database::QueryActualMoney (QString estate)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //sum of rent
    db.open();
    QSqlQuery qrySumOfRent(db);
    qrySumOfRent.exec(QString("SELECT SUM (money.المبلغ_المدفوع) FROM money WHERE estatesID=%1 and نوع_المعاملة='سداد ايجار'").arg(estateID) );
    qrySumOfRent.next();
    double sumOfRent = qrySumOfRent.record().value(0).toDouble();
    db.close();

    //sum of rent
    db.open();
    QSqlQuery qrySumOfwaterInvoice(db);
    qrySumOfwaterInvoice.exec(QString("SELECT SUM (money.المبلغ_المدفوع) FROM money WHERE estatesID=%1 and نوع_المعاملة='سداد مياة'").arg(estateID) );
    qrySumOfwaterInvoice.next();
    double SumOfwaterInvoice= qrySumOfwaterInvoice.record().value(0).toDouble();
    db.close();

    //sum of maintenance
    db.open();
    QSqlQuery qrySumOfMaintenance(db);
    qrySumOfMaintenance.exec(QString("SELECT SUM (money.المبلغ_المدفوع) FROM money WHERE estatesID=%1 and نوع_المعاملة='سداد اعمال صيانة / طوارئ'").arg(estateID) );
    qrySumOfMaintenance.next();
    double SumOfMaintenance =  qrySumOfMaintenance.record().value(0).toDouble();
    db.close();

    //sum of unclassified [used for renter]
    db.open();
    QSqlQuery qrySumOfunclassified(db);
    qrySumOfunclassified.exec(QString("SELECT SUM (money.المبلغ_المدفوع) FROM money WHERE estatesID=%1 and نوع_المعاملة='غير مصنف'").arg(estateID) );
    qrySumOfunclassified.next();
    double SumOfunclassified =  qrySumOfunclassified.record().value(0).toDouble();
    db.close();

    //sum of unclassified [used for owner]
    db.open();
    QSqlQuery qrySumOfunclassifiedOwner(db);
    qrySumOfunclassifiedOwner.exec(QString("SELECT SUM (money.المبلغ_المدفوع) FROM money WHERE estatesID=%1 and نوع_المعاملة IS NULL").arg(estateID) );
    qrySumOfunclassifiedOwner.next();
    double SumOfunclassifiedOwner =  qrySumOfunclassifiedOwner.record().value(0).toDouble();
    db.close();

    double total =sumOfRent + SumOfwaterInvoice + SumOfMaintenance + SumOfunclassified + SumOfunclassifiedOwner ;

    QList<double> results ;
    results.push_back(sumOfRent);
    results.push_back(SumOfwaterInvoice);
    results.push_back(SumOfMaintenance);
    results.push_back(SumOfunclassified);
    results.push_back(SumOfunclassifiedOwner);
    results.push_back(total);
    QSqlDatabase::removeDatabase("conn");
    return results;
}

QList<QList<QString>> database::QueryWaterIndebtednessTable(QString estate)
{
    QList<QList<QString>> resultTabel={}; //return value

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //get all renters IDs from estates table
    db.open();
    QSqlQuery qryRenterIDs(db);
    qryRenterIDs.exec(QString("SELECT ID FROM renters WHERE estatesID=%1").arg(estateID));
    QList<QString> renterIDs;
    while(qryRenterIDs.next()){
        renterIDs.push_back(qryRenterIDs.record().value(0).toString());
    }
    db.close();


    //get water invoice money require for each renter
    db.open();
    QSqlQuery qryMoneyRequiteForRenter(db);
    QList<QString> renterNamesAndWaterInvoice ;
    for (int i=0 ; i<renterIDs.size(); i++){//search by renter IDs for each renter

        qryMoneyRequiteForRenter.exec(QString("SELECT renters.اسم_المستأجر FROM renters WHERE ID=%1").arg(renterIDs[i]));
        qryMoneyRequiteForRenter.next();
        renterNamesAndWaterInvoice.push_back(qryMoneyRequiteForRenter.record().value(0).toString());

        qryMoneyRequiteForRenter.exec(QString("SELECT SUM(water_invoice_values.المبلغ_المطلوب)  FROM  water_invoice_values WHERE estatesID=%1 and  rentersID=%2").arg(estateID , renterIDs[i]));
        qryMoneyRequiteForRenter.next();
        renterNamesAndWaterInvoice.push_back(QString::number(qryMoneyRequiteForRenter.record().value(0).toDouble()));

        resultTabel.push_back(renterNamesAndWaterInvoice);
        renterNamesAndWaterInvoice.clear();
    }

    db.close();

    //get water invoice money paid for each renter
    db.open();
    QSqlQuery qryMoneyPaidForRenter(db);

    for (int i=0 ; i<renterIDs.size(); i++){//search by renter IDs for each renter
        qryMoneyPaidForRenter.exec(QString("SELECT SUM(money.المبلغ_المدفوع) FROM money WHERE estatesID=%1 and rentersID=%2").arg(estateID , renterIDs[i]));
        qryMoneyPaidForRenter.next();
        resultTabel[i].push_back(QString::number(qryMoneyPaidForRenter.record().value(0).toDouble()));
    }
    db.close();

    QSqlDatabase::removeDatabase("conn");

    //set calculation for return
    QList<QList<QString>> table ;
    QString txt = "";
    for (int i=0; i<resultTabel.size(); i++){
        table+={resultTabel[i][0],\
                QString::number(resultTabel[i][1].toDouble() - resultTabel[i][2].toDouble())};
        txt += table[i][0]+" | "+ table[i][1] + "\n";
    }
    return  table;
}

QList<QList<QString>> database::QueryRentIndebtednessTable(QString estate)
{
    QList<QList<QString>> resultTabel={}; //return value

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    //get estateID from estates table
    db.open();
    QSqlQuery qryEstateID(db);
    qryEstateID.exec(QString("SELECT estates.ID FROM estates WHERE estates.اسم_رمزى_للعقار='%1'").arg(estate));
    qryEstateID.next();
    QString estateID = qryEstateID.record().value(0).toString();
    db.close();

    //get all renters IDs from estates table
    db.open();
    QSqlQuery qryRenterIDs(db);
    qryRenterIDs.exec(QString("SELECT ID FROM renters WHERE estatesID=%1").arg(estateID));
    QList<QString> renterIDs;
    while(qryRenterIDs.next()){
        renterIDs.push_back(qryRenterIDs.record().value(0).toString());
    }
    db.close();

    //get RenterID , and lastpaid month/year
    db.open();
    QSqlQuery qryDates(db);
    QList<QList<QString>> datesQueryRusltes ={}; //each row  = renterID , last Paid Month ,last Paid year
    QList<QString> tmp={};
    for (int i=0; i<renterIDs.size() ; i++){
        qryDates.exec(QString("SELECT renters.ID ,renters.تاريخ_انتهاء_العقد, renters.اخر_شهر_مدفوع ,renters.سنة  FROM renters WHERE  estatesID=%1 and ID=%2").arg(estateID , renterIDs[i]));
        qryDates.next();
        tmp.push_back(qryDates.record().value(0).toString());//renterID
        tmp.push_back(QString::number(QDate::fromString(qryDates.record().value(1).toString(),"yyyy/M/d").month()));//ContractEndDate Month
        tmp.push_back(qryDates.record().value(2).toString());//last Paid Month
        tmp.push_back(qryDates.record().value(3).toString());//last Paid year
        datesQueryRusltes.push_back(tmp);
        tmp.clear();
    }
    db.close();


    int currentMonth = QDate::currentDate().month();//currentDate Month
    int currentYear = QDate::currentDate().year() ;//currentDate Year
    for(int i=0; i<datesQueryRusltes.size(); i++){
        int yearsCount  = currentYear - datesQueryRusltes[i][3].toInt();
        int monthCountForFirstYear = datesQueryRusltes[i][1].toInt() ;
        int monthCountForLasteYear = currentMonth ;

        QMessageBox::information(nullptr , "" , QString::number(yearsCount));
        QMessageBox::information(nullptr , "" , QString::number(monthCountForFirstYear));
        QMessageBox::information(nullptr , "" , QString::number(monthCountForLasteYear));

    }
    //currentYear - lastPaidYear
    //count months in current Year
    //count months in lastPaidYear

    QSqlDatabase::removeDatabase("conn");
    return resultTabel;
}
/******************************/



/**********************************/

void database::QueryAllFromTable(QTreeView *resultTable , QString tableName){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE" , "conn");
    db.setDatabaseName(databaseFile);
    db.open();
    QSqlQueryModel  *model = new QSqlQueryModel();
    QSqlQuery qry(db);
    qry.exec(QString("SELECT * FROM %1").arg(tableName));
    model->setQuery(qry);
    resultTable->setModel(model);
    //resultTable->setColumnHidden(0,true);
    db.close();
    QSqlDatabase::removeDatabase("conn");
}


