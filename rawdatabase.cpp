#include "rawdatabase.h"
#include "ui_rawdatabase.h"
#include "database.h""

extern QString databaseFilePath;

rawdatabase::rawdatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rawdatabase)
{
    ui->setupUi(this);
    defaultSetupUI();

}
rawdatabase::~rawdatabase()
{
    delete ui;
}

void rawdatabase::defaultSetupUI()
{
    database db(databaseFilePath);
    db.QueryAllFromTable(ui->treeViewEstatesTable , "estates");
    db.QueryAllFromTable(ui->treeViewRentersTable , "renters");
    db.QueryAllFromTable(ui->treeViewWaterInvoiceTable , "water_invoice");
    db.QueryAllFromTable(ui->treeViewWaterInvoiceValuesTable , "water_invoice_values");
    db.QueryAllFromTable(ui->treeViewMoneyTable , "money");
}

void rawdatabase::on_buttonOK_clicked()
{
    this->close();
}

