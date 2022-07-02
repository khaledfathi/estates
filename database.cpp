#include "database.h"
#include <QDir>
#include <QSqlRecord>

database::database(QString filePath)
{
    databaseFile = filePath;
    db.setDatabaseName(databaseFile);
    createDatebaseTabels();
}
bool database::createDatebaseTabels()
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
                    \"تفاصيل_اخرى\"	TEXT,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT)\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"renters\" (\
                        \"ID\"    INTEGER NOT NULL UNIQUE,\
                        \"estatesID\"     INTEGER  NOT NULL,\
                        \"رقم_الشقة\"     INTEGER UNIQUE NOT NULL,\
                        \"نوع_العين_المؤجرة\"  TEXT  NOT NULL,\
                        \"اسم_المستأجر\"  TEXT NOT NULL,\
                        \"الرقم_القومى\"  TEXT NOT NULL,\
                        \"تليفون\"        TEXT,\
                        \"قيمة_الايجار\" REAL NOT NULL,\
                        \"تاريخ_العقد\"   TEXT NOT NULL,\
                        \"تاريخ_انتهاء_العقد\" TEXT NOT NULL,\
                        \"نوع_العقد\"     TEXT NOT NULL,\
                        PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                        FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\")\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"money\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"estatesID\"	INTEGER UNIQUE NOT NULL,\
                    \"rentersID\"	INTEGER UNIQUE NOT NULL,\
                    \"تاريخ_العملية\"	TEXT NOT NULL,\
                    \"المبلغ_المدفوع\"	REAL NOT NULL,\
                    \"نوع_المعاملة\"	TEXT NOT NULL,\
                    \"سنة\"	INTEGER NOT NULL,\
                    \"تفاصيل_اخرى\"	INTEGER,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                    FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\"),\
                    FOREIGN KEY (\"rentersID\") REFERENCES renters(\"ID\")\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"water_invoice\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"estatesID\"	INTEGER NOT NULL UNIQUE,\
                    \"عن_شهر\"	TEXT NOT NULL,\
                    \"سنة\"	INTEGER NOT NULL,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                    FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\")\
                );"\
            );
    db.commit();
    db.close();
    return true;
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
void database::rentersList (QComboBox *rentersList)
{
    db.open();
    QSqlQueryModel *model =new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    qry->prepare("select renters.اسم_المستأجر from renters");
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
              \"تفاصيل_اخرى\"\
          ) VALUES (\
              \"%1\",\
              \"%2\",\
              \"%3\",\
              %4,\
              %5,\
              \"%6\"\
          );";
    sql = sql.arg(textData[0],textData[1],textData[2],QString::number(digitData[0]),QString::number(digitData[1]),textData[3]);
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
            رقم_الشقة,\
            نوع_العين_المؤجرة,\
            اسم_المستأجر,\
            الرقم_القومى,\
            تليفون,\
            قيمة_الايجار,\
            تاريخ_العقد,\
            تاريخ_انتهاء_العقد,\
            نوع_العقد\
            )VALUES(%1,%2,'%3','%4','%5','%6',%7,'%8','%9','%10')";
    sql = sql.arg(estatesID,\
            QString::number(digitData[0]),\
            textData[1],\
            textData[2],\
            textData[3],\
            textData[4],\
            QString::number(digitData[1]),\
            textData[5],\
            textData[6],\
            textData[7]);
    db.exec(sql);

    db.commit();
    db.close();
}
/************************/


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



