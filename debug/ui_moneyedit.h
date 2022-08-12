/********************************************************************************
** Form generated from reading UI file 'moneyedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEYEDIT_H
#define UI_MONEYEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_moneyEdit
{
public:
    QGridLayout *gridLayout_2;

    void setupUi(QDialog *moneyEdit)
    {
        if (moneyEdit->objectName().isEmpty())
            moneyEdit->setObjectName(QString::fromUtf8("moneyEdit"));
        moneyEdit->resize(504, 289);
        moneyEdit->setLayoutDirection(Qt::RightToLeft);
        gridLayout_2 = new QGridLayout(moneyEdit);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        retranslateUi(moneyEdit);

        QMetaObject::connectSlotsByName(moneyEdit);
    } // setupUi

    void retranslateUi(QDialog *moneyEdit)
    {
        moneyEdit->setWindowTitle(QCoreApplication::translate("moneyEdit", "\330\252\330\271\330\257\331\212\331\204/\330\255\330\260\331\201 \331\205\330\271\330\247\331\205\331\204\330\251 \331\205\330\247\331\204\331\212\330\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moneyEdit: public Ui_moneyEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEYEDIT_H
