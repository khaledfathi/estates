#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "database.h"
#include <QDir>
#include "validation.h"

/**Global**/
QString databaseFilePath = QDir::currentPath()+"/test.db";
/**********/

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
    setCurrentDateUI();
    defaultQueryTabUI();
    defaultMoneyTabUI();
}

void MainWindow::setCurrentDateUI(){
    ui->dateEditContract->setDate(QDate::currentDate());
    ui->dateEditContractEnd->setDate(QDate::currentDate());
    ui->dateEditMoneyDate->setDate(QDate::currentDate());
    ui->dateEditQueryDateFrom->setDate(QDate::currentDate());
    ui->dateEditQueryDateTo->setDate(QDate::currentDate());
    ui->spinBoxMoneyYear->setValue(QDate::currentDate().year());
    ui->spinBoxReceiptYear->setValue(QDate::currentDate().year());
}
/*************************************/

/************* MainWindow Section ***************/

//*** Actions for MainWindow Tab ***
void MainWindow::actionbuttonExit(){
    QMessageBox confirm(this);
    confirm.setWindowTitle("خروج");
    confirm.setText("تأكيد الخروج");
    confirm.setLayoutDirection(Qt::LayoutDirection::RightToLeft);
    confirm.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    confirm.setDefaultButton(QMessageBox::No);
    confirm.button(QMessageBox::Yes)->setText("موافق");
    confirm.button(QMessageBox::No)->setText("الغاء");
    if (confirm.exec() == QMessageBox::Yes){
        this->close();
    }
}
//*** SIGNAL AND SLOT for MainWindow Tab ***
void MainWindow::on_menuExit_triggered()
{
    actionbuttonExit();
}

void MainWindow::on_buttonExit_clicked()
{
    actionbuttonExit();
}

/************************************************/

/************* Query Tab Section ***************/
void MainWindow::defaultQueryTabUI(){
    //default UI form for 'Query Tab'
    ui->comboBoxQueryReport->setCurrentIndex(3);
    actionQueryReportChanges();
}

void MainWindow::setQueryTabFieldsStatus(bool state)
{
    //enable or disable all field in 'Query Tab'
    ui->comboBoxQueryEstate->setDisabled(state);
    ui->comboBoxQueryReport->setDisabled(state);
    ui->dateEditQueryDateFrom->setDisabled(state);
    ui->dateEditQueryDateTo->setDisabled(state);
    ui->checkBoxQueryRenter->setDisabled(state);
    ui->checkBoxQueryRenter->setChecked(state);
    ui->comboBoxQueryRenter->setDisabled(state);
    ui->buttonQuery->setDisabled(state);
}

