#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    this->setWindowIcon(QIcon(":/icon/icon/app_icon.ico"));
    defaultSetupUI();
}
MainWindow::~MainWindow()
{
    delete ui;
}

/************* General ***************/
void MainWindow::defaultSetupUI(){
    defaultQueryTabUI();
    defaultMoneyTabUI();
}
/*************************************/

/************* Query Tab Section ***************/
void MainWindow::defaultQueryTabUI(){
    //default UI form for 'Query Tab'
    ui->comboBoxQueryReport->setCurrentIndex(3);
    actionReportTypeChanges();
}


void MainWindow::setQueryTabFieldsStatus(bool state){
    //enable or disable all field in 'Query Tab'
    ui->comboBoxQueryEstate->setDisabled(state);
    ui->comboBoxQueryReport->setDisabled(state);
    ui->dateEditQueryDateFrom->setDisabled(state);
    ui->dateEditQueryDateTo->setDisabled(state);
    ui->checkBoxQueryRenter->setDisabled(state);
    ui->checkBoxQueryRenter->setChecked(state);
    ui->comboBoxQueryRenter->setDisabled(state);
    ui->buttonQuery->setDisabled(state);
};

//*** Actions for Query Tab ***
void MainWindow::actionReportTypeChanges(){
    //change field allow depend on 'comboBoxQueryReport'selection

    switch (ui->comboBoxQueryReport->currentIndex()){
        case 0 :
            setQueryTabFieldsStatus(false);
            ui->dateEditQueryDateFrom->setDisabled(true);
            ui->dateEditQueryDateTo->setDisabled(true);
            ui->comboBoxQueryRenter->setDisabled(true);
            break;
        case 1 :
            setQueryTabFieldsStatus(false);
            ui->dateEditQueryDateFrom->setDisabled(true);
            ui->dateEditQueryDateTo->setDisabled(true);
            ui->comboBoxQueryRenter->setDisabled(true);
            break;
        case 3:
            setQueryTabFieldsStatus(false);
            ui->dateEditQueryDateFrom->setDisabled(true);
            ui->dateEditQueryDateTo->setDisabled(true);
            ui->checkBoxQueryRenter->setDisabled(true);
            ui->comboBoxQueryRenter->setDisabled(true);
            break;
        case 4:
            setQueryTabFieldsStatus(false);
            ui->comboBoxQueryRenter->setDisabled(true);
            break;
        case 5 :
            setQueryTabFieldsStatus(false);
            ui->dateEditQueryDateFrom->setDisabled(true);
            ui->dateEditQueryDateTo->setDisabled(true);
            ui->checkBoxQueryRenter->setDisabled(true);
            ui->checkBoxQueryRenter->setChecked(true);
            break;
    break;
    }
}

//*** SIGNAL AND SLOT for Query Tab ***
void MainWindow::on_comboBoxQueryReport_currentIndexChanged(int index)
{
    actionReportTypeChanges();
}

void MainWindow::on_checkBoxQueryRenter_stateChanged(int arg1)
{
    if (arg1){
        ui->comboBoxQueryRenter->setDisabled(false);
    }else{
        ui->comboBoxQueryRenter->setDisabled(true);
    }
}
/***********************************************/

/*###############################################################################*/
/************* Money Tab Section ***************/
void MainWindow::defaultMoneyTabUI(){
    //default UI form for 'Money Tab'
    setMoneyTabFieldsStatus(false);
}

void MainWindow::setMoneyTabFieldsStatus(bool state){
    //enable or disable all field in 'Money Tab'
    ui->comboBoxMoneyEstate->setDisabled(state);
    ui->comboBoxMoneyRenter->setDisabled(state);
    ui->dateEditMoneyDate->setDisabled(state);
    ui->doubleSpinBoxMony->setDisabled(state);
    ui->RadioDeposite->setDisabled(state);
    ui->radioWithdraw->setDisabled(state);
    ui->comboBoxMoneyType->setDisabled(state);
    ui->comboBoxMonyMonth->setDisabled(state);
    ui->textEditMoneyNotes->setDisabled(state);

}

//*** Actions for Query Tab ***
void MainWindow::actionAddFreeMoneyChanges(){
    if (ui->checkBoxAddFreeMoney->isChecked()){
        setMoneyTabFieldsStatus(true);
        ui->comboBoxMoneyEstate->setDisabled(false);
        ui->textEditMoneyNotes->setDisabled(false);
        ui->doubleSpinBoxMony->setDisabled(false);
        ui->RadioDeposite->setDisabled(false);
        ui->radioWithdraw->setDisabled(false);
        ui->dateEditMoneyDate->setDisabled(false);
    }else {
        setMoneyTabFieldsStatus(false);
    }
}
//*** SIGNAL AND SLOT for Query Tab***
void MainWindow::on_checkBoxAddFreeMoney_stateChanged(int arg1)
{
    actionAddFreeMoneyChanges();
}
/***********************************************/

/************* Renter Tab Section ***************/
/************************************************/

/************* Money Tab Section ***************/
/***********************************************/

/************* Estate Tab Section ***************/
/************************************************/

/************* Recipet Tab Section ***************/
/************************************************/


/*###############################################*/
/*###############################################*/




