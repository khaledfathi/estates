#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "database.h"
#include <QDir>
#include "validation.h"
#include "about.h"
#include "queryresult.h"
#include "waterinvoice.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>

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
    actionRentersFiledsFromDatabase("MONEY");
    actionRentersFiledsFromDatabase("RECIPET");
    actionRentersFiledsFromDatabase("QUERY");
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
void MainWindow::actionRentersFiledsFromDatabase(QString location)
{
    database db(databaseFilePath);
    if (location == "QUERY"){
        db.rentersList(ui->comboBoxQueryRenter, ui->comboBoxQueryEstate->currentText());
    }else if (location == "MONEY"){
        db.rentersList(ui->comboBoxMoneyRenter, ui->comboBoxMoneyEstate->currentText());
    }else if (location == "RECIPET"){
        db.rentersList(ui->comboBoxReceiptRenter , ui->comboBoxReceiptEstate->currentText());
    }
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

void MainWindow::on_comboBoxQueryEstate_currentIndexChanged(int index)
{
    actionRentersFiledsFromDatabase("QUERY");
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
    data.push_back(ui->dateEditMoneyDate->date().toString("yyyy/M/d"));
    data.push_back(QString::number(ui->doubleSpinBoxMony->value()));
    data.push_back(ui->comboBoxMoneyType->currentText());
    data.push_back(QString::number(ui->comboBoxMonyMonth->currentIndex()+1));
    data.push_back(QString::number(ui->spinBoxMoneyYear->value()));
    data.push_back(ui->textEditMoneyNotes->toPlainText());
    return data;
}
void MainWindow::getMoneyRecord(QList<QString> *textData , QList<double> *doubleData , QList<int> *intData)
{
    //text data
    textData->push_back(ui->comboBoxMoneyEstate->currentText());
    textData->push_back(ui->comboBoxMoneyRenter->currentText());
    textData->push_back(ui->dateEditMoneyDate->date().toString("yyyy/M/d"));
    textData->push_back(ui->comboBoxMoneyType->currentText());
    textData->push_back(ui->comboBoxMonyMonth->currentText());
    textData->push_back(ui->textEditMoneyNotes->toPlainText());
    //double data
    doubleData->push_back(ui->doubleSpinBoxMony->value());
    //int data
    intData->push_back(ui->checkBoxAddFreeMoney->isChecked());
    intData->push_back(ui->RadioDeposite->isChecked());
    intData->push_back(ui->radioWithdraw->isChecked());
    intData->push_back(ui->spinBoxMoneyYear->value());
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
    waterInvoice *waterInvoiceDialog = new waterInvoice(this);
    waterInvoiceDialog->show();
}
void MainWindow::actionaAddMoneyRecord()
{
    QList<QString> textDate;
    QList<double> doubleDate;
    QList<int> intDate;
    getMoneyRecord(&textDate, &doubleDate , &intDate);
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

void MainWindow::on_comboBoxMoneyEstate_currentIndexChanged(int index)
{
    actionRentersFiledsFromDatabase("MONEY");
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
    data.push_back(ui->comboBoxApartmentType->currentText());
    data.push_back(QString::number(ui->spinBoxRenterUnitNumber->value()));
    data.push_back(ui->lineEditRenterName->text().simplified());
    data.push_back(ui->lineEditRenterNationalId->text().simplified());
    data.push_back(ui->lineEditRenterPhone->text().simplified());
    data.push_back(QString::number(ui->spinBoxRenterMoneyValue->value()));
    data.push_back(ui->dateEditContract->date().toString("yyyy/M/d"));
    data.push_back(ui->dateEditContractEnd->date().toString("yyyy/M/d"));
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
    textData->push_back(ui->dateEditContract->date().toString("yyyy/M/d"));
    textData->push_back(ui->dateEditContractEnd->date().toString("yyyy/M/d"));
    textData->push_back(ui->comboBoxContractType->currentText());

    digitData->push_back(ui->spinBoxRenterUnitNumber->value());
    digitData->push_back(ui->spinBoxRenterMoneyValue->value());
}

//*** Actions for Renter Tab ***
void MainWindow::actionButtonRenterEmpty()
{
    ui->comboBoxApartmentType->setCurrentIndex(0);
    ui->spinBoxRenterUnitNumber->setValue(0);
    ui->lineEditRenterName->clear();
    ui->lineEditRenterNationalId->clear();
    ui->lineEditRenterPhone->clear();
    ui->spinBoxRenterMoneyValue->clear();
    ui->dateEditContract->setDate(QDate::currentDate());
    ui->dateEditContractEnd->setDate(QDate::currentDate());
    ui->comboBoxContractType->setCurrentIndex(0);
}

void MainWindow::actionaAddRenterRecord()
{
    validation valid;
    QString message = valid.renterValidation(getDateRenter());
    if (compareContractDates()){
        message+="تاريخ التعاقد يجب ان يسبق تاريخ الانتهاء\n";
    }
    if (!message.isEmpty()){
        QMessageBox::warning(this,"خطأ فى البيانات المدخلة",message);
    }else {
        database db(databaseFilePath);
        QString DatabaseMessage = db.checkMaxUnitNumber(ui->comboBoxRenterEstate->currentText() , ui->comboBoxApartmentType->currentText() , ui->spinBoxRenterUnitNumber->value());
        if (!DatabaseMessage.isEmpty()){
            QMessageBox::warning(this, "خطأ فى البيانات المسجلة" , DatabaseMessage);
        }else {
            if (db.checkDuplicatedUnitNumber(ui->comboBoxRenterEstate->currentText() , ui->comboBoxApartmentType->currentText() , ui->spinBoxRenterUnitNumber->value()) ){
                QMessageBox::warning(this,"خطأ فى البيانات المسجلة", "رقم الوحدة مسجل مسبقاً");
            }else {
                QList<QString> textData;
                QList<int> digitData;
                getRenterRecord(&textData , &digitData);
                database db(databaseFilePath);
                db.RenterRecord(textData , digitData);
                QMessageBox::information(this,"حالة العملية", "تم الحفظ");
            }
        }
    }
}

void MainWindow::actionApartmentTypeChanges()
{
    if ( ui->comboBoxApartmentType->currentText() == "شقة" ){
        ui->labelUnitNumber->setText("رقم الوحدة (شقة)");

    }else if ( ui->comboBoxApartmentType->currentText() == "محل" ){
        ui->labelUnitNumber->setText("رقم الوحدة (محل)");
    }
}
//*** SIGNAL AND SLOT for Renter Tab***
void MainWindow::on_buttonRenterEmpty_clicked()
{
    actionButtonRenterEmpty();
}
void MainWindow::on_buttonRenterSave_clicked()
{
    actionaAddRenterRecord();
    actionRentersFiledsFromDatabase("QUERY");
    actionRentersFiledsFromDatabase("MONEY");
    actionRentersFiledsFromDatabase("RECIPET");
}

void MainWindow::on_comboBoxApartmentType_currentIndexChanged(int index)
{
    actionApartmentTypeChanges();
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
    textData->push_back(ui->textEditEstatesNotes->toPlainText().simplified());

    digitData->push_back(ui->spinBoxFloors->value());
    digitData->push_back(ui->spinBoxAppartments->value());
    digitData->push_back(ui->spinBoxWorkshops->value());
}

//*** Actions for Esate Tab ***
void MainWindow::actionButtonEstateEmpty ()
{
    ui->lineEditEstateName->clear();
    ui->lineEditOwnerName->clear();
    ui->lineEditEstateAddress->clear();
    ui->spinBoxFloors->setValue(0);
    ui->spinBoxAppartments->setValue(0);
    ui->spinBoxWorkshops->setValue(0);
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
    actionRentersFiledsFromDatabase("QUERY");
    actionRentersFiledsFromDatabase("MONEY");
    actionRentersFiledsFromDatabase("RECIPET");
}
/************************************************/


/************* Recipet Tab Section ***************/
//*** Actions for RecipetTab ***

//*** SIGNAL AND SLOT for Recipet Tab***
void MainWindow::on_comboBoxReceiptEstate_currentIndexChanged(int index)
{
    actionRentersFiledsFromDatabase("RECIPET");
}
/************************************************/



/*###############################################*/
/*###############################################*/


/**** TESTING *****/

/*Will be deleted */
void MainWindow::clearEstatesFields()
{
    defaultSetupUI();
}
