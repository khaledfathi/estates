#ifndef WATERINVOICE_H
#define WATERINVOICE_H

#include <QDialog>
#include <QComboBox>

namespace Ui {
class waterInvoice;
}

class waterInvoice : public QDialog
{
    Q_OBJECT

private:
    QList<QString> months ={\
        "1- يناير",\
        "2- فبراير",\
        "3- مارس",\
        "4- ابريل",\
        "5- مايو",\
        "6- يونيو",\
        "7- يوليو",\
        "8- اغسطس",\
        "9- سبتمبر",\
        "10- اكتوبر",\
        "11- نوفمبر",\
        "12- ديسمبر",\
    };
public:

    explicit waterInvoice(QWidget *parent = nullptr , QComboBox *renterName=nullptr);
    ~waterInvoice();

    /******* General *********/
    void defaultUI();
    void setEstateField();
    /*************************/

    /********* waterInvoice Dialog ***********/
    QList<QString> getData();
    void getDataRecord(QList<QString> *textDate , QList<double> *doubleDate , QList<int> *intData);
    //Actions
    void actionUIChangesForRegister();
    void actionUIChangesForEdit();
    void actionSetInvoiceMonthAndtValues();
    void actionSetMonyValue();
    void actionAddWaterInvoiceRecord();
    void actionDeleteWaterInvoiceRecord();

    /*****************************************/



private slots:
    //*** SIGNAL AND SLOT for WaterInvoice Dialog***
    void on_radioRrgisterInvoice_clicked();
    void on_buttonExit_clicked();
    void on_radioEditInvoice_clicked();
    void on_buttonSave_clicked();
    void on_buttonDelete_clicked();
    void on_comboBoxEstate_currentIndexChanged(int index);
    void on_comboBoxMonth_currentIndexChanged(int index);
    void on_spinBoxYear_valueChanged(int arg1);


private:
    Ui::waterInvoice *ui;
};

#endif // WATERINVOICE_H
