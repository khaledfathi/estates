/********************************************************************************
** Form generated from reading UI file 'printprivew.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTPRIVEW_H
#define UI_PRINTPRIVEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_printprivew
{
public:

    void setupUi(QDialog *printprivew)
    {
        if (printprivew->objectName().isEmpty())
            printprivew->setObjectName(QString::fromUtf8("printprivew"));
        printprivew->resize(400, 300);

        retranslateUi(printprivew);

        QMetaObject::connectSlotsByName(printprivew);
    } // setupUi

    void retranslateUi(QDialog *printprivew)
    {
        printprivew->setWindowTitle(QCoreApplication::translate("printprivew", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class printprivew: public Ui_printprivew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTPRIVEW_H
