/********************************************************************************
** Form generated from reading UI file 'printpreview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTPREVIEW_H
#define UI_PRINTPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_printpreview
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowserResult;
    QPushButton *buttonExit;
    QPushButton *buttonPrint;

    void setupUi(QDialog *printpreview)
    {
        if (printpreview->objectName().isEmpty())
            printpreview->setObjectName(QString::fromUtf8("printpreview"));
        printpreview->resize(454, 262);
        printpreview->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(printpreview);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        textBrowserResult = new QTextBrowser(printpreview);
        textBrowserResult->setObjectName(QString::fromUtf8("textBrowserResult"));
        textBrowserResult->setLayoutDirection(Qt::RightToLeft);
        textBrowserResult->setAutoFillBackground(false);

        gridLayout->addWidget(textBrowserResult, 0, 0, 1, 4);

        buttonExit = new QPushButton(printpreview);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        buttonExit->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(buttonExit, 1, 2, 1, 1);

        buttonPrint = new QPushButton(printpreview);
        buttonPrint->setObjectName(QString::fromUtf8("buttonPrint"));
        buttonPrint->setMinimumSize(QSize(40, 40));

        gridLayout->addWidget(buttonPrint, 1, 0, 1, 1);


        retranslateUi(printpreview);

        QMetaObject::connectSlotsByName(printpreview);
    } // setupUi

    void retranslateUi(QDialog *printpreview)
    {
        printpreview->setWindowTitle(QCoreApplication::translate("printpreview", "\330\247\330\265\330\257\330\247\330\261 \330\247\331\212\330\265\330\247\331\204", nullptr));
        textBrowserResult->setMarkdown(QString());
        textBrowserResult->setHtml(QCoreApplication::translate("printpreview", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" dir='rtl' style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        buttonExit->setText(QCoreApplication::translate("printpreview", "\330\256\330\261\331\210\330\254", nullptr));
        buttonPrint->setText(QCoreApplication::translate("printpreview", "\330\267\330\250\330\247\330\271\330\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class printpreview: public Ui_printpreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTPREVIEW_H
