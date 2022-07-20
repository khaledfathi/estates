#include "query.h"
#include "ui_query.h"
#include <QMessageBox>
#include "database.h"
#include <QDate>

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
    QString estate = data[0];
    if (data[1] == "المبلغ الفعلى"){
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
    }else if ((data[1] == "مديونية الايجار")){
        database db(databaseFilePath);
        QList<QList<QString>>  rentIndebtednessTable =  db.QueryRentIndebtednessTable(data[0]);

        double total=0;
        ui->tableWidgetResultsTabel->setColumnCount(2);
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(0,new QTableWidgetItem("التصنيف"));
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(1,new QTableWidgetItem("اجمالى المبالغ"));
        ui->tableWidgetResultsTabel->setColumnWidth(0,300);
        ui->tableWidgetResultsTabel->setColumnWidth(1,200);
        ui->tableWidgetResultsTabel->verticalHeader()->setVisible(false);

        if (!renterChecked){
            ui->tableWidgetResultsTabel->setRowCount(rentIndebtednessTable.size());
            for (int i=0; i<rentIndebtednessTable.size(); i++){
                ui->tableWidgetResultsTabel->setItem(i,0 , new QTableWidgetItem(rentIndebtednessTable[i][0]));
                ui->tableWidgetResultsTabel->setItem(i,1 , new QTableWidgetItem(rentIndebtednessTable[i][1]));
                total += rentIndebtednessTable[i][1].toDouble();

            }
            ui->labelResultValue->setText("الاجمالى "+QString::number(total) +" جنية");
        }else{
            ui->tableWidgetResultsTabel->setRowCount(1);
            for (int i=0; i<rentIndebtednessTable.size(); i++){
                if (rentIndebtednessTable[i][0] == data[4]){
                    ui->tableWidgetResultsTabel->setItem(0,0 , new QTableWidgetItem(rentIndebtednessTable[i][0]));
                    ui->tableWidgetResultsTabel->setItem(0,1 , new QTableWidgetItem(rentIndebtednessTable[i][1]));
                    total = rentIndebtednessTable[i][1].toDouble();
                    break;
                }
            }
            ui->labelResultValue->setText("الاجمالى "+QString::number(total) +" جنية");

        }
    }else if ((data[1] == "مديونية المياة")){
        database db(databaseFilePath);
        QList<QList<QString>>  waterIndebtednessTable =  db.QueryWaterIndebtednessTable(data[0]);

        ui->tableWidgetResultsTabel->setColumnCount(2);
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(0,new QTableWidgetItem("اسم المستأجر"));
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(1,new QTableWidgetItem("مديونية"));
        ui->tableWidgetResultsTabel->verticalHeader()->setVisible(false);
        ui->tableWidgetResultsTabel->setColumnWidth(0,300);
        ui->tableWidgetResultsTabel->setColumnWidth(1,200);
        if (renterChecked){
            for (int i=0; i<waterIndebtednessTable.size(); i++){
                if (data[4] == waterIndebtednessTable[i][0]){
                    ui->tableWidgetResultsTabel->setRowCount(1);
                    ui->tableWidgetResultsTabel->setItem(0,0,new QTableWidgetItem(waterIndebtednessTable[i][0]));
                    ui->tableWidgetResultsTabel->setItem(0,1,new QTableWidgetItem(waterIndebtednessTable[i][1]));
                    ui->labelResultValue->setText("الاجمالى "+waterIndebtednessTable[i][1]+" جنية");
                }
            }

        }else{

            ui->tableWidgetResultsTabel->setRowCount(waterIndebtednessTable.size());

            for (int i=0 ; i<waterIndebtednessTable.size();i++){
                ui->tableWidgetResultsTabel->setItem(i,0,new QTableWidgetItem(waterIndebtednessTable[i][0]));
                ui->tableWidgetResultsTabel->setItem(i,1,new QTableWidgetItem(waterIndebtednessTable[i][1]));
            }
            double total =0;
            for (int i=0; i<waterIndebtednessTable.size(); i++) {
                total += waterIndebtednessTable[i][1].toDouble();
            }
            ui->labelResultValue->setText("الاجمالى "+QString::number(total)+" جنية");

        }

    }else if ((data[1] == "كل المديونيات")){
        this->setMinimumWidth(650);
        this->setMaximumWidth(650);
        database db(databaseFilePath);
        QList<QList<QString>>  waterIndebtednessTable =  db.QueryWaterIndebtednessTable(data[0]);
        QList<QList<QString>>  rentIndebtednessTable =  db.QueryRentIndebtednessTable(data[0]);

        ui->tableWidgetResultsTabel->setRowCount(rentIndebtednessTable.size());
        ui->tableWidgetResultsTabel->setColumnCount(4);
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(0,new QTableWidgetItem("اسم المستأجر"));
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(1,new QTableWidgetItem("مديونية ايجار"));
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(2,new QTableWidgetItem("مديونية مياة"));
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(3,new QTableWidgetItem("اجمالى"));
        ui->tableWidgetResultsTabel->verticalHeader()->setVisible(false);
        ui->tableWidgetResultsTabel->setColumnWidth(0,300);
        ui->tableWidgetResultsTabel->setColumnWidth(1,100);
        ui->tableWidgetResultsTabel->setColumnWidth(2,100);

        if (renterChecked){
            ui->tableWidgetResultsTabel->setRowCount(1);
            double totalForRenter =0;
            double totalForAll=0;
            for (int i=0 ; i<rentIndebtednessTable.size();i++){
                if (rentIndebtednessTable[i][0] == data[4]){
                    ui->tableWidgetResultsTabel->setItem(0,0 , new QTableWidgetItem(rentIndebtednessTable[i][0]));
                    ui->tableWidgetResultsTabel->setItem(0,1 , new QTableWidgetItem(rentIndebtednessTable[i][1]));
                    ui->tableWidgetResultsTabel->setItem(0,2 , new QTableWidgetItem(waterIndebtednessTable[i][1]));
                    totalForRenter = rentIndebtednessTable[i][1].toDouble()  + waterIndebtednessTable[i][1].toDouble();
                    ui->tableWidgetResultsTabel->setItem(0,3 , new QTableWidgetItem(QString::number(totalForRenter) ));
                    totalForAll += totalForRenter;
                    break;
                }
            }
            ui->labelResultValue->setText("الاجمالى "+QString::number(totalForAll)+" جنية");

        }else {
            double totalForRenter =0;
            double totalForAll=0;
            for (int i=0 ; i<rentIndebtednessTable.size();i++){
                ui->tableWidgetResultsTabel->setItem(i,0 , new QTableWidgetItem(rentIndebtednessTable[i][0]));
                ui->tableWidgetResultsTabel->setItem(i,1 , new QTableWidgetItem(rentIndebtednessTable[i][1]));
                ui->tableWidgetResultsTabel->setItem(i,2 , new QTableWidgetItem(waterIndebtednessTable[i][1]));
                totalForRenter = rentIndebtednessTable[i][1].toDouble()  + waterIndebtednessTable[i][1].toDouble();
                ui->tableWidgetResultsTabel->setItem(i,3 , new QTableWidgetItem(QString::number(totalForRenter) ));
                totalForAll += totalForRenter;
            }
            ui->labelResultValue->setText("الاجمالى "+QString::number(totalForAll)+" جنية");
        }
    }else if ((data[1] == "اجمالى المبالغ المحصلة عن فترة")){
        database db(databaseFilePath);
        QList<double>  QueryActualMoneyForPeriod =  db.QueryActualMoneyForPeriod(data[0] , data[2] , data[3] );

        ui->tableWidgetResultsTabel->setRowCount(5);
        ui->tableWidgetResultsTabel->setColumnCount(2);
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(0,new QTableWidgetItem("التصنيف"));
        ui->tableWidgetResultsTabel->setHorizontalHeaderItem(1,new QTableWidgetItem("اجمالى المبالغ"));
        ui->tableWidgetResultsTabel->verticalHeader()->setVisible(false);
        ui->tableWidgetResultsTabel->setColumnWidth(0,300);
        ui->tableWidgetResultsTabel->setColumnWidth(1,200);

        ui->tableWidgetResultsTabel->setItem(0,0 , new QTableWidgetItem("اجمالى الايجارات المدفوعة"));
        ui->tableWidgetResultsTabel->setItem(1,0 , new QTableWidgetItem("اجمال المدفوع من فواتير المياة"));
        ui->tableWidgetResultsTabel->setItem(2,0 , new QTableWidgetItem("اجمالى المدفوع من اعمال الصيانة/طوارئ"));
        ui->tableWidgetResultsTabel->setItem(3,0 , new QTableWidgetItem("اجمالى المدفوع بدون تصنيف للمستأجر"));
        ui->tableWidgetResultsTabel->setItem(4,0 , new QTableWidgetItem("اجمالى المدفوع بدون تصنيف للمالك"));

        double total =0;
        for (int i=0; i<QueryActualMoneyForPeriod.size(); i++){
            ui->tableWidgetResultsTabel->setItem(i,1 ,new QTableWidgetItem(QString::number(QueryActualMoneyForPeriod[i])));
            total += QueryActualMoneyForPeriod[i];
        }
        ui->labelResultValue->setText("الاجمالى "+QString::number(total)+" جنية");
    }
}
/************/


void query::on_buttonExit_clicked()
{
    this->close();
}

