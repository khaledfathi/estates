#include "printpreview.h"
#include "ui_printpreview.h"
#include <QDate>
#include <QPrintDialog>
#include <QPrinter>


printpreview::printpreview(QWidget *parent ,QList<QString> data) :
    QDialog(parent),
    ui(new Ui::printpreview)
{
    ui->setupUi(this);
    data_ = data;
    defaultUI();
}

printpreview::~printpreview()
{
    delete ui;
}

void printpreview::defaultUI()
{

    QString html = "<!DOCTYPE html>\
            <html dir=\"rtl\">\
                <body>\
                    <hr>\
                    <h1 style=\"text-align:center; \">ايصال ايجار</h1><br>\
                    <span>وصلنى من السيد /<b>%1</b></span><br>\
                    <span>مبلغ وقدرة / فقط <b>#%2#</b> جنية مصرى لا غير</span><br>\
                    <span>وذلك عن قيمة ايجار شقة رقم / <b>#%3#</b></span><br>\
                    <span>بالعقار الكائن / %4  </span><br>\
                    <span>عن الفترة من <b>الاول من شهر / %5 لعام %6 وحتى اخرة</b> </span><br>\
                    <h4 style=\"text-align:right;\"> تحريراً فى : %7  &nbsp;&nbsp;&nbsp;</h4>\
                    <h4 style=\"text-align:right\"> توقيع المالك &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</h4><br><br>\
                    <hr>\
                <body>\
            </html>";

    html = html.arg(data_[1],"money","unit number","address",data_[3],data_[2],QDate::currentDate().toString("yyyy/M/d") );

    ui->textBrowserResult->insertHtml(html);
}

void printpreview::on_buttonExit_clicked()
{
    this->close();
}

void printpreview::on_buttonPrint_clicked()
{
    QPrinter printer;
    printer.setPrinterName("print result");

    QPrintDialog *printerDialog = new QPrintDialog(&printer , this);
    printerDialog->exec();
    ui->textBrowserResult->print(&printer);
    this->close();
}

