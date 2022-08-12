/********************************************************************************
** Form generated from reading UI file 'query.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_H
#define UI_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_query
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidgetResultsTabel;
    QPushButton *buttonExit;
    QLabel *labelResultValue;

    void setupUi(QDialog *query)
    {
        if (query->objectName().isEmpty())
            query->setObjectName(QString::fromUtf8("query"));
        query->resize(545, 400);
        query->setMinimumSize(QSize(545, 400));
        query->setMaximumSize(QSize(545, 400));
        query->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(query);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        widget = new QWidget(query);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidgetResultsTabel = new QTableWidget(widget);
        tableWidgetResultsTabel->setObjectName(QString::fromUtf8("tableWidgetResultsTabel"));
        QFont font;
        font.setPointSize(12);
        tableWidgetResultsTabel->setFont(font);
        tableWidgetResultsTabel->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_2->addWidget(tableWidgetResultsTabel, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 3);

        buttonExit = new QPushButton(query);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonExit->sizePolicy().hasHeightForWidth());
        buttonExit->setSizePolicy(sizePolicy);
        buttonExit->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(buttonExit, 2, 2, 1, 1);

        labelResultValue = new QLabel(query);
        labelResultValue->setObjectName(QString::fromUtf8("labelResultValue"));
        labelResultValue->setMinimumSize(QSize(0, 100));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(true);
        labelResultValue->setFont(font1);
        labelResultValue->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelResultValue, 1, 1, 1, 2);


        retranslateUi(query);

        QMetaObject::connectSlotsByName(query);
    } // setupUi

    void retranslateUi(QDialog *query)
    {
        query->setWindowTitle(QCoreApplication::translate("query", "\330\247\330\263\330\252\330\271\331\204\330\247\331\205", nullptr));
        buttonExit->setText(QCoreApplication::translate("query", "\330\256\330\261\331\210\330\254", nullptr));
        labelResultValue->setText(QCoreApplication::translate("query", "\330\247\331\204\330\247\330\254\331\205\330\247\331\204\331\211  :  0 \330\254\331\206\331\212\330\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class query: public Ui_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_H
