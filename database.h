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
    void EstatesList (QComboBox *estateList);
    /*************************/

    /*****Estates Records*****/
    bool checkEstatesDuplicated(QString valueToCheck);
    void estateRecord(QList<QString> textData , QList<int> digitData);
    /************************/

     //**** TEST ****
    void setTestModel(QTreeView *resultTable);

};

#endif // DATABASE_H
