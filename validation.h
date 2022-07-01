#ifndef VALIDATION_H
#define VALIDATION_H
#include <QString>
#include <QMainWindow>

class validation
{
private:
    bool isNumberWithSpaces(QString stringNumbers);
public:
    validation();
    QString estatesValidation(QList<QString> data);
    QString renterValidation(QList<QString> data);
    QString moneyValidation(QList<QString> data);
};

#endif // VALIDATION_H
