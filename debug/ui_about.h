/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(500, 320);
        about->setMinimumSize(QSize(500, 320));
        about->setMaximumSize(QSize(500, 320));
        about->setLayoutDirection(Qt::RightToLeft);
        gridLayout = new QGridLayout(about);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(about);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLineWidth(0);
        label->setMidLineWidth(0);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setIndent(-1);
        label->setOpenExternalLinks(false);

        gridLayout->addWidget(label, 1, 0, 1, 3);

        textBrowser = new QTextBrowser(about);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 3);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("about", "\331\205\331\210\330\247\331\201\331\202", nullptr));
        label->setText(QCoreApplication::translate("about", "App Version : 1.0 Alpha (June 2022)  \n"
"\n"
"Licenes : OpenSource (GPL v2)\n"
"\n"
"Contact : khaledfathi@protonmail.com", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("about", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:700;\">estates</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:700;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\331\207\331\210 \330\250\330\261\331\206\330\247\331\205\330\254 \331"
                        "\205\330\256\330\265\330\265 \331\204\331\205\330\247\331\204\331\203\331\211 \330\247\331\204\330\271\331\202\330\247\330\261\330\247\330\252 \330\214 \331\212\330\252\331\212\330\255 \330\247\331\204\330\250\330\261\330\247\331\206\330\247\331\205\330\254 \330\247\331\204\330\252\330\255\331\203\331\205 \331\210\331\205\330\252\330\247\330\250\330\271\330\251 \330\252\331\201\330\247\330\265\331\212\331\204 \330\247\331\204\331\205\330\271\330\247\331\205\331\204\330\247\330\252 \330\247\331\204\331\205\330\247\331\204\331\212\330\251 \331\210\330\247\331\204\331\205\330\257\331\212\331\210\331\206\331\212\330\247\330\252 \330\247\331\204\330\256\330\247\330\265\330\251 \330\250\330\247\331\204\330\271\331\202\330\247\330\261 </span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0"
                        "px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\330\265\331\205\331\205 \331\207\330\260\330\247 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254 \331\204\331\212\330\252\331\206\330\247\330\263\330\250 \331\205\330\271 \330\255\330\247\330\254\330\251 \331\205\330\247\331\204\331\203\331\211 \330\247\331\204\330\271\331\202\330\247\330\261\330\247\330\252 \331\201\331\211 \330\254\331\205\331\207\331\210\330\261\331\212\330\251 \331\205\330\265\330\261 \330\247\331\204\330\271\330\261\330\250\331\212\330\251 </span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
