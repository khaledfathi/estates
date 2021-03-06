#include "validation.h"
#include <QString>
#include <QList>
#include <QDate>
#include <QMessageBox>

validation::validation()
{

}
/*********General************/
bool validation::isNumberWithSpaces(QString stringNumbers)
{
    QRegExp re("\\d*");
    QString lineWithNoSpaces ="";
    for (int i=0; i<stringNumbers.size(); i++){
        if (stringNumbers[i] != ' '){
            lineWithNoSpaces += stringNumbers[i];
        }
    }
    return re.exactMatch(lineWithNoSpaces);
}
/***************************/

/*********Estate Validation************/
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

/**************************************/

/*********Renter Validation************/
QString validation::renterValidation(QList<QString> data)
{
    QString message ="";
    if (data[0].isEmpty()){
        message+= "سجل عقار اولاً\n";
    }
    if (data[2].isEmpty()|| data[2] == "0"){
        message += "رقم الوحدة لايمكن ان يكون صفر\n";
    }
    if (data[3].isEmpty()){
        message += "اسم المستأجر (اجبارى)\n";
    }
    QRegExp re("\\d*"); //[digit] one or more
    if (data[4].isEmpty()){
        message += "الرقم القومى (اجبارى)\n";
    }else if (!re.exactMatch(data[4])){
        message += "الرقم القومى (ارقام فقط)\n";
    }else if(data[4].size() < 14){
        message += "رقم قومى خاطئ - الرقم القومى 14 رقم\n";
    }
    if (!isNumberWithSpaces(data[5])){
        message += "رقم التليفون (ارقام فقط والفاصل مسافة)\n";
    }
    if (data[6].isEmpty() || data[6] == "0"){
        message += "قيمة الايجار لا يمكن ان تكون صفر\n";
    }
    if (data[7] == data[8]){
        message+= "لا يمكن ان يكون تاريخ العقد وانتهاءة متطابقين\n";
    }
    QDate dateFrom = QDate::fromString(data[7] , "yyyy/M/d");
    QDate dateTo = QDate::fromString(data[8] , "yyyy/M/d");
    QDate lastPaidRentDate = QDate::fromString(data[12]+"/"+data[11]+"/1","yyyy/M/d");

    if ( (lastPaidRentDate.year() < dateFrom.year() || lastPaidRentDate.year() > dateTo.year()) ||\
         ((lastPaidRentDate.year() == dateFrom.year()) && lastPaidRentDate.month() < dateFrom.month() )||\
         ((lastPaidRentDate.year() == dateTo.year()) && lastPaidRentDate.month() > dateTo.month() ) ){
            message+= "تاريخ الفواتير المسددة يقع بين شهر " + QString::number(dateFrom.month())+"/"+QString::number(dateFrom.year())+" الى "+QString::number(dateTo.month())+"/"+QString::number(dateTo.year()) +"\n";
    }
    return message;
}

/***************************************/

/*********Money Validation************/
QString validation::moneyValidation(QList<QString> data)
{
    QString message ="";
    if (data[0].isEmpty()){
        message += "سجل عقار أولاً\n";
    }
    if (data[1].isEmpty() && !(data[8].toInt())){
        message += "سجل مستأجر أولاً\n";
    }
    if (data[3].toFloat() == 0){
        message += "المبلغ المدفوع لا يمكن ان يكون صفر\n";
    }
    if (data[5].isEmpty()){
        message += "لا توجد فواتير مستحقة الدفع لهذا العام\n";
    }
    return message;
}
/*************************************/

/*********Water Invoice Validation************/
QString validation::waterInvoiceValidation(QList<QString> data)
{
    QString message = "" ;
    if (data[0].isEmpty()){
        message += "سجل عقار أولاً\n";
    }
    if (data[1] == "0"){
        message += "المبلغ المدفوع لا يمكن ان يكون صفر\n";
    }
    if (data[2].isEmpty()){
        message+= "لا توجد فواتير متاحة لسنة " + data[3] + "\n";
    }
    return message;
}
/*********************************************/
