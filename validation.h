#ifndef VALIDATION_H
#define VALIDATION_H
#include <QString>
#include <QMainWindow>

class validation
{
private:
    /*********General************/
    bool isNumberWithSpaces(QString stringNumbers);
    /****************************/

public:
    validation();
    /*********Estate Validation************/
    QString estatesValidation(QList<QString> data);
    /**************************************/

    /*********Renter Validation************/
    QString renterValidation(QList<QString> data);
    /**************************************/

    /*********Money Validation************/
    QString moneyValidation(QList<QString> data);
    /*************************************/


    /*********Water Invoice Validation************/
    QString waterInvoiceValidation(QList<QString> data);
    /*********************************************/

};

#endif // VALIDATION_H
