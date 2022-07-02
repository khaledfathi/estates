#include "database.h"
#include <QDir>

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
                        \"estatesID\"     TEXT NOT NULL,\
                        \"رقم_الشقة\"     INTEGER UNIQUE NOT NULL,\
                        \"اسم_المستأجر\"  TEXT NOT NULL,\
                        \"الرقم_القومى\"  INTEGER NOT NULL,\
                        \"تليفون\"        INTEGER,\
                        \"قيمة_الايجار\" INTEGER NOT NULL,\
                        \"تاريخ_العقد\"   TEXT,\
                        \"تاريخ_انتهاء_العقد\"    TEXT NOT NULL,\
                        \"نوع_العقد\"     TEXT NOT NULL,\
                        PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                        FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\")\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"money\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"estatesID\"	INTEGER NOT NULL,\
                    \"rentersID\"	INTEGER,\
                    \"تاريخ_العملية\"	TEXT,\
                    \"المبلغ_المدفوع\"	INTEGER,\
                    \"نوع_المعاملة\"	TEXT,\
                    \"سنة\"	INTEGER,\
                    \"تفاصيل_اخرى\"	INTEGER,\
                    PRIMARY KEY(\"ID\" AUTOINCREMENT),\
                    FOREIGN KEY (\"estatesID\") REFERENCES estates(\"ID\"),\
                    FOREIGN KEY (\"rentersID\") REFERENCES renters(\"ID\")\
                );"\
            );
    db.exec(\
                "CREATE TABLE IF NOT EXISTS \"water_invoice\" (\
                    \"ID\"	INTEGER NOT NULL UNIQUE,\
                    \"estatesID\"	INTEGER NOT NULL,\
                    \"عن_شهر\"	TEXT,\
                    \"سنة\"	INTEGER,\
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
void database::EstatesList (QComboBox *estateList)
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
/*************************/


/*****Estates Records*****/
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

/************************/

void database::setTestModel(QTreeView *resultTable){
    db.open();
    QSqlQueryModel  *model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    qry->prepare("SELECT * FROM 'estates'");
    qry->exec();
    model->setQuery(*qry);
    resultTable->setModel(model);
    resultTable->setColumnHidden(0,true);
    db.close();
}


