#ifndef WATERINVOICE_H
#define WATERINVOICE_H

#include <QDialog>

namespace Ui {
class waterInvoice;
}

class waterInvoice : public QDialog
{
    Q_OBJECT

public:
    explicit waterInvoice(QWidget *parent = nullptr);
    ~waterInvoice();

    /******* General *********/
    void defaultUI();
    void setEstateField();
    /*************************/

    /********* waterInvoice Dialog ***********/
    void getDataRecord(QList<QString> *textDate , QList<double> *doubleDate , QList<int> *intData);
    //Actions
    void actionUIChangesForRegister();
    void actionUIChangesForEdit();
    void actionAddWaterInvoiceRecord();
    /*****************************************/



private slots:
    //*** SIGNAL AND SLOT for WaterInvoice Dialog***
    void on_radioRrgisterInvoice_clicked();
    void on_buttonExit_clicked();
    void on_radioEditInvoice_clicked();
    void on_buttonSave_clicked();

private:
    Ui::waterInvoice *ui;
};

#endif // WATERINVOICE_H
