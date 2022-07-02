#include "waterinvoice.h"
#include "ui_waterinvoice.h"

waterInvoice::waterInvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::waterInvoice)
{
    ui->setupUi(this);
}

waterInvoice::~waterInvoice()
{
    delete ui;
}

void waterInvoice::on_pushButton_2_clicked()
{
    this->close();
}

