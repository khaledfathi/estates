#include "moneyedit.h"
#include "ui_moneyedit.h"

moneyEdit::moneyEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moneyEdit)
{
    ui->setupUi(this);
}

moneyEdit::~moneyEdit()
{
    delete ui;
}

void moneyEdit::on_ButtonExit_clicked()
{
    this->close();
}

