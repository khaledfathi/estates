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
    void actionbuttonExit();
    void actionAboutQt();
    void actionAboutApp();
    /************************************************/

    /************* Query Tab Section ***************/
    void defaultQueryTabUI();
    void setQueryTabFieldsStatus(bool state);
    bool compareQueryDates();
    //Actions
    void actionQueryReportChanges();
    void actionValidationQuery();
    void actioncheckBoxQueryRenterChanged(int status);
    void actionShowQueryResult();
    /***********************************************/

    /************* Money Tab Section ***************/
    void defaultMoneyTabUI();
    void setMoneyTabFieldsStatus(bool state);
    QList<QString> getDataMoney();
    //Actions
    void actionCheckBoxAddFreeMoney();
    void actionButtonMoneyEmpty();
    void actionValidationMoney();
    void actionShowWaterInvoiceDialog();
    /***********************************************/

    /************* Renter Tab Section ***************/
    bool compareContractDates();
    QList<QString> getDateRenter();
    //*** Actions
    void actionButtonRenterEmpty();
    void actionValidationRenter();
    /************************************************/

    /************* Estate Tab Section ***************/
    QList<QString> getDataEstate();
    void getEstateRecord(QList<QString> *textData , QList<int> *digitData);
    //*** Actions
    void actionButtonEstateEmpty ();
    void actionaAddEstateRecord();
    /************************************************/

    /************* Recipet Tab Section ***************/
    /************************************************/


private slots:
    //*** SIGNAL AND SLOT MainWindow General***
    void on_buttonExit_clicked();
    void on_menuExit_triggered();
    void on_menuAboutQt_triggered();
    void on_menuAboutApp_triggered();

    //*** SIGNAL AND SLOT for Query Tab ***
    void on_comboBoxQueryReport_currentIndexChanged(int index);
    void on_checkBoxQueryRenter_stateChanged(int arg1);
    void on_buttonQuery_clicked();

    //*** SIGNAL AND SLOT for Money Tab ***
    void on_checkBoxAddFreeMoney_stateChanged(int arg1);
    void on_buttonMoneyEmpty_clicked();
    void on_buttonMoneySave_clicked();
    void on_buttonMoneyWaterInvoice_clicked();

    //*** SIGNAL AND SLOT for Renter Tab***
    void on_buttonRenterEmpty_clicked();
    void on_buttonEstateEmpty_clicked();
    void on_buttonRenterSave_clicked();

    //*** SIGNAL AND SLOT for Estates Tab***
    void on_buttonEstateSave_clicked();




private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