//*** Actions for Query Tab ***
void MainWindow::actionQueryReportChanges()
{
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
    actionQueryReportChanges();
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

/************* Money Tab Section ***************/
void MainWindow::defaultMoneyTabUI()
{
    //default UI form for 'Money Tab'
    setMoneyTabFieldsStatus(false);
}

void MainWindow::setMoneyTabFieldsStatus(bool state)
{
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

//*** Actions for Mony Tab ***
void MainWindow::actionCheckBoxAddFreeMoney()
{
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
void MainWindow::actionButtonMoneyEmpty(){
    ui->dateEditMoneyDate->setDate(QDate::currentDate());
    ui->doubleSpinBoxMony->setValue(0);
    ui->RadioDeposite->setChecked(true);
    ui->comboBoxMoneyType->setCurrentIndex(0);
    ui->comboBoxMonyMonth->setCurrentIndex(0);
    ui->textEditMoneyNotes->clear();
}

//*** SIGNAL AND SLOT for money Tab***
void MainWindow::on_checkBoxAddFreeMoney_stateChanged(int arg1)
{
    actionCheckBoxAddFreeMoney();
}

void MainWindow::on_buttonMoneyEmpty_clicked()
{
    actionButtonMoneyEmpty();
}
/***********************************************/

/************* Renter Tab Section ***************/  //######################################### AAAA
bool MainWindow::compareContractDates()
{
    QDate contractDate = ui->dateEditContract->date();
    QDate contractDateEnd = ui->dateEditContractEnd->date();
    if (contractDate <= contractDateEnd){
        return false;
    }
    return true;
}

QList<QString> MainWindow::getDateRenter()
{
    QList<QString> data;
    data.push_back(ui->comboBoxRenterEstate->currentText());
    data.push_back(QString::number(ui->spinBoxRenterApartmentNumber->value()));
    data.push_back(ui->comboBoxApartmentType->currentText());
    data.push_back(ui->lineEditRenterName->text().simplified());
    data.push_back(ui->lineEditRenterNationalId->text().simplified());
    data.push_back(ui->lineEditRenterPhone->text().simplified());
    data.push_back(ui->dateEditContract->date().toString());
    data.push_back(ui->dateEditContractEnd->date().toString());
    data.push_back(ui->comboBoxContractType->currentText());
    return data;
}

//*** Actions for Renter Tab ***
void MainWindow::actionButtonRenterEmpty()
{
    ui->spinBoxRenterApartmentNumber->setValue(0);
    ui->comboBoxApartmentType->setCurrentIndex(0);
    ui->lineEditRenterName->clear();
    ui->lineEditRenterNationalId->clear();
    ui->lineEditRenterPhone->clear();
    ui->dateEditContract->setDate(QDate::currentDate());
    ui->dateEditContractEnd->setDate(QDate::currentDate());
    ui->comboBoxContractType->setCurrentIndex(0);
}
 void MainWindow::actionValidationRenter()
 {
     validation valid;
     QString message = valid.renterValidation(getDateRenter());
     if (compareContractDates()){
         message+="تاريخ التعاقد يجب ان يسبق تاريخ الانتهاء\n";
     }
     if (!message.isEmpty()){
         QMessageBox::warning(this,"",message);
     }
 }

//*** SIGNAL AND SLOT for Renter Tab***
void MainWindow::on_buttonRenterEmpty_clicked()
{
    actionButtonRenterEmpty();
}
void MainWindow::on_buttonRenterSave_clicked()
{
    actionValidationRenter();
}
/************************************************/

/************* Estate Tab Section ***************/
QList<QString> MainWindow::getDataEstate()
{
    QList<QString> data;
    data.push_back(ui->lineEditEstateName->text().simplified());
    data.push_back(ui->lineEditOwnerName->text().simplified());
    data.push_back(ui->lineEditEstateAddress->text().simplified());
    data.push_back(QString::number(ui->spinBoxFloors->value()).simplified());
    data.push_back(QString::number(ui->spinBoxAppartments->value()).simplified());
    data.push_back(ui->textEditEstatesNotes->toPlainText().simplified());
    return data;
}

//*** Actions for Esate Tab ***
void MainWindow::actionButtonEstateEmpty ()
{
    ui->lineEditEstateName->clear();
    ui->lineEditOwnerName->clear();
    ui->lineEditEstateAddress->clear();
    ui->spinBoxFloors->setValue(0);
    ui->spinBoxAppartments->setValue(0);
    ui->textEditEstatesNotes->clear();
}

void MainWindow::actionValidationEstate()
{
    validation valid ;
    QString message = valid.estatesValidation(getDataEstate());
    if (!message.isEmpty()){
      QMessageBox::warning(this,"",message);
    }
}

//*** SIGNAL AND SLOT for Estate Tab***
void MainWindow::on_buttonEstateEmpty_clicked()
{
    actionButtonEstateEmpty();
}

void MainWindow::on_buttonEstateSave_clicked()
{
    actionValidationEstate();
}
/************************************************/

/************* Recipet Tab Section ***************/
/************************************************/


/*###############################################*/
/*###############################################*/


/**** TESTING *****/

void MainWindow::on_buttonQuery_clicked()
{

}



