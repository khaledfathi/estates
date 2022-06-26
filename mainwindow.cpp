#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    customSetupUI();
    this->setWindowIcon(QIcon(":/icon/icon/app_icon.ico"));
}
MainWindow::~MainWindow()
{
    delete ui;
}
/************* General ***************/
void MainWindow::customSetupUI(){
    //set up all QDate to current date
}
/*************************************/




