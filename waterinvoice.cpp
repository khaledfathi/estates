#include "waterinvoice.h"
#include "ui_waterinvoice.h"
#include "database.h"
#include "QMessageBox"
#include <QDate>

#ifndef _DATABASEFILEPATH_
#define _DATABASEFILEPATH_
extern QString databaseFilePath;
#endif

waterInvoice::waterInvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::waterInvoice)
{
    ui->setupUi(this);
    defaultUI();
    setEstateField();
}

waterInvoice::~waterInvoice()
{
    delete ui;    
}

/******* General *********/
void waterInvoice::defaultUI()
{
    ui->buttonDelete->setHidden(true);
    ui->spinBoxYear->setValue(QDate::currentDate().year());
}
void waterInvoice::setEstateField()
{
    database db(databaseFilePath);
    db.estatesList(ui->comboBoxEstate);
}

/*************************/

/********* waterInvoice Dialog ***********/
void waterInvoice::getDataRecord(QList<QString> *textDate , QList<double> *doubleDate , QList<int> *intData)
{
    //text data
    textDate->push_back(ui->comboBoxEstate->currentText());
    textDate->push_back(ui->comboBoxMonth->currentText());
    //double data
    doubleDate->push_back(ui->doubleSpinBoxInvoceValue->value());
    //int data
    intData->push_back(ui->radioRrgisterInvoice->isChecked());
    intData->push_back(ui->radioEditInvoice->isChecked());
    intData->push_back(ui->spinBoxYear->value());
    intData->push_back(ui->spinBoxPaidUp->value());
}

//*** Actions for waterInvoice ***
void waterInvoice::actionUIChangesForRegister()
{
    ui->buttonDelete->setHidden(true);
    ui->buttonSave->setText("حفظ");
    this->setStyleSheet("");
}

void waterInvoice::actionUIChangesForEdit()
{
    ui->buttonDelete->setHidden(false);
    ui->buttonSave->setText("تعديل");
    this->setStyleSheet("background:#48d6e0;");
}
void waterInvoice::actionAddWaterInvoiceRecord()
{
    QList<QString> textData;
    QList<double> doubleData;
    QList<int> intData;
    getDataRecord(&textData , &doubleData , &intData);
    database db(databaseFilePath);
    db.waterInvoiceRecord(textData , doubleData , intData);
}

//*** SIGNAL AND SLOT for WaterInvoice Dialog***
void waterInvoice::on_radioRrgisterInvoice_clicked()
{
    actionUIChangesForRegister();
}
void waterInvoice::on_radioEditInvoice_clicked()
{
    actionUIChangesForEdit();
}

void waterInvoice::on_buttonExit_clicked()
{
    this->close();
}

void waterInvoice::on_buttonSave_clicked()
{
    actionAddWaterInvoiceRecord();
}

/******************************************/








