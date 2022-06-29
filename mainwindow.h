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
    void actionbuttonExit();
    /************************************************/

    /************* Query Tab Section ***************/
    void defaultQueryTabUI();
    void setQueryTabFieldsStatus(bool state);
    //Actions
    void actionReportTypeChanges();
    /***********************************************/

    /************* Money Tab Section ***************/
    void defaultMoneyTabUI();
    void setMoneyTabFieldsStatus(bool state);
    //Actions
    void actioncheckBoxAddFreeMoney();
    void actionButtonMoneyEmpty();
    /***********************************************/

    /************* Renter Tab Section ***************/

    //*** Actions
    void actionButtonRenterEmpty();
    /************************************************/

    /************* Estate Tab Section ***************/

    //*** Actions
    void actionButtonEstateEmpty ();
    QList<QString> getDataEstate();
    /************************************************/

    /************* Recipet Tab Section ***************/
    /************************************************/


private slots:
    //*** SIGNAL AND SLOT MainWindow General***
    void on_buttonExit_clicked();
    void on_menuExit_triggered();

    //*** SIGNAL AND SLOT for Query Tab ***
    void on_comboBoxQueryReport_currentIndexChanged(int index);
    void on_checkBoxQueryRenter_stateChanged(int arg1);
    void on_buttonQuery_clicked();

    //*** SIGNAL AND SLOT for Money Tab ***
    void on_checkBoxAddFreeMoney_stateChanged(int arg1);
    void on_buttonMoneyEmpty_clicked();

    //*** SIGNAL AND SLOT for Renter Tab***
    void on_buttonRenterEmpty_clicked();
    void on_buttonEstateEmpty_clicked();


    //*** SIGNAL AND SLOT for Estates Tab***
    void on_buttonEstateSave_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
