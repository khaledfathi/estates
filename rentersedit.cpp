#include "rentersedit.h"
#include "ui_rentersedit.h"

rentersedit::rentersedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rentersedit)
{
    ui->setupUi(this);
}

rentersedit::~rentersedit()
{
    delete ui;
}

void rentersedit::on_pushButton_clicked()
{
    this->close();
}

