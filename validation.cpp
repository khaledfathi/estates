#include "validation.h"
#include <QString>
#include <QList>
#include <QDate>

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


QString validation::renterValidation(QList<QString> data)
{
    QString message ="";
    if (data[1] == "" || data[1] == "0"){
        message += "رقم الشقة لايمكن ان يكون صفر\n";
    }
    if (data[3] == ""){
        message += "اسم المستأجر (اجبارى)\n";
    }
    if (data[4] == ""){
        message += "الرقم القومى (اجبارى)\n";
    }
    if (data[6] == data[7]){
        message+= "تاريخ العقد وانتهاءة متطابقين\n";
    }
    return message;
}
