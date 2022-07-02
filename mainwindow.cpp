#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "database.h"
#include <QDir>
#include "validation.h"
#include "about.h"
#include "queryresult.h"
#include "waterinvoice.h""

/**Global**/
QString databaseFilePath = QDir::currentPath()+"/database.sqlite3";
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
    actionEstatesFiledsFromDatabase();
    actionRentersFiledsFromDatabase();
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
void MainWindow::actionEstatesFiledsFromDatabase()
{
    database db(databaseFilePath);
    db.estatesList(ui->comboBoxMoneyEstate);
    db.estatesList(ui->comboBoxQueryEstate);
    db.estatesList(ui->comboBoxRenterEstate);
    db.estatesList(ui->comboBoxReceiptEstate);
}
void MainWindow::actionRentersFiledsFromDatabase()
{
    database db(databaseFilePath);
    db.rentersList(ui->comboBoxReceiptRenter);
    db.rentersList(ui->comboBoxMoneyRenter);
    db.rentersList(ui->comboBoxQueryRenter);
}

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
void MainWindow::actionAboutQt(){
    QMessageBox::aboutQt(this,"About Qt GUI");
}
void MainWindow::actionAboutApp(){
    about *about_ = new about(this);
    about_->setModal(true);
    about_->show();
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

void MainWindow::on_menuAboutQt_triggered()
{
    actionAboutQt();
}

void MainWindow::on_menuAboutApp_triggered()
{
    actionAboutApp();
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

bool MainWindow::compareQueryDates()
{
    return !( ui->dateEditQueryDateFrom->date() <= ui->dateEditQueryDateTo->date());
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
void MainWindow::actionValidationQuery()
{
    if(ui->dateEditQueryDateFrom->isEnabled()|| ui->dateEditQueryDateTo->isEnabled()){
        if(compareQueryDates()){
            QMessageBox::warning(this,"","التاريخ الاقدم اولاً");
        }
    }
}
void MainWindow::actioncheckBoxQueryRenterChanged(int status)
{
    if (status){
        ui->comboBoxQueryRenter->setDisabled(false);
    }else{
        ui->comboBoxQueryRenter->setDisabled(true);
    }
}
void MainWindow::actionShowQueryResult()
{
    queryResult *res = new queryResult (this) ;
    res->showData();
    res->show();
}

//*** SIGNAL AND SLOT for Query Tab ***
void MainWindow::on_comboBoxQueryReport_currentIndexChanged(int index)
{
    actionQueryReportChanges();
}

void MainWindow::on_checkBoxQueryRenter_stateChanged(int arg1)
{
    actioncheckBoxQueryRenterChanged(arg1);
}

void MainWindow::on_buttonQuery_clicked()
{
    actionValidationQuery();
    actionShowQueryResult();
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
    ui->spinBoxMoneyYear->setDisabled(state);
}
QList<QString> MainWindow::getDataMoney()
{
    QList<QString> data;
    data.push_back(ui->comboBoxMoneyEstate->currentText());
    data.push_back(ui->comboBoxMoneyRenter->currentText());
    data.push_back(ui->dateEditMoneyDate->date().toString());
    data.push_back(QString::number(ui->doubleSpinBoxMony->value()));
    data.push_back(ui->comboBoxMoneyType->currentText());
    data.push_back(QString::number(ui->comboBoxMonyMonth->currentIndex()+1));
    data.push_back(QString::number(ui->spinBoxMoneyYear->value()));
    data.push_back(ui->textEditMoneyNotes->toPlainText());
    return data;
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
        ui->spinBoxMoneyYear->setDisabled(true);
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

void MainWindow::actionValidationMoney()
{
    validation valid ;
    QString message = valid.moneyValidation(getDataMoney());
    if (!message.isEmpty()){
        QMessageBox::warning(this,"خطأ فى البيانات المدخلة",message);
    }
}
void MainWindow::actionShowWaterInvoiceDialog()
{
    waterInvoice *waterInvoiceDialog = new waterInvoice();
    waterInvoiceDialog->show();
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

void MainWindow::on_buttonMoneySave_clicked()
{
    actionValidationMoney();
}

void MainWindow::on_buttonMoneyWaterInvoice_clicked()
{
    actionShowWaterInvoiceDialog();
}
/***********************************************/

/************* Renter Tab Section ***************/
bool MainWindow::compareContractDates()
{
    return !(ui->dateEditContract->date() < ui->dateEditContractEnd->date());
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
    data.push_back(QString::number(ui->spinBoxRenterMoneyValue->value()));
    data.push_back(ui->dateEditContract->date().toString());
    data.push_back(ui->dateEditContractEnd->date().toString());
    data.push_back(ui->comboBoxContractType->currentText());
    return data;
}

void MainWindow::getRenterRecord(QList<QString> *textData , QList<int> *digitData)
{
    textData->push_back(ui->comboBoxRenterEstate->currentText());
    textData->push_back(ui->comboBoxApartmentType->currentText());
    textData->push_back(ui->lineEditRenterName->text());
    textData->push_back(ui->lineEditRenterNationalId->text());
    textData->push_back(ui->lineEditRenterPhone->text());
    textData->push_back(ui->dateEditContract->text());
    textData->push_back(ui->dateEditContractEnd->text());
    textData->push_back(ui->comboBoxContractType->currentText());

    digitData->push_back(ui->spinBoxRenterApartmentNumber->value());
    digitData->push_back(ui->spinBoxRenterMoneyValue->value());
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
         QMessageBox::warning(this,"خطأ فى البيانات المدخلة",message);
     }
 }

 void MainWindow::actionaAddRenterRecord()
 {
     QList<QString> textData;
     QList<int> digitData;
     getRenterRecord(&textData , &digitData);
     database db(databaseFilePath);
     db.RenterRecord(textData , digitData);
 }

//*** SIGNAL AND SLOT for Renter Tab***
void MainWindow::on_buttonRenterEmpty_clicked()
{
    actionButtonRenterEmpty();
}
void MainWindow::on_buttonRenterSave_clicked()
{
    actionValidationRenter();  
    actionaAddRenterRecord();
    actionRentersFiledsFromDatabase();
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

void MainWindow::getEstateRecord(QList<QString> *textData , QList<int> *digitData)
{
    textData->push_back(ui->lineEditEstateName->text().simplified());
    textData->push_back(ui->lineEditOwnerName->text().simplified());
    textData->push_back(ui->lineEditEstateAddress->text().simplified());
    textData->push_back(ui->textEditEstatesNotes->toPlainText());

    digitData->push_back(ui->spinBoxFloors->value());
    digitData->push_back(ui->spinBoxAppartments->value());
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

void MainWindow::actionaAddEstateRecord()
{
    //validation field entry first
    validation valid ;
    QString message = valid.estatesValidation(getDataEstate());
    if (!message.isEmpty()){
      QMessageBox::warning(this,"خطأ فى البيانات المدخلة",message);
    }else{
        QList<QString> textData ;
        QList<int> digitData;
        getEstateRecord(&textData , &digitData);
        database db(databaseFilePath);
        if (db.checkEstatesDuplicated(textData[0]) && !textData[0].isEmpty()){
            QMessageBox::warning(this,"خطأ فى البيانات المسجلة", "اسم رمزى للعقار : الاسم مسجل مسبقا");
        }else{
            db.estateRecord(textData , digitData);
            QMessageBox::information(this,"حالة العملية","تم الحفظ");
            actionButtonEstateEmpty();
        }
    }
}

//*** SIGNAL AND SLOT for Estate Tab***
void MainWindow::on_buttonEstateEmpty_clicked()
{
    actionButtonEstateEmpty();
}

void MainWindow::on_buttonEstateSave_clicked()
{
    actionaAddEstateRecord();
    actionEstatesFiledsFromDatabase();
}
/************************************************/


/************* Recipet Tab Section ***************/
//*** Actions for RecipetTab ***

//*** SIGNAL AND SLOT for Recipet Tab***
/************************************************/



/*###############################################*/
/*###############################################*/
/**** TESTING *****/






