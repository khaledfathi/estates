/********************************************************************************
** Form generated from reading UI file 'rawdatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAWDATABASE_H
#define UI_RAWDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rawdatabase
{
public:
    QGridLayout *gridLayout;
    QPushButton *buttonOK;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QLabel *labelWaterInvoiceValuesTable;
    QLabel *labelEstatesTable;
    QTreeView *treeViewEstatesTable;
    QLabel *labelRentersTable;
    QLabel *labelWaterInvoiceTable;
    QTreeView *treeViewRentersTable;
    QLabel *labelMoneyTable;
    QTreeView *treeViewWaterInvoiceTable;
    QTreeView *treeViewWaterInvoiceValuesTable;
    QTreeView *treeViewMoneyTable;

    void setupUi(QDialog *rawdatabase)
    {
        if (rawdatabase->objectName().isEmpty())
            rawdatabase->setObjectName(QString::fromUtf8("rawdatabase"));
        rawdatabase->resize(680, 450);
        rawdatabase->setMinimumSize(QSize(680, 450));
        rawdatabase->setMaximumSize(QSize(680, 450));
        gridLayout = new QGridLayout(rawdatabase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonOK = new QPushButton(rawdatabase);
        buttonOK->setObjectName(QString::fromUtf8("buttonOK"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonOK->sizePolicy().hasHeightForWidth());
        buttonOK->setSizePolicy(sizePolicy);
        buttonOK->setMinimumSize(QSize(40, 40));
        buttonOK->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(buttonOK, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        scrollArea = new QScrollArea(rawdatabase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setLayoutDirection(Qt::LeftToRight);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 646, 1432));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelWaterInvoiceValuesTable = new QLabel(scrollAreaWidgetContents_2);
        labelWaterInvoiceValuesTable->setObjectName(QString::fromUtf8("labelWaterInvoiceValuesTable"));
        labelWaterInvoiceValuesTable->setLayoutDirection(Qt::RightToLeft);
        labelWaterInvoiceValuesTable->setStyleSheet(QString::fromUtf8("font: 12pt \"Sans Serif\";"));
        labelWaterInvoiceValuesTable->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelWaterInvoiceValuesTable, 6, 0, 1, 1);

        labelEstatesTable = new QLabel(scrollAreaWidgetContents_2);
        labelEstatesTable->setObjectName(QString::fromUtf8("labelEstatesTable"));
        labelEstatesTable->setLayoutDirection(Qt::RightToLeft);
        labelEstatesTable->setStyleSheet(QString::fromUtf8("font: 12pt \"Sans Serif\";"));
        labelEstatesTable->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelEstatesTable, 0, 0, 1, 1);

        treeViewEstatesTable = new QTreeView(scrollAreaWidgetContents_2);
        treeViewEstatesTable->setObjectName(QString::fromUtf8("treeViewEstatesTable"));
        treeViewEstatesTable->setMinimumSize(QSize(0, 250));
        treeViewEstatesTable->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(treeViewEstatesTable, 1, 0, 1, 1);

        labelRentersTable = new QLabel(scrollAreaWidgetContents_2);
        labelRentersTable->setObjectName(QString::fromUtf8("labelRentersTable"));
        labelRentersTable->setLayoutDirection(Qt::RightToLeft);
        labelRentersTable->setStyleSheet(QString::fromUtf8("font: 12pt \"Sans Serif\";"));
        labelRentersTable->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelRentersTable, 2, 0, 1, 1);

        labelWaterInvoiceTable = new QLabel(scrollAreaWidgetContents_2);
        labelWaterInvoiceTable->setObjectName(QString::fromUtf8("labelWaterInvoiceTable"));
        labelWaterInvoiceTable->setLayoutDirection(Qt::RightToLeft);
        labelWaterInvoiceTable->setStyleSheet(QString::fromUtf8("font: 12pt \"Sans Serif\";"));
        labelWaterInvoiceTable->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelWaterInvoiceTable, 4, 0, 1, 1);

        treeViewRentersTable = new QTreeView(scrollAreaWidgetContents_2);
        treeViewRentersTable->setObjectName(QString::fromUtf8("treeViewRentersTable"));
        treeViewRentersTable->setMinimumSize(QSize(0, 250));
        treeViewRentersTable->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(treeViewRentersTable, 3, 0, 1, 1);

        labelMoneyTable = new QLabel(scrollAreaWidgetContents_2);
        labelMoneyTable->setObjectName(QString::fromUtf8("labelMoneyTable"));
        labelMoneyTable->setLayoutDirection(Qt::RightToLeft);
        labelMoneyTable->setStyleSheet(QString::fromUtf8("font: 12pt \"Sans Serif\";"));
        labelMoneyTable->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelMoneyTable, 8, 0, 1, 1);

        treeViewWaterInvoiceTable = new QTreeView(scrollAreaWidgetContents_2);
        treeViewWaterInvoiceTable->setObjectName(QString::fromUtf8("treeViewWaterInvoiceTable"));
        treeViewWaterInvoiceTable->setMinimumSize(QSize(0, 250));
        treeViewWaterInvoiceTable->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(treeViewWaterInvoiceTable, 5, 0, 1, 1);

        treeViewWaterInvoiceValuesTable = new QTreeView(scrollAreaWidgetContents_2);
        treeViewWaterInvoiceValuesTable->setObjectName(QString::fromUtf8("treeViewWaterInvoiceValuesTable"));
        treeViewWaterInvoiceValuesTable->setMinimumSize(QSize(0, 250));
        treeViewWaterInvoiceValuesTable->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(treeViewWaterInvoiceValuesTable, 7, 0, 1, 1);

        treeViewMoneyTable = new QTreeView(scrollAreaWidgetContents_2);
        treeViewMoneyTable->setObjectName(QString::fromUtf8("treeViewMoneyTable"));
        treeViewMoneyTable->setMinimumSize(QSize(0, 250));
        treeViewMoneyTable->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(treeViewMoneyTable, 9, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 3);


        retranslateUi(rawdatabase);

        QMetaObject::connectSlotsByName(rawdatabase);
    } // setupUi

    void retranslateUi(QDialog *rawdatabase)
    {
        rawdatabase->setWindowTitle(QCoreApplication::translate("rawdatabase", "\330\254\330\257\330\247\331\210\331\204 \330\247\331\204\330\250\331\212\330\247\331\206\330\247\330\252", nullptr));
        buttonOK->setText(QCoreApplication::translate("rawdatabase", "\331\205\331\210\330\247\331\201\331\202", nullptr));
        labelWaterInvoiceValuesTable->setText(QCoreApplication::translate("rawdatabase", "\330\254\330\257\331\210\331\204 \330\252\331\202\330\263\331\212\331\205 \331\201\330\247\330\252\331\210\330\261\330\251 \330\247\331\204\331\205\331\212\330\247\330\251 \330\271\331\204\331\211 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261\331\212\331\206", nullptr));
        labelEstatesTable->setText(QCoreApplication::translate("rawdatabase", "\330\254\330\257\331\210\331\204 \330\247\331\204\330\271\331\202\330\247\330\261\330\247\330\252", nullptr));
        labelRentersTable->setText(QCoreApplication::translate("rawdatabase", "\330\254\330\257\331\210\331\204 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261\331\212\331\206", nullptr));
        labelWaterInvoiceTable->setText(QCoreApplication::translate("rawdatabase", "\330\254\330\257\331\210\331\204 \331\201\330\247\330\252\331\210\330\261\330\251 \330\247\331\204\331\205\331\212\330\247\330\251", nullptr));
        labelMoneyTable->setText(QCoreApplication::translate("rawdatabase", "\330\254\330\257\331\210\331\204 \330\247\331\204\331\205\330\271\330\247\331\205\331\204\330\247\330\252 \330\247\331\204\331\205\330\247\331\204\331\212\330\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rawdatabase: public Ui_rawdatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAWDATABASE_H
