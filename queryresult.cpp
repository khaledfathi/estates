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
}

void queryResult::deleteAll()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE") ;
    db.setDatabaseName(databaseFilePath);

    db.open();
    db.exec("DELETE FROM renters");
    db.exec("DELETE FROM estates");
    db.commit();
    db.close();
    showData();
}

void queryResult::on_buttonExit_clicked()
{
    this->close();
}


void queryResult::on_buttonDeleteAll_clicked()
{
    deleteAll();
}

