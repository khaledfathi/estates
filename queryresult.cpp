#include "queryresult.h"
#include "ui_queryresult.h"
#include "database.h"
#include <QMessageBox>


extern QString databaseFilePath;

queryResult::queryResult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::queryResult)
{
    ui->setupUi(this);
    connect(ui->buttonDeleteAll , SIGNAL(clicked()) , parent , SLOT(clearEstatesFields()) );

}

queryResult::~queryResult()
{
    delete ui;    
}

void queryResult::showData()
{
    database db(databaseFilePath);
    db.setTestModel(ui->treeViewResults , "estates");
    db.setTestModel(ui->treeViewResults2 , "renters");
    db.setTestModel(ui->treeViewResult3 , "money");
    db.setTestModel(ui->treeVResult4 , "water_invoice");

}

void queryResult::deleteAll()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE") ;
    db.setDatabaseName(databaseFilePath);

    db.open();
    db.exec("DELETE FROM renters");
    db.exec("DELETE FROM estates");
    db.exec("DELETE FROM money");
    db.exec("DELETE FROM water_invoice");
    db.commit();
    db.close();
    showData();
}

void queryResult::on_buttonExit_clicked()
{
    this->close();
}

void queryResult::test(){

}

void queryResult::on_buttonDeleteAll_clicked()
{
    deleteAll();
}


