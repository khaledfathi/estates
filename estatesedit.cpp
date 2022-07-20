#include "estatesedit.h"
#include "ui_estatesedit.h"

estatesedit::estatesedit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::estatesedit)
{
    ui->setupUi(this);
}

estatesedit::~estatesedit()
{
    delete ui;
}

void estatesedit::on_pushButton_clicked()
{
    this->close();
}

