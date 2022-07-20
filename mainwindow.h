#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    /************* General ***************/    
    void defaultSetupUI();
    void setCurrentDateUI();
    /*************************************/

    /************* MainWindow Section ***************/

    //Actions
    void actionEstatesFiledsFromDatabase();
    void actionRentersFiledsFromDatabase(QString location);
    void actionbuttonExit();
    void actionAboutQt();
    void actionAboutApp();
    void actionEmptyAllTabs();
    void actionShowRawDatabase();
    /************************************************/

    /************* Query Tab Section ***************/
    void defaultQueryTabUI();
    void setQueryTabFieldsStatus(bool state);
    bool compareQueryDates();
    //Actions
    void actionQueryReportChanges();
    void actionValidationQuery();
    void actioncheckBoxQueryRenterChanged(int status);
    void actionQueryButton();
    /***********************************************/

    /************* Money Tab Section ***************/
    void defaultMoneyTabUI();
    void setMoneyTabFieldsStatus(bool state);
    QList<QString> getDataMoney();
    void getMoneyRecord(QList<QString> *textData , QList<double> *doubleData , QList<int> *intData);
    //Actions
    void actionCheckBoxAddFreeMoney();
    void actionButtonMoneyEmpty();
    void actionValidationMoney();
    void actionShowWaterInvoiceDialog();
    void actionMoneyTypeListChanges();
    void actionSetMonthsDependOnYear();
    void actionaAddMoneyRecord();
    void actionSetRemainingRemainingValue();
    void actionMoneyValueChanges();
    void actionSetValidMonthsForRenter();
    /***********************************************/

    /************* Renter Tab Section ***************/
    bool compareContractDates();
    QList<QString> getDateRenter();
    void getRenterRecord(QList<QString> *textData , QList<int> *digitData);
    void actionApartmentTypeChanges();
    //*** Actions
    void actionButtonRenterEmpty();
    void actionaAddRenterRecord();
    /************************************************/

    /************* Estate Tab Section ***************/
    QList<QString> getDataEstate();
    void getEstateRecord(QList<QString> *textData , QList<int> *digitData);
    //*** Actions
    void actionButtonEstateEmpty ();
    void actionaAddEstateRecord();
    void actionEditRemoveButton();
    /************************************************/

    /************* Recipet Tab Section ***************/
    void defaultReceiptTabUI();
    //*** Actions
    void actionRecipetChangesYear();

    /************************************************/


private slots:
    //*** SIGNAL AND SLOT MainWindow General***
    void on_buttonExit_clicked();
    void on_menuExit_triggered();
    void on_menuAboutQt_triggered();
    void on_menuAboutApp_triggered();
    void on_tabWidgetMain_currentChanged(int index);
    void on_menuViewAllData_triggered();


    //*** SIGNAL AND SLOT for Query Tab ***
    void on_comboBoxQueryReport_currentIndexChanged(int index);
    void on_checkBoxQueryRenter_stateChanged(int arg1);
    void on_buttonQuery_clicked();
    void on_comboBoxQueryEstate_currentIndexChanged(int index);


    //*** SIGNAL AND SLOT for Money Tab ***
    void on_checkBoxAddFreeMoney_stateChanged(int arg1);
    void on_buttonMoneyEmpty_clicked();
    void on_buttonMoneySave_clicked();
    void on_buttonMoneyWaterInvoice_clicked();
    void on_comboBoxMoneyEstate_currentIndexChanged(int index);
    void on_comboBoxMoneyType_currentIndexChanged(int index);
    void on_spinBoxMoneyYear_valueChanged(int arg1);
    void on_comboBoxMonyMonth_currentIndexChanged(int index);
    void on_comboBoxMoneyRenter_currentIndexChanged(int index);
    void on_doubleSpinBoxMony_valueChanged(double arg1);



    //*** SIGNAL AND SLOT for Renter Tab***
    void on_buttonRenterEmpty_clicked();
    void on_buttonEstateEmpty_clicked();
    void on_buttonRenterSave_clicked();
    void on_comboBoxApartmentType_currentIndexChanged(int index);

    //*** SIGNAL AND SLOT for Estates Tab***
    void on_buttonEstateSave_clicked();
    void on_buttonEstateEdit_clicked();

    //*** SIGNAL AND SLOT for Recipet Tab***
    void on_comboBoxReceiptEstate_currentIndexChanged(int index);
    void on_spinBoxReceiptYear_valueChanged(int arg1);

    //*** For Testing ***




public slots:
    void updataMoneyMonthList();
    //will be removed
    void clearEstatesFields();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
