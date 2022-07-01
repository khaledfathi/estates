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
    db.setTestModel(ui->treeViewResults);
}

void queryResult::on_buttonExit_clicked()
{
    this->close();
}

