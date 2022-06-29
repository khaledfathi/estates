#include "validation.h"
#include <QString>
#include <QList>

validation::validation()
{

}

QString validation::estatesValidation(QList<QString> data)
{
    QString message ="";
    if (data[0] == ""){
        message += "اسم رمزى للعقار (اجبارى)\n";
    }
    if (data[1] == ""){
        message += "اسم المالك (اجبارى)\n";
    }
    if (data[2] == ""){
        message += "عنوان العقار (اجبارى)\n";
    }
    if (data[3] == "" || data[3] == "0"){
        message += "عدد الطوابق لا يمكن ان يكون صفر\n";
    }
    if(data[4] == "" || data[4] == "0"){
        message += "عدد الشقق لا يمكن ان يكون صفر\n";
    }
    return message;
}
