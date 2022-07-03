#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTreeView>
#include <QComboBox>

class database
{
private:
    QString databaseFile;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    bool createDatebaseTabels();

public:
    database(QString filePath);
    bool isDatabaseWork();
    /******* General *********/
    void estatesList (QComboBox *estateList);
    void rentersList (QComboBox *rentersList);
    /*************************/

    /*****Estates Records*****/
    bool checkEstatesDuplicated(QString valueToCheck);
    void estateRecord(QList<QString> textData , QList<int> digitData);
    /************************/

    /*****Renters Records*****/
    void RenterRecord (QList<QString> textData , QList<int> digitData);
    QString checkMaxUnitNumber (QString estate , QString unitType , int unitNumber);
    bool checkDuplicatedUnitNumber(QString estate , QString unitType , int unitNumber);
    /************************/

     //**** TEST ****
    void setTestModel(QTreeView *resultTable , QString tableName);

};

#endif // DATABASE_H
