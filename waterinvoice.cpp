#include "waterinvoice.h"
#include "ui_waterinvoice.h"
#include "database.h"
#include "QMessageBox"
#include <QDate>
#include "validation.h"

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
    ui->comboBoxMonth->addItems(months);
}
void waterInvoice::setEstateField()
{
    database db(databaseFilePath);
    db.estatesList(ui->comboBoxEstate);    
}

/*************************/

/********* waterInvoice Dialog ***********/
QList<QString> waterInvoice::getData()
{
    QList<QString> data ;
    data.push_back(ui->comboBoxEstate->currentText());
    data.push_back(QString::number(ui->doubleSpinBoxInvoceValue->value()));
    data.push_back(ui->comboBoxMonth->currentText());
    data.push_back(QString::number(ui->spinBoxYear->value()));
    return data;
}

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
}

//*** Actions for waterInvoice ***
void waterInvoice::actionUIChangesForRegister()
{    
    ui->buttonDelete->setHidden(true);
    ui->buttonSave->setText("حفظ");
    this->setStyleSheet("");    
    ui->comboBoxMonth->clear();
    ui->doubleSpinBoxInvoceValue->setValue(0);
    ui->comboBoxMonth->addItems(months);
    ui->spinBoxYear->setValue(QDate::currentDate().year());
}
void waterInvoice::actionSetInvoiceMonthAndtValues()
{
    if (ui->radioEditInvoice->isChecked()){
        ui->comboBoxMonth->clear();
        database db(databaseFilePath);
        db.setRegisterdMonthList(ui->comboBoxEstate->currentText() , QString::number(ui->spinBoxYear->value()) , ui->comboBoxMonth);
        db.setMoneyValue(ui->comboBoxEstate->currentText() , ui->comboBoxMonth->currentText() , QString::number(ui->spinBoxYear->value()) , ui->doubleSpinBoxInvoceValue);
    }
}

void waterInvoice::actionSetMonyValue()
{
    database db(databaseFilePath);
    db.setMoneyValue(ui->comboBoxEstate->currentText() , ui->comboBoxMonth->currentText() , QString::number(ui->spinBoxYear->value()) , ui->doubleSpinBoxInvoceValue);
}

void waterInvoice::actionUIChangesForEdit()
{
    ui->buttonDelete->setHidden(false);
    ui->buttonSave->setText("تعديل");
    ui->spinBoxYear->setValue(QDate::currentDate().year());
    ui->comboBoxMonth->clear();
    actionSetInvoiceMonthAndtValues();

}

void waterInvoice::actionAddWaterInvoiceRecord()
{
    validation valid ;
    QString message = valid.waterInvoiceValidation(getData());
    if (!message.isEmpty()){
        QMessageBox::warning(this , "خطأ فى البيانات المدخلة" , message );
    }else {
        QList<QString> textData;
        QList<double> doubleData;
        QList<int> intData;
        getDataRecord(&textData , &doubleData , &intData);

        database db(databaseFilePath);

        QString  estate = ui->comboBoxEstate->currentText();
        QString month = ui->comboBoxMonth->currentText();
        QString year = QString::number(ui->spinBoxYear->value());

        if (ui->radioRrgisterInvoice->isChecked()){
            //For Water Invoice Register
            if (db.checkDuplicatedInvoice(estate , month , year)){
                message = "فاتورة شهر " +month + " لسنة " + year +" مسجلة بالفعل";
                QMessageBox::warning(this , "خطأ فى البيانات المسجلة" , message);
            }else{
                db.waterInvoiceRecord(textData , doubleData , intData);
                QMessageBox::information(this , "حالة العملية" , "تم الحفظ");
                ui->doubleSpinBoxInvoceValue->setValue(0);
            }
        }else if (ui->radioEditInvoice->isChecked()){
            //For Water Invoice  Edit
            db.waterInvoiceEditRecord(textData , doubleData , intData);
            QMessageBox::information(this , "حالة العملية", "تم التعديل");

        }


    }
}
void waterInvoice::actionDeleteWaterInvoiceRecord()
{
    if (ui->comboBoxEstate->currentText().isEmpty()){
        QMessageBox::warning(this,"حالة العملية", "لا توجد فواتير للحذف");
    }else {
        if(ui->comboBoxMonth->currentText().isEmpty()) {
            QMessageBox::warning(this,"حالة العملية", "لا توجد فاتورة للحذف");
            return ;
        }
        database db(databaseFilePath);
        db.waterInvoiceDeleteRecord(ui->comboBoxMonth->currentText() , QString::number(ui->spinBoxYear->value()));

        QMessageBox confirm(this) ;
        confirm.setWindowTitle("حالة العملية");
        confirm.setText("تأكيد الحذف !");
        confirm.setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        confirm.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        confirm.setDefaultButton(QMessageBox::No);
        confirm.button(QMessageBox::Yes)->setText("موافق");
        confirm.button(QMessageBox::No)->setText("الغاء");
        if (confirm.exec() == QMessageBox::Yes){
            QMessageBox::information(this,"حالة العملية", "تم الحذف");
            ui->comboBoxMonth->clear();
            db.setRegisterdMonthList(ui->comboBoxEstate->currentText() , QString::number( ui->spinBoxYear->value() ) ,ui->comboBoxMonth);
            db.setMoneyValue(ui->comboBoxEstate->currentText() , ui->comboBoxMonth->currentText() , QString::number( ui->spinBoxYear->value() ) ,ui->doubleSpinBoxInvoceValue);
        }
    }
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

void waterInvoice::on_buttonDelete_clicked()
{
    actionDeleteWaterInvoiceRecord();
}

void waterInvoice::on_comboBoxEstate_currentIndexChanged(int index)
{
    actionSetInvoiceMonthAndtValues();
}

void waterInvoice::on_comboBoxMonth_activated(int index)
{
    actionSetMonyValue();
}

void waterInvoice::on_spinBoxYear_valueChanged(int arg1)
{
    actionSetInvoiceMonthAndtValues();
}

/******************************************/










