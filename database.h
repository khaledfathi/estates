#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTreeView>
#include <QComboBox>
#include <QDoubleSpinBox>

class database
{
private:
    QString databaseFile;  
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    void createDatebaseTabels();

public:
    static QList<QString> months ;
    database(QString filePath);
    ~database();

    /******* General *********/
    bool isDatabaseWork();
    void estatesList (QComboBox *estateList);
    void rentersList (QComboBox *rentersList , QString estate);
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

    /*****Money Records*****/
    void MoneyRecord  (QList<QString> textData , QList<double> doubleData , QList<int> intData);
    void MoneyRecordUnclassified (QList<QString> textData , QList<double> doubleData , QList<int> intData);
    double getRenterWaterInvoiceValue (QString estate , QString renter , QString month , int year);
    double compareWaterInvoicePaidRemaining(QString estate , QString renter , QString month , int year , double renterInvoiceValue);
    /************************/

    /***** Water Invoce Records*****/
    void waterInvoiceRecord (QList<QString> textDate , QList<double> doubleDate , QList<int> intData);
    void waterInvoiceEditRecord (QList<QString> textDate , QList<double> doubleDate , QList<int> intData);
    bool checkDuplicatedInvoice(QString estate ,  QString month , QString year);
    void setRegisterdMonthList (QString estate , QString year , QComboBox *monthComboList);
    void waterInvoiceDeleteRecord (QString month , QString year);
    void setMoneyValue (QString estate, QString  month , QString year , QDoubleSpinBox *moneyValue);
    /*******************************/

     //**** TEST ****
    void setTestModel(QTreeView *resultTable , QString tableName);


};

#endif // DATABASE_H
