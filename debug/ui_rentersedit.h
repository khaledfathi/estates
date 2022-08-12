/********************************************************************************
** Form generated from reading UI file 'rentersedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTERSEDIT_H
#define UI_RENTERSEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rentersedit
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QGridLayout *gridLayout;
    QDateEdit *dateEdit_2;
    QLabel *label_7;
    QLabel *label_11;
    QComboBox *comboBox_5;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QComboBox *comboBox;
    QLabel *label_13;
    QSpinBox *spinBox;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QLabel *label_8;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QDateEdit *dateEdit;
    QSpinBox *spinBox_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label_4;

    void setupUi(QDialog *rentersedit)
    {
        if (rentersedit->objectName().isEmpty())
            rentersedit->setObjectName(QString::fromUtf8("rentersedit"));
        rentersedit->resize(749, 607);
        rentersedit->setLayoutDirection(Qt::RightToLeft);
        gridLayout_2 = new QGridLayout(rentersedit);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        pushButton = new QPushButton(rentersedit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(pushButton, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateEdit_2 = new QDateEdit(rentersedit);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(dateEdit_2, 9, 1, 1, 1);

        label_7 = new QLabel(rentersedit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_11 = new QLabel(rentersedit);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        comboBox_5 = new QComboBox(rentersedit);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox_5, 3, 1, 1, 1);

        label_9 = new QLabel(rentersedit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        label_10 = new QLabel(rentersedit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        lineEdit_2 = new QLineEdit(rentersedit);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit_2, 5, 1, 1, 1);

        label_2 = new QLabel(rentersedit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        widget = new QWidget(rentersedit);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_14, 0, 2, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(comboBox, 0, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(100, 0));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(spinBox, 0, 3, 1, 1);


        gridLayout->addWidget(widget, 12, 0, 1, 2);

        comboBox_3 = new QComboBox(rentersedit);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox_3, 1, 1, 1, 1);

        comboBox_4 = new QComboBox(rentersedit);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox_4, 10, 1, 1, 1);

        label_6 = new QLabel(rentersedit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        spinBox_3 = new QSpinBox(rentersedit);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_3, 7, 1, 1, 1);

        label_8 = new QLabel(rentersedit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_5 = new QLabel(rentersedit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        comboBox_2 = new QComboBox(rentersedit);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox_2, 0, 1, 1, 1);

        spinBox_2 = new QSpinBox(rentersedit);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_2, 2, 1, 1, 1);

        label_3 = new QLabel(rentersedit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(rentersedit);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit_3, 6, 1, 1, 1);

        label = new QLabel(rentersedit);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dateEdit = new QDateEdit(rentersedit);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(dateEdit, 8, 1, 1, 1);

        spinBox_4 = new QSpinBox(rentersedit);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_4, 11, 1, 1, 1);

        widget_2 = new QWidget(rentersedit);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addWidget(widget_2, 13, 0, 1, 2);

        lineEdit = new QLineEdit(rentersedit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit, 4, 1, 1, 1);

        label_4 = new QLabel(rentersedit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_4, 3, 0, 2, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 3);


        retranslateUi(rentersedit);

        QMetaObject::connectSlotsByName(rentersedit);
    } // setupUi

    void retranslateUi(QDialog *rentersedit)
    {
        rentersedit->setWindowTitle(QCoreApplication::translate("rentersedit", "\330\252\330\271\330\257\331\212\331\204/\330\255\330\260\331\201 \331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        pushButton->setText(QCoreApplication::translate("rentersedit", "\330\256\330\261\331\210\330\254", nullptr));
        label_7->setText(QCoreApplication::translate("rentersedit", "\331\202\331\212\331\205\330\251 \330\247\331\204\330\247\331\212\330\254\330\247\330\261", nullptr));
        label_11->setText(QCoreApplication::translate("rentersedit", "\331\206\330\263\330\250\330\251 \330\263\330\257\330\247\330\257 \330\247\331\204\331\205\331\212\330\247\330\251", nullptr));
        label_9->setText(QCoreApplication::translate("rentersedit", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\206\330\252\331\207\330\247\330\241 \330\247\331\204\330\271\331\202\330\257", nullptr));
        label_10->setText(QCoreApplication::translate("rentersedit", "\331\206\331\210\330\271 \330\247\331\204\330\271\331\202\330\257", nullptr));
        label_2->setText(QCoreApplication::translate("rentersedit", "\331\206\331\210\330\271 \330\247\331\204\330\271\331\212\331\206 \330\247\331\204\331\205\330\244\330\254\330\261\330\251", nullptr));
        label_14->setText(QCoreApplication::translate("rentersedit", "\330\263\331\206\330\251", nullptr));
        label_13->setText(QCoreApplication::translate("rentersedit", "\330\247\330\256\330\261  \330\247\331\212\330\254\330\247\330\261 \331\205\330\263\330\257\330\257", nullptr));
        label_6->setText(QCoreApplication::translate("rentersedit", "\330\252\331\204\331\212\331\201\331\210\331\206", nullptr));
        label_8->setText(QCoreApplication::translate("rentersedit", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\271\331\202\330\257", nullptr));
        label_5->setText(QCoreApplication::translate("rentersedit", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\331\202\331\210\331\205\331\211", nullptr));
        label_3->setText(QCoreApplication::translate("rentersedit", "\330\261\331\202\331\205 \330\247\331\204\331\210\330\255\330\257\330\251 (\330\264\331\202\330\251)", nullptr));
        label->setText(QCoreApplication::translate("rentersedit", "\330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        pushButton_3->setText(QCoreApplication::translate("rentersedit", "\330\252\330\271\330\257\331\212\331\204", nullptr));
        pushButton_2->setText(QCoreApplication::translate("rentersedit", "\330\255\330\260\331\201", nullptr));
        label_4->setText(QCoreApplication::translate("rentersedit", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rentersedit: public Ui_rentersedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTERSEDIT_H
