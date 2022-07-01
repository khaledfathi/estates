#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
}

about::~about()
{
    delete ui;
}

/*********About APP Section************/

//***Actions for About APP section ***
void about::actionCloseDialog(){
    this->close();

}
//*** SIGNAL And SLOT for APP Section ***
void about::on_pushButton_clicked()
{
    actionCloseDialog();
}
/*********About APP Section************/
