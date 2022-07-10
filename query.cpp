#include "query.h"
#include "ui_query.h"
#include <QMessageBox>
#include "database.h"

extern QString databaseFilePath ;

query::query(QWidget *parent , QList<QString> fieldData , bool isRenterChecked ) :
    QDialog(parent),
    ui(new Ui::query)
{
    data = fieldData;
    renterChecked = isRenterChecked;
    ui->setupUi(this);
    results();
}

query::~query()
{
    delete ui;
}

/************/
void query::results()
{
    if (data[1] == "المبلغ الفعلى"){
        QString estate = data[0];
        database db(databaseFilePath);
        QList<double> results = db.QueryActualMoney(estate);

        ui->tableWidgetResultsTabel->setRowCount(5);
        ui->tableWidgetResultsTabel->setColumnCount(2);
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(0,new QTableWidgetItem("التصنيف"));
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(1,new QTableWidgetItem("اجمالى المبالغ"));
        ui->tableWidgetResultsTabel->setColumnWidth(0,300);
        ui->tableWidgetResultsTabel->setColumnWidth(1,200);

        ui->tableWidgetResultsTabel->verticalHeader()->setVisible(false);
        ui->tableWidgetResultsTabel->setItem(0,0 , new QTableWidgetItem("اجمالى الايجارات المدفوعة "));
        ui->tableWidgetResultsTabel->setItem(1,0 , new QTableWidgetItem("اجمالى المدفوع من فواتير المياة"));
        ui->tableWidgetResultsTabel->setItem(2,0 , new QTableWidgetItem("اجمالى المدفوع من اعمال الصيانة / طوارئ"));
        ui->tableWidgetResultsTabel->setItem(3,0 , new QTableWidgetItem("اجمالى المدفوع بدون تصنيف للمستأجر"));
        ui->tableWidgetResultsTabel->setItem(4,0 , new QTableWidgetItem("اجمالى المدفوع بدون تصنيف للمالك"));

        //set values
        for (int i=0; i<5; i++){
            ui->tableWidgetResultsTabel->setItem(i,1 , new QTableWidgetItem(QString::number(results[i])) );
        }
        ui->labelResultValue->setText(QString("الاجمالى  :  %1 جنية").arg(QString::number(results[5])));


    }

}
/************/


void query::on_buttonExit_clicked()
{
    this->close();
}

