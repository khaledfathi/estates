/********************************************************************************
** Form generated from reading UI file 'estatesedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTATESEDIT_H
#define UI_ESTATESEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_estatesedit
{
public:
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *spinBox_3;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QSpinBox *spinBox_2;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *estatesedit)
    {
        if (estatesedit->objectName().isEmpty())
            estatesedit->setObjectName(QString::fromUtf8("estatesedit"));
        estatesedit->resize(679, 475);
        gridLayout_3 = new QGridLayout(estatesedit);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(estatesedit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));

        gridLayout_3->addWidget(pushButton, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(estatesedit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(estatesedit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        spinBox_3 = new QSpinBox(estatesedit);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_3, 5, 0, 1, 1);

        label_5 = new QLabel(estatesedit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        spinBox = new QSpinBox(estatesedit);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox, 3, 0, 1, 1);

        label_2 = new QLabel(estatesedit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        textEdit = new QTextEdit(estatesedit);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 6, 0, 1, 1);

        label_6 = new QLabel(estatesedit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_6, 5, 1, 1, 1);

        label_3 = new QLabel(estatesedit);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        lineEdit = new QLineEdit(estatesedit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        comboBox = new QComboBox(estatesedit);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        spinBox_2 = new QSpinBox(estatesedit);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(spinBox_2, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(estatesedit);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(lineEdit_2, 2, 0, 1, 1);

        label_7 = new QLabel(estatesedit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(label_7, 6, 1, 1, 1);

        widget = new QWidget(estatesedit);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(pushButton_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 7, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 2);


        retranslateUi(estatesedit);

        QMetaObject::connectSlotsByName(estatesedit);
    } // setupUi

    void retranslateUi(QDialog *estatesedit)
    {
        estatesedit->setWindowTitle(QCoreApplication::translate("estatesedit", "\330\252\330\271\330\257\331\212\331\204/\330\255\330\260\331\201 \330\271\331\202\330\247\330\261", nullptr));
        pushButton->setText(QCoreApplication::translate("estatesedit", "\330\256\330\261\331\210\330\254", nullptr));
        label->setText(QCoreApplication::translate("estatesedit", "\330\247\330\263\331\205 \330\261\331\205\330\262\331\211 \331\204\331\204\330\271\331\202\330\247\330\261", nullptr));
        label_4->setText(QCoreApplication::translate("estatesedit", "\330\271\330\257\330\257 \330\247\331\204\330\267\331\210\330\247\330\250\331\202", nullptr));
        label_5->setText(QCoreApplication::translate("estatesedit", "\330\271\330\257\330\257 \330\247\331\204\330\264\331\202\331\202", nullptr));
        label_2->setText(QCoreApplication::translate("estatesedit", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\247\331\204\331\203", nullptr));
        label_6->setText(QCoreApplication::translate("estatesedit", "\330\271\330\257\330\257 \330\247\331\204\331\205\330\255\331\204\330\247\330\252", nullptr));
        label_3->setText(QCoreApplication::translate("estatesedit", "\330\271\331\206\331\210\330\247\331\206 \330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        label_7->setText(QCoreApplication::translate("estatesedit", "\330\252\331\201\330\247\330\265\331\212\331\204 \330\247\330\256\330\261\331\211", nullptr));
        pushButton_3->setText(QCoreApplication::translate("estatesedit", "\330\252\330\271\330\257\331\212\331\204 ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("estatesedit", "\330\255\330\260\331\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class estatesedit: public Ui_estatesedit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTATESEDIT_H
