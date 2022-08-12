/********************************************************************************
** Form generated from reading UI file 'waterinvoice.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATERINVOICE_H
#define UI_WATERINVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_waterInvoice
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonExit;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *buttonSave;
    QLabel *labelMonth;
    QLabel *labelYear;
    QDoubleSpinBox *doubleSpinBoxInvoceValue;
    QLabel *labelInvoiceValue;
    QComboBox *comboBoxMonth;
    QSpinBox *spinBoxYear;
    QLabel *labelEstate;
    QComboBox *comboBoxEstate;
    QPushButton *buttonDelete;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QRadioButton *radioEditInvoice;
    QRadioButton *radioRrgisterInvoice;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *waterInvoice)
    {
        if (waterInvoice->objectName().isEmpty())
            waterInvoice->setObjectName(QString::fromUtf8("waterInvoice"));
        waterInvoice->resize(450, 280);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(200);
        sizePolicy.setHeightForWidth(waterInvoice->sizePolicy().hasHeightForWidth());
        waterInvoice->setSizePolicy(sizePolicy);
        waterInvoice->setMinimumSize(QSize(450, 280));
        waterInvoice->setMaximumSize(QSize(450, 280));
        waterInvoice->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(waterInvoice);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonExit = new QPushButton(waterInvoice);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        buttonExit->setMinimumSize(QSize(40, 40));
        buttonExit->setAutoDefault(false);

        gridLayout->addWidget(buttonExit, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        widget = new QWidget(waterInvoice);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonSave = new QPushButton(widget);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));
        buttonSave->setMinimumSize(QSize(40, 40));
        buttonSave->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_2->addWidget(buttonSave, 3, 0, 1, 1);

        labelMonth = new QLabel(widget);
        labelMonth->setObjectName(QString::fromUtf8("labelMonth"));

        gridLayout_2->addWidget(labelMonth, 1, 0, 1, 1);

        labelYear = new QLabel(widget);
        labelYear->setObjectName(QString::fromUtf8("labelYear"));

        gridLayout_2->addWidget(labelYear, 1, 2, 1, 1);

        doubleSpinBoxInvoceValue = new QDoubleSpinBox(widget);
        doubleSpinBoxInvoceValue->setObjectName(QString::fromUtf8("doubleSpinBoxInvoceValue"));
        doubleSpinBoxInvoceValue->setMinimumSize(QSize(0, 30));
        doubleSpinBoxInvoceValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxInvoceValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxInvoceValue->setMaximum(999999.000000000000000);
        doubleSpinBoxInvoceValue->setSingleStep(0.250000000000000);

        gridLayout_2->addWidget(doubleSpinBoxInvoceValue, 2, 1, 1, 1);

        labelInvoiceValue = new QLabel(widget);
        labelInvoiceValue->setObjectName(QString::fromUtf8("labelInvoiceValue"));

        gridLayout_2->addWidget(labelInvoiceValue, 2, 0, 1, 1);

        comboBoxMonth = new QComboBox(widget);
        comboBoxMonth->setObjectName(QString::fromUtf8("comboBoxMonth"));
        comboBoxMonth->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(comboBoxMonth, 1, 1, 1, 1);

        spinBoxYear = new QSpinBox(widget);
        spinBoxYear->setObjectName(QString::fromUtf8("spinBoxYear"));
        spinBoxYear->setMinimumSize(QSize(0, 30));
        spinBoxYear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxYear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxYear->setMinimum(1900);
        spinBoxYear->setMaximum(9999);

        gridLayout_2->addWidget(spinBoxYear, 1, 3, 1, 1);

        labelEstate = new QLabel(widget);
        labelEstate->setObjectName(QString::fromUtf8("labelEstate"));
        labelEstate->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(labelEstate, 0, 0, 1, 1);

        comboBoxEstate = new QComboBox(widget);
        comboBoxEstate->setObjectName(QString::fromUtf8("comboBoxEstate"));
        comboBoxEstate->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(comboBoxEstate, 0, 1, 1, 3);

        buttonDelete = new QPushButton(widget);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));
        buttonDelete->setEnabled(true);
        buttonDelete->setMinimumSize(QSize(40, 40));
        buttonDelete->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(buttonDelete, 3, 1, 1, 1);


        gridLayout->addWidget(widget, 1, 0, 1, 2);

        widget_2 = new QWidget(waterInvoice);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(0, 40));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        radioEditInvoice = new QRadioButton(widget_2);
        radioEditInvoice->setObjectName(QString::fromUtf8("radioEditInvoice"));

        gridLayout_3->addWidget(radioEditInvoice, 0, 1, 1, 1);

        radioRrgisterInvoice = new QRadioButton(widget_2);
        radioRrgisterInvoice->setObjectName(QString::fromUtf8("radioRrgisterInvoice"));
        radioRrgisterInvoice->setChecked(true);

        gridLayout_3->addWidget(radioRrgisterInvoice, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(widget_2, 0, 0, 1, 2);


        retranslateUi(waterInvoice);

        buttonExit->setDefault(false);


        QMetaObject::connectSlotsByName(waterInvoice);
    } // setupUi

    void retranslateUi(QDialog *waterInvoice)
    {
        waterInvoice->setWindowTitle(QCoreApplication::translate("waterInvoice", "\331\201\330\247\330\252\331\210\330\261\330\251 \331\205\331\212\330\247\330\251", nullptr));
        buttonExit->setText(QCoreApplication::translate("waterInvoice", "\330\256\330\261\331\210\330\254", nullptr));
        buttonSave->setText(QCoreApplication::translate("waterInvoice", "\330\255\331\201\330\270", nullptr));
        labelMonth->setText(QCoreApplication::translate("waterInvoice", "\330\271\331\206 \330\264\331\207\330\261", nullptr));
        labelYear->setText(QCoreApplication::translate("waterInvoice", "\330\271\331\206 \330\263\331\206\330\251", nullptr));
        labelInvoiceValue->setText(QCoreApplication::translate("waterInvoice", "\331\202\331\212\331\205\330\251 \330\247\331\204\331\201\330\247\330\252\331\210\330\261\330\251", nullptr));
        labelEstate->setText(QCoreApplication::translate("waterInvoice", "\330\271\331\202\330\247\330\261", nullptr));
        buttonDelete->setText(QCoreApplication::translate("waterInvoice", "\330\255\330\260\331\201", nullptr));
        radioEditInvoice->setText(QCoreApplication::translate("waterInvoice", "\330\252\330\271\330\257\331\212\331\204 \331\201\330\247\330\252\331\210\330\261\330\251", nullptr));
        radioRrgisterInvoice->setText(QCoreApplication::translate("waterInvoice", "\330\252\330\263\330\254\331\212\331\204 \331\201\330\247\330\252\331\210\330\261\330\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class waterInvoice: public Ui_waterInvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATERINVOICE_H
