/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menuAboutApp;
    QAction *menuAboutQt;
    QAction *menuExit;
    QAction *menuExport;
    QAction *menuImport;
    QAction *menuViewAllData;
    QAction *menuEditEstates;
    QAction *menuEditRenters;
    QAction *menuEditMoney;
    QAction *menuEditWaterInvoices;
    QAction *menuAboutHelp;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *buttonExit;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QTabWidget *tabWidgetMain;
    QWidget *tabQuery;
    QGridLayout *gridLayout_10;
    QWidget *widget_4;
    QGridLayout *gridLayout_11;
    QComboBox *comboBoxQueryRenter;
    QDateEdit *dateEditQueryDateTo;
    QLabel *labelQueryEstate;
    QCheckBox *checkBoxQueryRenter;
    QDateEdit *dateEditQueryDateFrom;
    QWidget *widget_5;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *buttonQuery;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelQueryReport;
    QComboBox *comboBoxQueryReport;
    QLabel *labelQueryDateFrom;
    QLabel *labelQueryDateTo;
    QComboBox *comboBoxQueryEstate;
    QWidget *tabMoney;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QGridLayout *gridLayout_9;
    QPushButton *buttonMoneyEmpty;
    QPushButton *buttonMoneySave;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonMoneyEdit;
    QLabel *labelMoneyDate;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QRadioButton *RadioDeposite;
    QRadioButton *radioWithdraw;
    QSpacerItem *horizontalSpacer_9;
    QDateEdit *dateEditMoneyDate;
    QComboBox *comboBoxMoneyType;
    QLabel *labelMoneyEstate;
    QLabel *labelMoneyLabel;
    QWidget *widget_10;
    QGridLayout *gridLayout_16;
    QPushButton *buttonMoneyWaterInvoice;
    QCheckBox *checkBoxAddFreeMoney;
    QSpacerItem *horizontalSpacer_10;
    QLabel *labelMoneyRenterName;
    QWidget *widget_9;
    QComboBox *comboBoxMoneyRenter;
    QTextEdit *textEditMoneyNotes;
    QFrame *line;
    QLabel *labelMoneyType;
    QComboBox *comboBoxMoneyEstate;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_8;
    QGridLayout *gridLayout_15;
    QLabel *labelMoneyMonth;
    QLabel *labelMoneyYear;
    QComboBox *comboBoxMonyMonth;
    QSpinBox *spinBoxMoneyYear;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelMoney;
    QDoubleSpinBox *doubleSpinBoxMony;
    QLabel *labelMoneyRemaining;
    QDoubleSpinBox *doubleSpinBoxMoneyRemaining;
    QWidget *tabRenters;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBoxRenterPercent;
    QLabel *labelRenterNationalID;
    QLabel *labelContractEndDate;
    QComboBox *comboBoxApartmentType;
    QLineEdit *lineEditRenterName;
    QLineEdit *lineEditRenterNationalId;
    QComboBox *comboBoxRenterEstate;
    QLabel *labeAprtmentType;
    QLabel *labelContractDate;
    QLabel *labelRenterPhone;
    QLabel *labelRenterMoneyValue;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonRenterSave;
    QPushButton *buttonRenterEdit;
    QPushButton *buttonRenterEmpty;
    QComboBox *comboBoxContractType;
    QLabel *labelRenterPercent;
    QLineEdit *lineEditRenterPhone;
    QDateEdit *dateEditContract;
    QSpinBox *spinBoxRenterUnitNumber;
    QLabel *labeRenterEstate;
    QLabel *labelRenterName;
    QLabel *labelContractType;
    QDateEdit *dateEditContractEnd;
    QLabel *labelUnitNumber;
    QSpinBox *spinBoxRenterMoneyValue;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labellastPaidRent;
    QComboBox *comboBoxLastPaidRentMonth;
    QLabel *label_2;
    QSpinBox *spinBoxLastPaidRentYear;
    QWidget *tabEstates;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEditEstateAddress;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonEstateSave;
    QPushButton *buttonEstateEmpty;
    QPushButton *buttonEstateEdit;
    QLineEdit *lineEditOwnerName;
    QTextEdit *textEditEstatesNotes;
    QLabel *labelEstateAddress;
    QSpinBox *spinBoxAppartments;
    QLabel *labelEstateNotes;
    QSpinBox *spinBoxFloors;
    QLineEdit *lineEditEstateName;
    QLabel *labelFloors;
    QLabel *labelApartments;
    QLabel *labelOwnerName;
    QLabel *labelEstateName;
    QLabel *labelWorkshops;
    QSpinBox *spinBoxWorkshops;
    QWidget *tabReceipt;
    QGridLayout *gridLayout_14;
    QPushButton *buttonPrint;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_6;
    QGridLayout *gridLayout_13;
    QComboBox *comboBoxReceiptEstate;
    QSpacerItem *verticalSpacer_3;
    QComboBox *comboBoxReceiptMonth;
    QComboBox *comboBoxReceiptRenter;
    QLabel *labelReceiptEstate;
    QLabel *labelReceiptRenter;
    QLabel *labelReceiptMonth;
    QLabel *labelReceiptYear;
    QSpinBox *spinBoxReceiptYear;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuView;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 700);
        MainWindow->setMinimumSize(QSize(750, 700));
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        menuAboutApp = new QAction(MainWindow);
        menuAboutApp->setObjectName(QString::fromUtf8("menuAboutApp"));
        menuAboutQt = new QAction(MainWindow);
        menuAboutQt->setObjectName(QString::fromUtf8("menuAboutQt"));
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        menuExport = new QAction(MainWindow);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        menuImport = new QAction(MainWindow);
        menuImport->setObjectName(QString::fromUtf8("menuImport"));
        menuViewAllData = new QAction(MainWindow);
        menuViewAllData->setObjectName(QString::fromUtf8("menuViewAllData"));
        menuEditEstates = new QAction(MainWindow);
        menuEditEstates->setObjectName(QString::fromUtf8("menuEditEstates"));
        menuEditRenters = new QAction(MainWindow);
        menuEditRenters->setObjectName(QString::fromUtf8("menuEditRenters"));
        menuEditMoney = new QAction(MainWindow);
        menuEditMoney->setObjectName(QString::fromUtf8("menuEditMoney"));
        menuEditWaterInvoices = new QAction(MainWindow);
        menuEditWaterInvoices->setObjectName(QString::fromUtf8("menuEditWaterInvoices"));
        menuAboutHelp = new QAction(MainWindow);
        menuAboutHelp->setObjectName(QString::fromUtf8("menuAboutHelp"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonExit = new QPushButton(centralwidget);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));
        buttonExit->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(10);
        buttonExit->setFont(font);
        buttonExit->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(buttonExit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidgetMain = new QTabWidget(centralwidget);
        tabWidgetMain->setObjectName(QString::fromUtf8("tabWidgetMain"));
        tabWidgetMain->setMinimumSize(QSize(0, 30));
        tabWidgetMain->setFont(font);
        tabWidgetMain->setCursor(QCursor(Qt::ArrowCursor));
        tabWidgetMain->setFocusPolicy(Qt::TabFocus);
        tabWidgetMain->setAcceptDrops(false);
        tabWidgetMain->setLayoutDirection(Qt::RightToLeft);
        tabWidgetMain->setAutoFillBackground(false);
        tabWidgetMain->setStyleSheet(QString::fromUtf8(""));
        tabWidgetMain->setTabPosition(QTabWidget::North);
        tabWidgetMain->setTabShape(QTabWidget::Rounded);
        tabWidgetMain->setIconSize(QSize(30, 30));
        tabWidgetMain->setElideMode(Qt::ElideNone);
        tabWidgetMain->setDocumentMode(false);
        tabWidgetMain->setTabsClosable(false);
        tabWidgetMain->setMovable(false);
        tabWidgetMain->setTabBarAutoHide(false);
        tabQuery = new QWidget();
        tabQuery->setObjectName(QString::fromUtf8("tabQuery"));
        gridLayout_10 = new QGridLayout(tabQuery);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        widget_4 = new QWidget(tabQuery);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setFont(font);
        gridLayout_11 = new QGridLayout(widget_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        comboBoxQueryRenter = new QComboBox(widget_4);
        comboBoxQueryRenter->setObjectName(QString::fromUtf8("comboBoxQueryRenter"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxQueryRenter->sizePolicy().hasHeightForWidth());
        comboBoxQueryRenter->setSizePolicy(sizePolicy);
        comboBoxQueryRenter->setMinimumSize(QSize(0, 30));
        comboBoxQueryRenter->setFont(font);

        gridLayout_11->addWidget(comboBoxQueryRenter, 4, 1, 1, 3);

        dateEditQueryDateTo = new QDateEdit(widget_4);
        dateEditQueryDateTo->setObjectName(QString::fromUtf8("dateEditQueryDateTo"));
        sizePolicy.setHeightForWidth(dateEditQueryDateTo->sizePolicy().hasHeightForWidth());
        dateEditQueryDateTo->setSizePolicy(sizePolicy);
        dateEditQueryDateTo->setMinimumSize(QSize(0, 30));
        dateEditQueryDateTo->setFont(font);
        dateEditQueryDateTo->setLayoutDirection(Qt::LeftToRight);
        dateEditQueryDateTo->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditQueryDateTo->setCalendarPopup(true);

        gridLayout_11->addWidget(dateEditQueryDateTo, 3, 3, 1, 1);

        labelQueryEstate = new QLabel(widget_4);
        labelQueryEstate->setObjectName(QString::fromUtf8("labelQueryEstate"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelQueryEstate->sizePolicy().hasHeightForWidth());
        labelQueryEstate->setSizePolicy(sizePolicy1);
        labelQueryEstate->setMinimumSize(QSize(100, 0));
        labelQueryEstate->setFont(font);

        gridLayout_11->addWidget(labelQueryEstate, 0, 0, 1, 1);

        checkBoxQueryRenter = new QCheckBox(widget_4);
        checkBoxQueryRenter->setObjectName(QString::fromUtf8("checkBoxQueryRenter"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBoxQueryRenter->sizePolicy().hasHeightForWidth());
        checkBoxQueryRenter->setSizePolicy(sizePolicy2);
        checkBoxQueryRenter->setMinimumSize(QSize(100, 0));
        checkBoxQueryRenter->setFont(font);

        gridLayout_11->addWidget(checkBoxQueryRenter, 4, 0, 1, 1);

        dateEditQueryDateFrom = new QDateEdit(widget_4);
        dateEditQueryDateFrom->setObjectName(QString::fromUtf8("dateEditQueryDateFrom"));
        sizePolicy.setHeightForWidth(dateEditQueryDateFrom->sizePolicy().hasHeightForWidth());
        dateEditQueryDateFrom->setSizePolicy(sizePolicy);
        dateEditQueryDateFrom->setMinimumSize(QSize(0, 30));
        dateEditQueryDateFrom->setFont(font);
        dateEditQueryDateFrom->setLayoutDirection(Qt::LeftToRight);
        dateEditQueryDateFrom->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditQueryDateFrom->setCurrentSection(QDateTimeEdit::YearSection);
        dateEditQueryDateFrom->setCalendarPopup(true);

        gridLayout_11->addWidget(dateEditQueryDateFrom, 3, 1, 1, 1);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setFont(font);
        gridLayout_12 = new QGridLayout(widget_5);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        buttonQuery = new QPushButton(widget_5);
        buttonQuery->setObjectName(QString::fromUtf8("buttonQuery"));
        buttonQuery->setMinimumSize(QSize(150, 50));
        buttonQuery->setFont(font);
        buttonQuery->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_12->addWidget(buttonQuery, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_6, 0, 0, 1, 1);


        gridLayout_11->addWidget(widget_5, 5, 0, 1, 4);

        labelQueryReport = new QLabel(widget_4);
        labelQueryReport->setObjectName(QString::fromUtf8("labelQueryReport"));
        sizePolicy1.setHeightForWidth(labelQueryReport->sizePolicy().hasHeightForWidth());
        labelQueryReport->setSizePolicy(sizePolicy1);
        labelQueryReport->setMinimumSize(QSize(100, 0));
        labelQueryReport->setFont(font);

        gridLayout_11->addWidget(labelQueryReport, 2, 0, 1, 1);

        comboBoxQueryReport = new QComboBox(widget_4);
        comboBoxQueryReport->addItem(QString());
        comboBoxQueryReport->addItem(QString());
        comboBoxQueryReport->addItem(QString());
        comboBoxQueryReport->addItem(QString());
        comboBoxQueryReport->addItem(QString());
        comboBoxQueryReport->addItem(QString());
        comboBoxQueryReport->setObjectName(QString::fromUtf8("comboBoxQueryReport"));
        sizePolicy.setHeightForWidth(comboBoxQueryReport->sizePolicy().hasHeightForWidth());
        comboBoxQueryReport->setSizePolicy(sizePolicy);
        comboBoxQueryReport->setMinimumSize(QSize(0, 30));
        comboBoxQueryReport->setFont(font);

        gridLayout_11->addWidget(comboBoxQueryReport, 2, 1, 1, 3);

        labelQueryDateFrom = new QLabel(widget_4);
        labelQueryDateFrom->setObjectName(QString::fromUtf8("labelQueryDateFrom"));
        sizePolicy1.setHeightForWidth(labelQueryDateFrom->sizePolicy().hasHeightForWidth());
        labelQueryDateFrom->setSizePolicy(sizePolicy1);
        labelQueryDateFrom->setMinimumSize(QSize(100, 0));
        labelQueryDateFrom->setFont(font);

        gridLayout_11->addWidget(labelQueryDateFrom, 3, 0, 1, 1);

        labelQueryDateTo = new QLabel(widget_4);
        labelQueryDateTo->setObjectName(QString::fromUtf8("labelQueryDateTo"));
        sizePolicy1.setHeightForWidth(labelQueryDateTo->sizePolicy().hasHeightForWidth());
        labelQueryDateTo->setSizePolicy(sizePolicy1);
        labelQueryDateTo->setMinimumSize(QSize(50, 0));
        labelQueryDateTo->setFont(font);
        labelQueryDateTo->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(labelQueryDateTo, 3, 2, 1, 1);

        comboBoxQueryEstate = new QComboBox(widget_4);
        comboBoxQueryEstate->setObjectName(QString::fromUtf8("comboBoxQueryEstate"));
        sizePolicy.setHeightForWidth(comboBoxQueryEstate->sizePolicy().hasHeightForWidth());
        comboBoxQueryEstate->setSizePolicy(sizePolicy);
        comboBoxQueryEstate->setMinimumSize(QSize(0, 30));
        comboBoxQueryEstate->setFont(font);

        gridLayout_11->addWidget(comboBoxQueryEstate, 0, 1, 1, 3);


        gridLayout_10->addWidget(widget_4, 0, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabQuery, icon, QString());
        tabMoney = new QWidget();
        tabMoney->setObjectName(QString::fromUtf8("tabMoney"));
        gridLayout_7 = new QGridLayout(tabMoney);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 7, 0, 1, 1);

        widget_3 = new QWidget(tabMoney);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_9 = new QGridLayout(widget_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        buttonMoneyEmpty = new QPushButton(widget_3);
        buttonMoneyEmpty->setObjectName(QString::fromUtf8("buttonMoneyEmpty"));
        buttonMoneyEmpty->setMinimumSize(QSize(40, 40));

        gridLayout_9->addWidget(buttonMoneyEmpty, 1, 2, 1, 1);

        buttonMoneySave = new QPushButton(widget_3);
        buttonMoneySave->setObjectName(QString::fromUtf8("buttonMoneySave"));
        buttonMoneySave->setMinimumSize(QSize(40, 40));
        buttonMoneySave->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_9->addWidget(buttonMoneySave, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        buttonMoneyEdit = new QPushButton(widget_3);
        buttonMoneyEdit->setObjectName(QString::fromUtf8("buttonMoneyEdit"));
        buttonMoneyEdit->setMinimumSize(QSize(40, 40));

        gridLayout_9->addWidget(buttonMoneyEdit, 1, 3, 1, 1);


        gridLayout_7->addWidget(widget_3, 19, 0, 1, 2);

        labelMoneyDate = new QLabel(tabMoney);
        labelMoneyDate->setObjectName(QString::fromUtf8("labelMoneyDate"));
        sizePolicy1.setHeightForWidth(labelMoneyDate->sizePolicy().hasHeightForWidth());
        labelMoneyDate->setSizePolicy(sizePolicy1);
        labelMoneyDate->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyDate, 6, 0, 1, 1);

        widget_7 = new QWidget(tabMoney);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        RadioDeposite = new QRadioButton(widget_7);
        RadioDeposite->setObjectName(QString::fromUtf8("RadioDeposite"));
        RadioDeposite->setChecked(true);

        horizontalLayout->addWidget(RadioDeposite);

        radioWithdraw = new QRadioButton(widget_7);
        radioWithdraw->setObjectName(QString::fromUtf8("radioWithdraw"));

        horizontalLayout->addWidget(radioWithdraw);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        gridLayout_7->addWidget(widget_7, 12, 0, 1, 2);

        dateEditMoneyDate = new QDateEdit(tabMoney);
        dateEditMoneyDate->setObjectName(QString::fromUtf8("dateEditMoneyDate"));
        sizePolicy.setHeightForWidth(dateEditMoneyDate->sizePolicy().hasHeightForWidth());
        dateEditMoneyDate->setSizePolicy(sizePolicy);
        dateEditMoneyDate->setMinimumSize(QSize(0, 30));
        dateEditMoneyDate->setLayoutDirection(Qt::LeftToRight);
        dateEditMoneyDate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditMoneyDate->setCalendarPopup(true);

        gridLayout_7->addWidget(dateEditMoneyDate, 6, 1, 1, 1);

        comboBoxMoneyType = new QComboBox(tabMoney);
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->setObjectName(QString::fromUtf8("comboBoxMoneyType"));
        sizePolicy.setHeightForWidth(comboBoxMoneyType->sizePolicy().hasHeightForWidth());
        comboBoxMoneyType->setSizePolicy(sizePolicy);
        comboBoxMoneyType->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(comboBoxMoneyType, 15, 1, 1, 1);

        labelMoneyEstate = new QLabel(tabMoney);
        labelMoneyEstate->setObjectName(QString::fromUtf8("labelMoneyEstate"));
        sizePolicy1.setHeightForWidth(labelMoneyEstate->sizePolicy().hasHeightForWidth());
        labelMoneyEstate->setSizePolicy(sizePolicy1);
        labelMoneyEstate->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyEstate, 4, 0, 1, 1);

        labelMoneyLabel = new QLabel(tabMoney);
        labelMoneyLabel->setObjectName(QString::fromUtf8("labelMoneyLabel"));
        sizePolicy1.setHeightForWidth(labelMoneyLabel->sizePolicy().hasHeightForWidth());
        labelMoneyLabel->setSizePolicy(sizePolicy1);
        labelMoneyLabel->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyLabel, 18, 0, 1, 1);

        widget_10 = new QWidget(tabMoney);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy3);
        widget_10->setMinimumSize(QSize(0, 0));
        gridLayout_16 = new QGridLayout(widget_10);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        buttonMoneyWaterInvoice = new QPushButton(widget_10);
        buttonMoneyWaterInvoice->setObjectName(QString::fromUtf8("buttonMoneyWaterInvoice"));
        buttonMoneyWaterInvoice->setMinimumSize(QSize(40, 40));

        gridLayout_16->addWidget(buttonMoneyWaterInvoice, 0, 2, 1, 1);

        checkBoxAddFreeMoney = new QCheckBox(widget_10);
        checkBoxAddFreeMoney->setObjectName(QString::fromUtf8("checkBoxAddFreeMoney"));
        checkBoxAddFreeMoney->setMinimumSize(QSize(0, 30));

        gridLayout_16->addWidget(checkBoxAddFreeMoney, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_10, 0, 1, 1, 1);


        gridLayout_7->addWidget(widget_10, 1, 0, 1, 2);

        labelMoneyRenterName = new QLabel(tabMoney);
        labelMoneyRenterName->setObjectName(QString::fromUtf8("labelMoneyRenterName"));
        sizePolicy1.setHeightForWidth(labelMoneyRenterName->sizePolicy().hasHeightForWidth());
        labelMoneyRenterName->setSizePolicy(sizePolicy1);
        labelMoneyRenterName->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyRenterName, 5, 0, 1, 1);

        widget_9 = new QWidget(tabMoney);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));

        gridLayout_7->addWidget(widget_9, 0, 0, 1, 1);

        comboBoxMoneyRenter = new QComboBox(tabMoney);
        comboBoxMoneyRenter->setObjectName(QString::fromUtf8("comboBoxMoneyRenter"));
        sizePolicy.setHeightForWidth(comboBoxMoneyRenter->sizePolicy().hasHeightForWidth());
        comboBoxMoneyRenter->setSizePolicy(sizePolicy);
        comboBoxMoneyRenter->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(comboBoxMoneyRenter, 5, 1, 1, 1);

        textEditMoneyNotes = new QTextEdit(tabMoney);
        textEditMoneyNotes->setObjectName(QString::fromUtf8("textEditMoneyNotes"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textEditMoneyNotes->sizePolicy().hasHeightForWidth());
        textEditMoneyNotes->setSizePolicy(sizePolicy4);
        textEditMoneyNotes->setLayoutDirection(Qt::RightToLeft);
        textEditMoneyNotes->setTabChangesFocus(true);
        textEditMoneyNotes->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout_7->addWidget(textEditMoneyNotes, 18, 1, 1, 1);

        line = new QFrame(tabMoney);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 8, 0, 1, 2);

        labelMoneyType = new QLabel(tabMoney);
        labelMoneyType->setObjectName(QString::fromUtf8("labelMoneyType"));
        sizePolicy1.setHeightForWidth(labelMoneyType->sizePolicy().hasHeightForWidth());
        labelMoneyType->setSizePolicy(sizePolicy1);
        labelMoneyType->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyType, 15, 0, 1, 1);

        comboBoxMoneyEstate = new QComboBox(tabMoney);
        comboBoxMoneyEstate->setObjectName(QString::fromUtf8("comboBoxMoneyEstate"));
        sizePolicy.setHeightForWidth(comboBoxMoneyEstate->sizePolicy().hasHeightForWidth());
        comboBoxMoneyEstate->setSizePolicy(sizePolicy);
        comboBoxMoneyEstate->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(comboBoxMoneyEstate, 4, 1, 1, 1);

        line_2 = new QFrame(tabMoney);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_2, 13, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 14, 0, 1, 1);

        widget_8 = new QWidget(tabMoney);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_15 = new QGridLayout(widget_8);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        labelMoneyMonth = new QLabel(widget_8);
        labelMoneyMonth->setObjectName(QString::fromUtf8("labelMoneyMonth"));
        sizePolicy1.setHeightForWidth(labelMoneyMonth->sizePolicy().hasHeightForWidth());
        labelMoneyMonth->setSizePolicy(sizePolicy1);
        labelMoneyMonth->setMinimumSize(QSize(100, 0));

        gridLayout_15->addWidget(labelMoneyMonth, 0, 0, 1, 1);

        labelMoneyYear = new QLabel(widget_8);
        labelMoneyYear->setObjectName(QString::fromUtf8("labelMoneyYear"));
        sizePolicy1.setHeightForWidth(labelMoneyYear->sizePolicy().hasHeightForWidth());
        labelMoneyYear->setSizePolicy(sizePolicy1);

        gridLayout_15->addWidget(labelMoneyYear, 0, 2, 1, 1);

        comboBoxMonyMonth = new QComboBox(widget_8);
        comboBoxMonyMonth->setObjectName(QString::fromUtf8("comboBoxMonyMonth"));
        sizePolicy.setHeightForWidth(comboBoxMonyMonth->sizePolicy().hasHeightForWidth());
        comboBoxMonyMonth->setSizePolicy(sizePolicy);
        comboBoxMonyMonth->setMinimumSize(QSize(0, 30));

        gridLayout_15->addWidget(comboBoxMonyMonth, 0, 1, 1, 1);

        spinBoxMoneyYear = new QSpinBox(widget_8);
        spinBoxMoneyYear->setObjectName(QString::fromUtf8("spinBoxMoneyYear"));
        spinBoxMoneyYear->setMinimumSize(QSize(0, 30));
        spinBoxMoneyYear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxMoneyYear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxMoneyYear->setMinimum(1900);
        spinBoxMoneyYear->setMaximum(9999);

        gridLayout_15->addWidget(spinBoxMoneyYear, 0, 3, 1, 1);


        gridLayout_7->addWidget(widget_8, 17, 0, 1, 2);

        widget_11 = new QWidget(tabMoney);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_2 = new QHBoxLayout(widget_11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelMoney = new QLabel(widget_11);
        labelMoney->setObjectName(QString::fromUtf8("labelMoney"));
        sizePolicy1.setHeightForWidth(labelMoney->sizePolicy().hasHeightForWidth());
        labelMoney->setSizePolicy(sizePolicy1);
        labelMoney->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(labelMoney);

        doubleSpinBoxMony = new QDoubleSpinBox(widget_11);
        doubleSpinBoxMony->setObjectName(QString::fromUtf8("doubleSpinBoxMony"));
        sizePolicy.setHeightForWidth(doubleSpinBoxMony->sizePolicy().hasHeightForWidth());
        doubleSpinBoxMony->setSizePolicy(sizePolicy);
        doubleSpinBoxMony->setMinimumSize(QSize(0, 30));
        doubleSpinBoxMony->setWrapping(false);
        doubleSpinBoxMony->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxMony->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxMony->setAccelerated(false);
        doubleSpinBoxMony->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        doubleSpinBoxMony->setDecimals(2);
        doubleSpinBoxMony->setMinimum(-999999.000000000000000);
        doubleSpinBoxMony->setMaximum(999999.000000000000000);
        doubleSpinBoxMony->setSingleStep(0.250000000000000);
        doubleSpinBoxMony->setStepType(QAbstractSpinBox::DefaultStepType);
        doubleSpinBoxMony->setValue(0.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxMony);

        labelMoneyRemaining = new QLabel(widget_11);
        labelMoneyRemaining->setObjectName(QString::fromUtf8("labelMoneyRemaining"));
        sizePolicy1.setHeightForWidth(labelMoneyRemaining->sizePolicy().hasHeightForWidth());
        labelMoneyRemaining->setSizePolicy(sizePolicy1);
        labelMoneyRemaining->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(labelMoneyRemaining);

        doubleSpinBoxMoneyRemaining = new QDoubleSpinBox(widget_11);
        doubleSpinBoxMoneyRemaining->setObjectName(QString::fromUtf8("doubleSpinBoxMoneyRemaining"));
        doubleSpinBoxMoneyRemaining->setEnabled(false);
        sizePolicy2.setHeightForWidth(doubleSpinBoxMoneyRemaining->sizePolicy().hasHeightForWidth());
        doubleSpinBoxMoneyRemaining->setSizePolicy(sizePolicy2);
        doubleSpinBoxMoneyRemaining->setMinimumSize(QSize(100, 30));
        doubleSpinBoxMoneyRemaining->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxMoneyRemaining->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxMoneyRemaining->setMaximum(999999.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBoxMoneyRemaining);


        gridLayout_7->addWidget(widget_11, 9, 0, 1, 2);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/money.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabMoney, icon1, QString());
        tabRenters = new QWidget();
        tabRenters->setObjectName(QString::fromUtf8("tabRenters"));
        gridLayout_6 = new QGridLayout(tabRenters);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        spinBoxRenterPercent = new QSpinBox(tabRenters);
        spinBoxRenterPercent->setObjectName(QString::fromUtf8("spinBoxRenterPercent"));
        spinBoxRenterPercent->setMinimumSize(QSize(0, 30));
        spinBoxRenterPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRenterPercent->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxRenterPercent->setMaximum(200);
        spinBoxRenterPercent->setValue(100);

        gridLayout_6->addWidget(spinBoxRenterPercent, 11, 1, 1, 1);

        labelRenterNationalID = new QLabel(tabRenters);
        labelRenterNationalID->setObjectName(QString::fromUtf8("labelRenterNationalID"));
        sizePolicy1.setHeightForWidth(labelRenterNationalID->sizePolicy().hasHeightForWidth());
        labelRenterNationalID->setSizePolicy(sizePolicy1);
        labelRenterNationalID->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelRenterNationalID, 5, 0, 1, 1);

        labelContractEndDate = new QLabel(tabRenters);
        labelContractEndDate->setObjectName(QString::fromUtf8("labelContractEndDate"));
        sizePolicy1.setHeightForWidth(labelContractEndDate->sizePolicy().hasHeightForWidth());
        labelContractEndDate->setSizePolicy(sizePolicy1);
        labelContractEndDate->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelContractEndDate, 9, 0, 1, 1);

        comboBoxApartmentType = new QComboBox(tabRenters);
        comboBoxApartmentType->addItem(QString());
        comboBoxApartmentType->addItem(QString());
        comboBoxApartmentType->setObjectName(QString::fromUtf8("comboBoxApartmentType"));
        sizePolicy.setHeightForWidth(comboBoxApartmentType->sizePolicy().hasHeightForWidth());
        comboBoxApartmentType->setSizePolicy(sizePolicy);
        comboBoxApartmentType->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(comboBoxApartmentType, 1, 1, 1, 1);

        lineEditRenterName = new QLineEdit(tabRenters);
        lineEditRenterName->setObjectName(QString::fromUtf8("lineEditRenterName"));
        sizePolicy.setHeightForWidth(lineEditRenterName->sizePolicy().hasHeightForWidth());
        lineEditRenterName->setSizePolicy(sizePolicy);
        lineEditRenterName->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(lineEditRenterName, 4, 1, 1, 1);

        lineEditRenterNationalId = new QLineEdit(tabRenters);
        lineEditRenterNationalId->setObjectName(QString::fromUtf8("lineEditRenterNationalId"));
        sizePolicy.setHeightForWidth(lineEditRenterNationalId->sizePolicy().hasHeightForWidth());
        lineEditRenterNationalId->setSizePolicy(sizePolicy);
        lineEditRenterNationalId->setMinimumSize(QSize(0, 30));
        lineEditRenterNationalId->setMaxLength(14);

        gridLayout_6->addWidget(lineEditRenterNationalId, 5, 1, 1, 1);

        comboBoxRenterEstate = new QComboBox(tabRenters);
        comboBoxRenterEstate->setObjectName(QString::fromUtf8("comboBoxRenterEstate"));
        sizePolicy.setHeightForWidth(comboBoxRenterEstate->sizePolicy().hasHeightForWidth());
        comboBoxRenterEstate->setSizePolicy(sizePolicy);
        comboBoxRenterEstate->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(comboBoxRenterEstate, 0, 1, 1, 1);

        labeAprtmentType = new QLabel(tabRenters);
        labeAprtmentType->setObjectName(QString::fromUtf8("labeAprtmentType"));
        sizePolicy1.setHeightForWidth(labeAprtmentType->sizePolicy().hasHeightForWidth());
        labeAprtmentType->setSizePolicy(sizePolicy1);
        labeAprtmentType->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labeAprtmentType, 1, 0, 1, 1);

        labelContractDate = new QLabel(tabRenters);
        labelContractDate->setObjectName(QString::fromUtf8("labelContractDate"));
        sizePolicy1.setHeightForWidth(labelContractDate->sizePolicy().hasHeightForWidth());
        labelContractDate->setSizePolicy(sizePolicy1);
        labelContractDate->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelContractDate, 8, 0, 1, 1);

        labelRenterPhone = new QLabel(tabRenters);
        labelRenterPhone->setObjectName(QString::fromUtf8("labelRenterPhone"));
        sizePolicy1.setHeightForWidth(labelRenterPhone->sizePolicy().hasHeightForWidth());
        labelRenterPhone->setSizePolicy(sizePolicy1);
        labelRenterPhone->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelRenterPhone, 6, 0, 1, 1);

        labelRenterMoneyValue = new QLabel(tabRenters);
        labelRenterMoneyValue->setObjectName(QString::fromUtf8("labelRenterMoneyValue"));
        sizePolicy1.setHeightForWidth(labelRenterMoneyValue->sizePolicy().hasHeightForWidth());
        labelRenterMoneyValue->setSizePolicy(sizePolicy1);
        labelRenterMoneyValue->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelRenterMoneyValue, 7, 0, 1, 1);

        widget_2 = new QWidget(tabRenters);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        buttonRenterSave = new QPushButton(widget_2);
        buttonRenterSave->setObjectName(QString::fromUtf8("buttonRenterSave"));
        buttonRenterSave->setMinimumSize(QSize(40, 40));
        buttonRenterSave->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_8->addWidget(buttonRenterSave, 1, 0, 1, 1);

        buttonRenterEdit = new QPushButton(widget_2);
        buttonRenterEdit->setObjectName(QString::fromUtf8("buttonRenterEdit"));
        buttonRenterEdit->setMinimumSize(QSize(40, 40));

        gridLayout_8->addWidget(buttonRenterEdit, 1, 3, 1, 1);

        buttonRenterEmpty = new QPushButton(widget_2);
        buttonRenterEmpty->setObjectName(QString::fromUtf8("buttonRenterEmpty"));
        buttonRenterEmpty->setMinimumSize(QSize(40, 40));

        gridLayout_8->addWidget(buttonRenterEmpty, 1, 2, 1, 1);


        gridLayout_6->addWidget(widget_2, 13, 0, 1, 2);

        comboBoxContractType = new QComboBox(tabRenters);
        comboBoxContractType->addItem(QString());
        comboBoxContractType->addItem(QString());
        comboBoxContractType->setObjectName(QString::fromUtf8("comboBoxContractType"));
        sizePolicy.setHeightForWidth(comboBoxContractType->sizePolicy().hasHeightForWidth());
        comboBoxContractType->setSizePolicy(sizePolicy);
        comboBoxContractType->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(comboBoxContractType, 10, 1, 1, 1);

        labelRenterPercent = new QLabel(tabRenters);
        labelRenterPercent->setObjectName(QString::fromUtf8("labelRenterPercent"));
        labelRenterPercent->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelRenterPercent, 11, 0, 1, 1);

        lineEditRenterPhone = new QLineEdit(tabRenters);
        lineEditRenterPhone->setObjectName(QString::fromUtf8("lineEditRenterPhone"));
        sizePolicy.setHeightForWidth(lineEditRenterPhone->sizePolicy().hasHeightForWidth());
        lineEditRenterPhone->setSizePolicy(sizePolicy);
        lineEditRenterPhone->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(lineEditRenterPhone, 6, 1, 1, 1);

        dateEditContract = new QDateEdit(tabRenters);
        dateEditContract->setObjectName(QString::fromUtf8("dateEditContract"));
        sizePolicy.setHeightForWidth(dateEditContract->sizePolicy().hasHeightForWidth());
        dateEditContract->setSizePolicy(sizePolicy);
        dateEditContract->setMinimumSize(QSize(0, 30));
        dateEditContract->setLayoutDirection(Qt::LeftToRight);
        dateEditContract->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditContract->setCalendarPopup(true);

        gridLayout_6->addWidget(dateEditContract, 8, 1, 1, 1);

        spinBoxRenterUnitNumber = new QSpinBox(tabRenters);
        spinBoxRenterUnitNumber->setObjectName(QString::fromUtf8("spinBoxRenterUnitNumber"));
        sizePolicy.setHeightForWidth(spinBoxRenterUnitNumber->sizePolicy().hasHeightForWidth());
        spinBoxRenterUnitNumber->setSizePolicy(sizePolicy);
        spinBoxRenterUnitNumber->setMinimumSize(QSize(0, 30));
        spinBoxRenterUnitNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRenterUnitNumber->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxRenterUnitNumber->setMaximum(999);

        gridLayout_6->addWidget(spinBoxRenterUnitNumber, 2, 1, 1, 1);

        labeRenterEstate = new QLabel(tabRenters);
        labeRenterEstate->setObjectName(QString::fromUtf8("labeRenterEstate"));
        sizePolicy1.setHeightForWidth(labeRenterEstate->sizePolicy().hasHeightForWidth());
        labeRenterEstate->setSizePolicy(sizePolicy1);
        labeRenterEstate->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labeRenterEstate, 0, 0, 1, 1);

        labelRenterName = new QLabel(tabRenters);
        labelRenterName->setObjectName(QString::fromUtf8("labelRenterName"));
        sizePolicy1.setHeightForWidth(labelRenterName->sizePolicy().hasHeightForWidth());
        labelRenterName->setSizePolicy(sizePolicy1);
        labelRenterName->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelRenterName, 4, 0, 1, 1);

        labelContractType = new QLabel(tabRenters);
        labelContractType->setObjectName(QString::fromUtf8("labelContractType"));
        sizePolicy1.setHeightForWidth(labelContractType->sizePolicy().hasHeightForWidth());
        labelContractType->setSizePolicy(sizePolicy1);
        labelContractType->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelContractType, 10, 0, 1, 1);

        dateEditContractEnd = new QDateEdit(tabRenters);
        dateEditContractEnd->setObjectName(QString::fromUtf8("dateEditContractEnd"));
        sizePolicy.setHeightForWidth(dateEditContractEnd->sizePolicy().hasHeightForWidth());
        dateEditContractEnd->setSizePolicy(sizePolicy);
        dateEditContractEnd->setMinimumSize(QSize(0, 30));
        dateEditContractEnd->setLayoutDirection(Qt::LeftToRight);
        dateEditContractEnd->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditContractEnd->setCalendarPopup(true);

        gridLayout_6->addWidget(dateEditContractEnd, 9, 1, 1, 1);

        labelUnitNumber = new QLabel(tabRenters);
        labelUnitNumber->setObjectName(QString::fromUtf8("labelUnitNumber"));
        sizePolicy1.setHeightForWidth(labelUnitNumber->sizePolicy().hasHeightForWidth());
        labelUnitNumber->setSizePolicy(sizePolicy1);
        labelUnitNumber->setMinimumSize(QSize(110, 0));

        gridLayout_6->addWidget(labelUnitNumber, 2, 0, 1, 1);

        spinBoxRenterMoneyValue = new QSpinBox(tabRenters);
        spinBoxRenterMoneyValue->setObjectName(QString::fromUtf8("spinBoxRenterMoneyValue"));
        spinBoxRenterMoneyValue->setMinimumSize(QSize(0, 30));
        spinBoxRenterMoneyValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRenterMoneyValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxRenterMoneyValue->setMaximum(999999);

        gridLayout_6->addWidget(spinBoxRenterMoneyValue, 7, 1, 1, 1);

        widget_12 = new QWidget(tabRenters);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_12->sizePolicy().hasHeightForWidth());
        widget_12->setSizePolicy(sizePolicy5);
        horizontalLayout_3 = new QHBoxLayout(widget_12);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labellastPaidRent = new QLabel(widget_12);
        labellastPaidRent->setObjectName(QString::fromUtf8("labellastPaidRent"));
        sizePolicy1.setHeightForWidth(labellastPaidRent->sizePolicy().hasHeightForWidth());
        labellastPaidRent->setSizePolicy(sizePolicy1);
        labellastPaidRent->setMinimumSize(QSize(110, 0));

        horizontalLayout_3->addWidget(labellastPaidRent);

        comboBoxLastPaidRentMonth = new QComboBox(widget_12);
        comboBoxLastPaidRentMonth->setObjectName(QString::fromUtf8("comboBoxLastPaidRentMonth"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(comboBoxLastPaidRentMonth->sizePolicy().hasHeightForWidth());
        comboBoxLastPaidRentMonth->setSizePolicy(sizePolicy6);
        comboBoxLastPaidRentMonth->setMinimumSize(QSize(200, 30));

        horizontalLayout_3->addWidget(comboBoxLastPaidRentMonth);

        label_2 = new QLabel(widget_12);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(40, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        spinBoxLastPaidRentYear = new QSpinBox(widget_12);
        spinBoxLastPaidRentYear->setObjectName(QString::fromUtf8("spinBoxLastPaidRentYear"));
        spinBoxLastPaidRentYear->setMinimumSize(QSize(0, 30));
        spinBoxLastPaidRentYear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxLastPaidRentYear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxLastPaidRentYear->setMinimum(1900);
        spinBoxLastPaidRentYear->setMaximum(9999);
        spinBoxLastPaidRentYear->setSingleStep(1);

        horizontalLayout_3->addWidget(spinBoxLastPaidRentYear);


        gridLayout_6->addWidget(widget_12, 12, 0, 1, 2);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabRenters, icon2, QString());
        tabEstates = new QWidget();
        tabEstates->setObjectName(QString::fromUtf8("tabEstates"));
        gridLayout_4 = new QGridLayout(tabEstates);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineEditEstateAddress = new QLineEdit(tabEstates);
        lineEditEstateAddress->setObjectName(QString::fromUtf8("lineEditEstateAddress"));
        sizePolicy.setHeightForWidth(lineEditEstateAddress->sizePolicy().hasHeightForWidth());
        lineEditEstateAddress->setSizePolicy(sizePolicy);
        lineEditEstateAddress->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(lineEditEstateAddress, 2, 1, 1, 1);

        widget = new QWidget(tabEstates);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        buttonEstateSave = new QPushButton(widget);
        buttonEstateSave->setObjectName(QString::fromUtf8("buttonEstateSave"));
        buttonEstateSave->setMinimumSize(QSize(40, 40));
        buttonEstateSave->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_5->addWidget(buttonEstateSave, 0, 0, 1, 1);

        buttonEstateEmpty = new QPushButton(widget);
        buttonEstateEmpty->setObjectName(QString::fromUtf8("buttonEstateEmpty"));
        buttonEstateEmpty->setMinimumSize(QSize(40, 40));

        gridLayout_5->addWidget(buttonEstateEmpty, 0, 2, 1, 1);

        buttonEstateEdit = new QPushButton(widget);
        buttonEstateEdit->setObjectName(QString::fromUtf8("buttonEstateEdit"));
        buttonEstateEdit->setMinimumSize(QSize(40, 40));

        gridLayout_5->addWidget(buttonEstateEdit, 0, 3, 1, 1);


        gridLayout_4->addWidget(widget, 7, 0, 1, 2);

        lineEditOwnerName = new QLineEdit(tabEstates);
        lineEditOwnerName->setObjectName(QString::fromUtf8("lineEditOwnerName"));
        sizePolicy.setHeightForWidth(lineEditOwnerName->sizePolicy().hasHeightForWidth());
        lineEditOwnerName->setSizePolicy(sizePolicy);
        lineEditOwnerName->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(lineEditOwnerName, 1, 1, 1, 1);

        textEditEstatesNotes = new QTextEdit(tabEstates);
        textEditEstatesNotes->setObjectName(QString::fromUtf8("textEditEstatesNotes"));
        sizePolicy4.setHeightForWidth(textEditEstatesNotes->sizePolicy().hasHeightForWidth());
        textEditEstatesNotes->setSizePolicy(sizePolicy4);
        textEditEstatesNotes->setTabChangesFocus(true);

        gridLayout_4->addWidget(textEditEstatesNotes, 6, 1, 1, 1);

        labelEstateAddress = new QLabel(tabEstates);
        labelEstateAddress->setObjectName(QString::fromUtf8("labelEstateAddress"));
        sizePolicy1.setHeightForWidth(labelEstateAddress->sizePolicy().hasHeightForWidth());
        labelEstateAddress->setSizePolicy(sizePolicy1);
        labelEstateAddress->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelEstateAddress, 2, 0, 1, 1);

        spinBoxAppartments = new QSpinBox(tabEstates);
        spinBoxAppartments->setObjectName(QString::fromUtf8("spinBoxAppartments"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(spinBoxAppartments->sizePolicy().hasHeightForWidth());
        spinBoxAppartments->setSizePolicy(sizePolicy7);
        spinBoxAppartments->setMinimumSize(QSize(0, 30));
        spinBoxAppartments->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxAppartments->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxAppartments->setMaximum(999);

        gridLayout_4->addWidget(spinBoxAppartments, 4, 1, 1, 1);

        labelEstateNotes = new QLabel(tabEstates);
        labelEstateNotes->setObjectName(QString::fromUtf8("labelEstateNotes"));
        sizePolicy1.setHeightForWidth(labelEstateNotes->sizePolicy().hasHeightForWidth());
        labelEstateNotes->setSizePolicy(sizePolicy1);
        labelEstateNotes->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelEstateNotes, 6, 0, 1, 1);

        spinBoxFloors = new QSpinBox(tabEstates);
        spinBoxFloors->setObjectName(QString::fromUtf8("spinBoxFloors"));
        sizePolicy.setHeightForWidth(spinBoxFloors->sizePolicy().hasHeightForWidth());
        spinBoxFloors->setSizePolicy(sizePolicy);
        spinBoxFloors->setMinimumSize(QSize(0, 30));
        spinBoxFloors->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxFloors->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxFloors->setMaximum(999);

        gridLayout_4->addWidget(spinBoxFloors, 3, 1, 1, 1);

        lineEditEstateName = new QLineEdit(tabEstates);
        lineEditEstateName->setObjectName(QString::fromUtf8("lineEditEstateName"));
        sizePolicy.setHeightForWidth(lineEditEstateName->sizePolicy().hasHeightForWidth());
        lineEditEstateName->setSizePolicy(sizePolicy);
        lineEditEstateName->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(lineEditEstateName, 0, 1, 1, 1);

        labelFloors = new QLabel(tabEstates);
        labelFloors->setObjectName(QString::fromUtf8("labelFloors"));
        sizePolicy1.setHeightForWidth(labelFloors->sizePolicy().hasHeightForWidth());
        labelFloors->setSizePolicy(sizePolicy1);
        labelFloors->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelFloors, 3, 0, 1, 1);

        labelApartments = new QLabel(tabEstates);
        labelApartments->setObjectName(QString::fromUtf8("labelApartments"));
        sizePolicy1.setHeightForWidth(labelApartments->sizePolicy().hasHeightForWidth());
        labelApartments->setSizePolicy(sizePolicy1);
        labelApartments->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelApartments, 4, 0, 1, 1);

        labelOwnerName = new QLabel(tabEstates);
        labelOwnerName->setObjectName(QString::fromUtf8("labelOwnerName"));
        sizePolicy1.setHeightForWidth(labelOwnerName->sizePolicy().hasHeightForWidth());
        labelOwnerName->setSizePolicy(sizePolicy1);
        labelOwnerName->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelOwnerName, 1, 0, 1, 1);

        labelEstateName = new QLabel(tabEstates);
        labelEstateName->setObjectName(QString::fromUtf8("labelEstateName"));
        sizePolicy1.setHeightForWidth(labelEstateName->sizePolicy().hasHeightForWidth());
        labelEstateName->setSizePolicy(sizePolicy1);
        labelEstateName->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelEstateName, 0, 0, 1, 1);

        labelWorkshops = new QLabel(tabEstates);
        labelWorkshops->setObjectName(QString::fromUtf8("labelWorkshops"));
        sizePolicy1.setHeightForWidth(labelWorkshops->sizePolicy().hasHeightForWidth());
        labelWorkshops->setSizePolicy(sizePolicy1);
        labelWorkshops->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelWorkshops, 5, 0, 1, 1);

        spinBoxWorkshops = new QSpinBox(tabEstates);
        spinBoxWorkshops->setObjectName(QString::fromUtf8("spinBoxWorkshops"));
        sizePolicy7.setHeightForWidth(spinBoxWorkshops->sizePolicy().hasHeightForWidth());
        spinBoxWorkshops->setSizePolicy(sizePolicy7);
        spinBoxWorkshops->setMinimumSize(QSize(0, 30));
        spinBoxWorkshops->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxWorkshops->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxWorkshops->setMaximum(999);

        gridLayout_4->addWidget(spinBoxWorkshops, 5, 1, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icon/estate.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabEstates, icon3, QString());
        tabReceipt = new QWidget();
        tabReceipt->setObjectName(QString::fromUtf8("tabReceipt"));
        gridLayout_14 = new QGridLayout(tabReceipt);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        buttonPrint = new QPushButton(tabReceipt);
        buttonPrint->setObjectName(QString::fromUtf8("buttonPrint"));
        buttonPrint->setMinimumSize(QSize(150, 50));
        buttonPrint->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_14->addWidget(buttonPrint, 1, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_7, 1, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        widget_6 = new QWidget(tabReceipt);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_13 = new QGridLayout(widget_6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        comboBoxReceiptEstate = new QComboBox(widget_6);
        comboBoxReceiptEstate->setObjectName(QString::fromUtf8("comboBoxReceiptEstate"));
        sizePolicy.setHeightForWidth(comboBoxReceiptEstate->sizePolicy().hasHeightForWidth());
        comboBoxReceiptEstate->setSizePolicy(sizePolicy);
        comboBoxReceiptEstate->setMinimumSize(QSize(0, 30));
        comboBoxReceiptEstate->setLayoutDirection(Qt::RightToLeft);
        comboBoxReceiptEstate->setEditable(false);

        gridLayout_13->addWidget(comboBoxReceiptEstate, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_13->addItem(verticalSpacer_3, 5, 0, 1, 2);

        comboBoxReceiptMonth = new QComboBox(widget_6);
        comboBoxReceiptMonth->setObjectName(QString::fromUtf8("comboBoxReceiptMonth"));
        comboBoxReceiptMonth->setMinimumSize(QSize(0, 30));
        comboBoxReceiptMonth->setLayoutDirection(Qt::RightToLeft);
        comboBoxReceiptMonth->setEditable(false);

        gridLayout_13->addWidget(comboBoxReceiptMonth, 3, 1, 1, 1);

        comboBoxReceiptRenter = new QComboBox(widget_6);
        comboBoxReceiptRenter->setObjectName(QString::fromUtf8("comboBoxReceiptRenter"));
        sizePolicy.setHeightForWidth(comboBoxReceiptRenter->sizePolicy().hasHeightForWidth());
        comboBoxReceiptRenter->setSizePolicy(sizePolicy);
        comboBoxReceiptRenter->setMinimumSize(QSize(0, 30));
        comboBoxReceiptRenter->setLayoutDirection(Qt::RightToLeft);
        comboBoxReceiptRenter->setEditable(false);

        gridLayout_13->addWidget(comboBoxReceiptRenter, 1, 1, 1, 1);

        labelReceiptEstate = new QLabel(widget_6);
        labelReceiptEstate->setObjectName(QString::fromUtf8("labelReceiptEstate"));
        sizePolicy1.setHeightForWidth(labelReceiptEstate->sizePolicy().hasHeightForWidth());
        labelReceiptEstate->setSizePolicy(sizePolicy1);
        labelReceiptEstate->setMinimumSize(QSize(100, 0));

        gridLayout_13->addWidget(labelReceiptEstate, 0, 0, 1, 1);

        labelReceiptRenter = new QLabel(widget_6);
        labelReceiptRenter->setObjectName(QString::fromUtf8("labelReceiptRenter"));
        sizePolicy1.setHeightForWidth(labelReceiptRenter->sizePolicy().hasHeightForWidth());
        labelReceiptRenter->setSizePolicy(sizePolicy1);
        labelReceiptRenter->setMinimumSize(QSize(100, 0));

        gridLayout_13->addWidget(labelReceiptRenter, 1, 0, 1, 1);

        labelReceiptMonth = new QLabel(widget_6);
        labelReceiptMonth->setObjectName(QString::fromUtf8("labelReceiptMonth"));

        gridLayout_13->addWidget(labelReceiptMonth, 3, 0, 1, 1);

        labelReceiptYear = new QLabel(widget_6);
        labelReceiptYear->setObjectName(QString::fromUtf8("labelReceiptYear"));

        gridLayout_13->addWidget(labelReceiptYear, 2, 0, 1, 1);

        spinBoxReceiptYear = new QSpinBox(widget_6);
        spinBoxReceiptYear->setObjectName(QString::fromUtf8("spinBoxReceiptYear"));
        spinBoxReceiptYear->setMinimumSize(QSize(0, 30));
        spinBoxReceiptYear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxReceiptYear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxReceiptYear->setMinimum(1900);
        spinBoxReceiptYear->setMaximum(9999);

        gridLayout_13->addWidget(spinBoxReceiptYear, 2, 1, 1, 1);


        gridLayout_14->addWidget(widget_6, 0, 0, 1, 3);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon/resit.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabReceipt, icon4, QString());

        gridLayout->addWidget(tabWidgetMain, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuFile = new QMenu(menu);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        labelQueryEstate->setBuddy(comboBoxQueryEstate);
        labelQueryReport->setBuddy(comboBoxQueryReport);
        labelQueryDateFrom->setBuddy(dateEditQueryDateFrom);
        labelQueryDateTo->setBuddy(dateEditQueryDateTo);
        labelMoneyDate->setBuddy(dateEditMoneyDate);
        labelMoneyEstate->setBuddy(comboBoxMoneyEstate);
        labelMoneyLabel->setBuddy(textEditMoneyNotes);
        labelMoneyRenterName->setBuddy(comboBoxMoneyRenter);
        labelMoneyType->setBuddy(comboBoxMoneyType);
        labelMoneyMonth->setBuddy(comboBoxMonyMonth);
        labelMoneyYear->setBuddy(spinBoxMoneyYear);
        labelMoney->setBuddy(doubleSpinBoxMony);
        labelRenterNationalID->setBuddy(lineEditRenterNationalId);
        labelContractEndDate->setBuddy(dateEditContractEnd);
        labeAprtmentType->setBuddy(comboBoxApartmentType);
        labelContractDate->setBuddy(dateEditContract);
        labelRenterPhone->setBuddy(lineEditRenterPhone);
        labelRenterMoneyValue->setBuddy(spinBoxRenterMoneyValue);
        labelRenterPercent->setBuddy(spinBoxRenterPercent);
        labeRenterEstate->setBuddy(comboBoxRenterEstate);
        labelRenterName->setBuddy(lineEditRenterName);
        labelContractType->setBuddy(comboBoxContractType);
        labelUnitNumber->setBuddy(spinBoxRenterUnitNumber);
        labelEstateAddress->setBuddy(lineEditEstateAddress);
        labelEstateNotes->setBuddy(textEditEstatesNotes);
        labelFloors->setBuddy(spinBoxFloors);
        labelApartments->setBuddy(spinBoxAppartments);
        labelOwnerName->setBuddy(lineEditOwnerName);
        labelEstateName->setBuddy(lineEditEstateName);
        labelWorkshops->setBuddy(spinBoxWorkshops);
        labelReceiptEstate->setBuddy(comboBoxReceiptEstate);
        labelReceiptRenter->setBuddy(comboBoxReceiptRenter);
        labelReceiptMonth->setBuddy(comboBoxReceiptMonth);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidgetMain, comboBoxQueryEstate);
        QWidget::setTabOrder(comboBoxQueryEstate, comboBoxQueryReport);
        QWidget::setTabOrder(comboBoxQueryReport, dateEditQueryDateFrom);
        QWidget::setTabOrder(dateEditQueryDateFrom, dateEditQueryDateTo);
        QWidget::setTabOrder(dateEditQueryDateTo, checkBoxQueryRenter);
        QWidget::setTabOrder(checkBoxQueryRenter, comboBoxQueryRenter);
        QWidget::setTabOrder(comboBoxQueryRenter, buttonQuery);
        QWidget::setTabOrder(buttonQuery, buttonExit);
        QWidget::setTabOrder(buttonExit, checkBoxAddFreeMoney);
        QWidget::setTabOrder(checkBoxAddFreeMoney, buttonMoneyWaterInvoice);
        QWidget::setTabOrder(buttonMoneyWaterInvoice, comboBoxMoneyEstate);
        QWidget::setTabOrder(comboBoxMoneyEstate, comboBoxMoneyRenter);
        QWidget::setTabOrder(comboBoxMoneyRenter, dateEditMoneyDate);
        QWidget::setTabOrder(dateEditMoneyDate, RadioDeposite);
        QWidget::setTabOrder(RadioDeposite, radioWithdraw);
        QWidget::setTabOrder(radioWithdraw, comboBoxMoneyType);
        QWidget::setTabOrder(comboBoxMoneyType, comboBoxMonyMonth);
        QWidget::setTabOrder(comboBoxMonyMonth, spinBoxMoneyYear);
        QWidget::setTabOrder(spinBoxMoneyYear, textEditMoneyNotes);
        QWidget::setTabOrder(textEditMoneyNotes, buttonMoneySave);
        QWidget::setTabOrder(buttonMoneySave, buttonMoneyEmpty);
        QWidget::setTabOrder(buttonMoneyEmpty, buttonMoneyEdit);
        QWidget::setTabOrder(buttonMoneyEdit, comboBoxRenterEstate);
        QWidget::setTabOrder(comboBoxRenterEstate, comboBoxApartmentType);
        QWidget::setTabOrder(comboBoxApartmentType, spinBoxRenterUnitNumber);
        QWidget::setTabOrder(spinBoxRenterUnitNumber, lineEditRenterName);
        QWidget::setTabOrder(lineEditRenterName, lineEditRenterNationalId);
        QWidget::setTabOrder(lineEditRenterNationalId, lineEditRenterPhone);
        QWidget::setTabOrder(lineEditRenterPhone, spinBoxRenterMoneyValue);
        QWidget::setTabOrder(spinBoxRenterMoneyValue, dateEditContract);
        QWidget::setTabOrder(dateEditContract, dateEditContractEnd);
        QWidget::setTabOrder(dateEditContractEnd, comboBoxContractType);
        QWidget::setTabOrder(comboBoxContractType, spinBoxRenterPercent);
        QWidget::setTabOrder(spinBoxRenterPercent, buttonRenterSave);
        QWidget::setTabOrder(buttonRenterSave, buttonRenterEmpty);
        QWidget::setTabOrder(buttonRenterEmpty, buttonRenterEdit);
        QWidget::setTabOrder(buttonRenterEdit, lineEditEstateName);
        QWidget::setTabOrder(lineEditEstateName, lineEditOwnerName);
        QWidget::setTabOrder(lineEditOwnerName, lineEditEstateAddress);
        QWidget::setTabOrder(lineEditEstateAddress, spinBoxFloors);
        QWidget::setTabOrder(spinBoxFloors, spinBoxAppartments);
        QWidget::setTabOrder(spinBoxAppartments, spinBoxWorkshops);
        QWidget::setTabOrder(spinBoxWorkshops, textEditEstatesNotes);
        QWidget::setTabOrder(textEditEstatesNotes, buttonEstateSave);
        QWidget::setTabOrder(buttonEstateSave, buttonEstateEmpty);
        QWidget::setTabOrder(buttonEstateEmpty, buttonEstateEdit);
        QWidget::setTabOrder(buttonEstateEdit, comboBoxReceiptEstate);
        QWidget::setTabOrder(comboBoxReceiptEstate, comboBoxReceiptRenter);
        QWidget::setTabOrder(comboBoxReceiptRenter, comboBoxReceiptMonth);
        QWidget::setTabOrder(comboBoxReceiptMonth, buttonPrint);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menu->addAction(menuFile->menuAction());
        menu->addAction(menuExit);
        menuFile->addAction(menuExport);
        menuFile->addAction(menuImport);
        menuAbout->addAction(menuAboutApp);
        menuAbout->addAction(menuAboutQt);
        menuAbout->addSeparator();
        menuAbout->addAction(menuAboutHelp);
        menuView->addAction(menuViewAllData);
        menuEdit->addAction(menuEditEstates);
        menuEdit->addAction(menuEditRenters);
        menuEdit->addAction(menuEditMoney);
        menuEdit->addSeparator();
        menuEdit->addAction(menuEditWaterInvoices);

        retranslateUi(MainWindow);

        buttonExit->setDefault(false);
        tabWidgetMain->setCurrentIndex(4);
        buttonQuery->setDefault(true);
        buttonMoneySave->setDefault(true);
        buttonRenterSave->setDefault(true);
        comboBoxContractType->setCurrentIndex(1);
        buttonEstateSave->setDefault(true);
        buttonPrint->setDefault(true);
        comboBoxReceiptEstate->setCurrentIndex(-1);
        comboBoxReceiptMonth->setCurrentIndex(-1);
        comboBoxReceiptRenter->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "estates", nullptr));
        menuAboutApp->setText(QCoreApplication::translate("MainWindow", "\330\271\331\206 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", nullptr));
        menuAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        menuExit->setText(QCoreApplication::translate("MainWindow", "\330\256\330\261\331\210\330\254", nullptr));
        menuExport->setText(QCoreApplication::translate("MainWindow", "\330\252\330\265\330\257\331\212\330\261", nullptr));
        menuImport->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\330\252\331\212\330\261\330\247\330\257", nullptr));
        menuViewAllData->setText(QCoreApplication::translate("MainWindow", "\330\254\330\257\330\247\331\210\331\204 \330\247\331\204\330\250\331\212\330\247\331\206\330\247\330\252", nullptr));
        menuEditEstates->setText(QCoreApplication::translate("MainWindow", "\330\252\330\271\330\257\331\212\331\204/\330\255\330\260\331\201 \330\263\330\254\331\204 \330\271\331\202\330\247\330\261\330\247\330\252", nullptr));
        menuEditRenters->setText(QCoreApplication::translate("MainWindow", "\330\252\330\271\330\257\331\212\331\204/\330\255\330\260\331\201 \330\263\330\254\331\204 \331\205\330\263\330\252\330\243\330\254\330\261\331\212\331\206", nullptr));
        menuEditMoney->setText(QCoreApplication::translate("MainWindow", "\330\252\330\271\330\257\331\212\331\204/\330\255\330\260\331\201 \331\205\330\271\330\247\331\205\331\204\330\251 \331\205\330\247\331\204\331\212\330\251", nullptr));
        menuEditWaterInvoices->setText(QCoreApplication::translate("MainWindow", "\330\252\330\263\330\254\331\212\331\204/\330\252\330\271\330\257\331\212\331\204 \331\201\330\247\330\252\331\210\330\261\330\251 \331\205\331\212\330\247\330\251", nullptr));
        menuAboutHelp->setText(QCoreApplication::translate("MainWindow", "\331\205\330\263\330\247\330\271\330\257\330\251", nullptr));
        buttonExit->setText(QCoreApplication::translate("MainWindow", "\330\256\330\261\331\210\330\254", nullptr));
        labelQueryEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\330\252\330\271\331\204\330\247\331\205 \330\271\331\206 \330\271\331\202\330\247\330\261", nullptr));
        checkBoxQueryRenter->setText(QCoreApplication::translate("MainWindow", "\330\252\330\255\330\257\331\212\330\257 \331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        buttonQuery->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\330\252\330\271\331\204\330\247\331\205", nullptr));
        labelQueryReport->setText(QCoreApplication::translate("MainWindow", "\330\271\330\261\330\266 \330\252\331\202\330\261\331\212\330\261 \330\271\331\206 ", nullptr));
        comboBoxQueryReport->setItemText(0, QCoreApplication::translate("MainWindow", "\331\205\330\257\331\212\331\210\331\206\331\212\330\251 \330\247\331\204\330\247\331\212\330\254\330\247\330\261", nullptr));
        comboBoxQueryReport->setItemText(1, QCoreApplication::translate("MainWindow", "\331\205\330\257\331\212\331\210\331\206\331\212\330\251 \330\247\331\204\331\205\331\212\330\247\330\251", nullptr));
        comboBoxQueryReport->setItemText(2, QCoreApplication::translate("MainWindow", "\331\203\331\204 \330\247\331\204\331\205\330\257\331\212\331\210\331\206\331\212\330\247\330\252", nullptr));
        comboBoxQueryReport->setItemText(3, QCoreApplication::translate("MainWindow", "\330\247\331\204\331\205\330\250\331\204\330\272 \330\247\331\204\331\201\330\271\331\204\331\211", nullptr));
        comboBoxQueryReport->setItemText(4, QCoreApplication::translate("MainWindow", "\330\247\330\254\331\205\330\247\331\204\331\211 \330\247\331\204\331\205\330\250\330\247\331\204\330\272 \330\247\331\204\331\205\330\255\330\265\331\204\330\251 \330\271\331\206 \331\201\330\252\330\261\330\251", nullptr));
        comboBoxQueryReport->setItemText(5, QCoreApplication::translate("MainWindow", "\330\255\330\247\331\204\330\251 \330\247\331\204\330\271\331\202\331\210\330\257", nullptr));

        labelQueryDateFrom->setText(QCoreApplication::translate("MainWindow", "\330\271\331\206 \330\247\331\204\331\201\330\252\330\261\330\251", nullptr));
        labelQueryDateTo->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\211", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabQuery), QCoreApplication::translate("MainWindow", "\330\247\330\263\330\252\330\271\331\204\330\247\331\205\330\247\330\252", nullptr));
        buttonMoneyEmpty->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\261\331\212\330\272", nullptr));
        buttonMoneySave->setText(QCoreApplication::translate("MainWindow", "\330\255\331\201\330\270", nullptr));
        buttonMoneyEdit->setText(QCoreApplication::translate("MainWindow", "\330\271\330\261\330\266 / \330\252\330\271\330\257\331\212\331\204", nullptr));
        labelMoneyDate->setText(QCoreApplication::translate("MainWindow", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\271\331\205\331\204\331\212\330\251", nullptr));
        RadioDeposite->setText(QCoreApplication::translate("MainWindow", "\330\247\331\212\330\257\330\247\330\271", nullptr));
        radioWithdraw->setText(QCoreApplication::translate("MainWindow", "\330\263\330\255\330\250", nullptr));
        comboBoxMoneyType->setItemText(0, QCoreApplication::translate("MainWindow", "\330\263\330\257\330\247\330\257 \330\247\331\212\330\254\330\247\330\261", nullptr));
        comboBoxMoneyType->setItemText(1, QCoreApplication::translate("MainWindow", "\330\263\330\257\330\247\330\257 \331\205\331\212\330\247\330\251", nullptr));
        comboBoxMoneyType->setItemText(2, QCoreApplication::translate("MainWindow", "\330\263\330\257\330\247\330\257 \330\247\330\271\331\205\330\247\331\204 \330\265\331\212\330\247\331\206\330\251 / \330\267\331\210\330\247\330\261\330\246", nullptr));
        comboBoxMoneyType->setItemText(3, QCoreApplication::translate("MainWindow", "\330\272\331\212\330\261 \331\205\330\265\331\206\331\201", nullptr));

        labelMoneyEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        labelMoneyLabel->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\247\330\265\331\212\331\204 \330\247\330\256\330\261\331\211", nullptr));
        buttonMoneyWaterInvoice->setText(QCoreApplication::translate("MainWindow", "\331\201\330\247\330\252\331\210\330\261\330\251 \331\205\331\212\330\247\330\251", nullptr));
        checkBoxAddFreeMoney->setText(QCoreApplication::translate("MainWindow", "\330\247\330\266\330\247\331\201\330\251 \331\205\330\250\331\204\330\272 \330\250\330\257\331\210\331\206 \330\252\330\265\331\206\331\212\331\201", nullptr));
        labelMoneyRenterName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        textEditMoneyNotes->setDocumentTitle(QString());
        textEditMoneyNotes->setPlaceholderText(QString());
        labelMoneyType->setText(QCoreApplication::translate("MainWindow", "\331\206\331\210\330\271 \330\247\331\204\331\205\330\271\330\247\331\205\331\204\330\251", nullptr));
        labelMoneyMonth->setText(QCoreApplication::translate("MainWindow", "\331\205\330\257\331\201\331\210\330\271\330\251 \330\271\331\206 \330\264\331\207\330\261", nullptr));
        labelMoneyYear->setText(QCoreApplication::translate("MainWindow", "\330\263\331\206\330\251", nullptr));
        labelMoney->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\205\330\250\331\204\330\272 \330\247\331\204\331\205\330\257\331\201\331\210\330\271", nullptr));
        labelMoneyRemaining->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\202\331\212\331\205\330\251 \330\247\331\204\331\205\330\252\330\250\331\202\331\212\330\251", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabMoney), QCoreApplication::translate("MainWindow", "\331\205\330\271\330\247\331\205\331\204\330\251 \331\205\330\247\331\204\331\212\330\251", nullptr));
#if QT_CONFIG(tooltip)
        spinBoxRenterPercent->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt;\">\331\212\330\252\331\205 \330\252\331\202\330\263\331\212\331\205 \331\201\330\247\330\252\331\210\330\261\330\251 \330\247\331\204\331\205\331\212\330\247\330\251 \330\271\331\204\331\211 \331\203\330\247\331\201\330\251 \330\247\331\204\331\210\330\255\330\257\330\247\330\252 \330\250\330\247\331\204\330\252\330\263\330\247\331\210\331\211<br/>\331\201\331\211 \331\207\330\260\330\247 \330\247\331\204\330\256\331\212\330\247\330\261 \331\212\331\205\331\203\331\206\331\203 \330\252\330\272\331\212\331\212\330\261 \330\247\331\204\331\206\330\263\330\250\330\251 \330\247\331\204\331\205\330\246\331\210\331\212\330\251 \331\204\331\207\330\260\330\247 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261 <br/></span></p><p align=\"right\"><span style=\" font-size:10pt;\">\331\205\330\253\330\247\331\204 : \330\247\330\260\330\247 \331\203\330\247\331\206\330\252 \331\201\331\212\331\205\330\251 \330\247\331\204\330\263\330\257\330"
                        "\247\330\257 \330\247\331\204\331\205\330\267\331\204\331\210\330\250\330\251 100 \330\254\331\206\331\212\330\251 <br/>\331\210\330\252\331\205 \330\252\330\255\330\257\331\212\330\257 \331\206\330\263\330\250\330\251 \331\205\330\246\331\210\331\212\330\251 50% \331\201\330\263\331\212\330\252\331\205 \330\252\330\255\331\210\331\212\331\204 \330\247\331\204\331\205\330\250\331\204\330\272 \330\247\331\204\331\211 50 \330\254\331\206\331\212\330\251 <br/>\331\210\330\252\331\210\330\262\331\212\330\271 \330\247\331\204\331\202\331\212\331\205\330\251 \330\247\331\204\330\250\330\247\331\202\331\212\330\251 \330\271\331\204\331\211 \330\250\330\247\331\202\331\211 \330\247\331\204\331\210\330\255\330\257\330\247\330\252</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelRenterNationalID->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\331\202\331\210\331\205\331\211", nullptr));
        labelContractEndDate->setText(QCoreApplication::translate("MainWindow", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\206\330\252\331\207\330\247\330\241 \330\247\331\204\330\271\331\202\330\257", nullptr));
        comboBoxApartmentType->setItemText(0, QCoreApplication::translate("MainWindow", "\330\264\331\202\330\251", nullptr));
        comboBoxApartmentType->setItemText(1, QCoreApplication::translate("MainWindow", "\331\205\330\255\331\204", nullptr));

        labeAprtmentType->setText(QCoreApplication::translate("MainWindow", "\331\206\331\210\330\271 \330\247\331\204\330\271\331\212\331\206 \330\247\331\204\331\205\330\244\330\254\330\261\330\251", nullptr));
        labelContractDate->setText(QCoreApplication::translate("MainWindow", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\271\331\202\330\257", nullptr));
        labelRenterPhone->setText(QCoreApplication::translate("MainWindow", "\330\252\331\204\331\212\331\201\331\210\331\206", nullptr));
        labelRenterMoneyValue->setText(QCoreApplication::translate("MainWindow", "\331\202\331\212\331\205\330\251 \330\247\331\204\330\247\331\212\330\254\330\247\330\261", nullptr));
        buttonRenterSave->setText(QCoreApplication::translate("MainWindow", "\330\255\331\201\330\270", nullptr));
        buttonRenterEdit->setText(QCoreApplication::translate("MainWindow", "\330\271\330\261\330\266 / \330\252\330\271\330\257\331\212\331\204", nullptr));
        buttonRenterEmpty->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\261\331\212\330\272", nullptr));
        comboBoxContractType->setItemText(0, QCoreApplication::translate("MainWindow", "\331\202\330\247\331\206\331\210\331\206 \331\202\330\257\331\212\331\205", nullptr));
        comboBoxContractType->setItemText(1, QCoreApplication::translate("MainWindow", "\331\202\330\247\331\206\331\210\331\206 \330\254\330\257\331\212\330\257", nullptr));

        labelRenterPercent->setText(QCoreApplication::translate("MainWindow", "\331\206\330\263\330\250\330\251 % \330\263\330\257\330\247\330\257 \330\247\331\204\331\205\331\212\330\247\330\251", nullptr));
        labeRenterEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        labelRenterName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        labelContractType->setText(QCoreApplication::translate("MainWindow", "\331\206\331\210\330\271 \330\247\331\204\330\271\331\202\330\257", nullptr));
        labelUnitNumber->setText(QCoreApplication::translate("MainWindow", "\330\261\331\202\331\205 \330\247\331\204\331\210\330\255\330\257\330\251 (\330\264\331\202\330\251)", nullptr));
        labellastPaidRent->setText(QCoreApplication::translate("MainWindow", "\330\247\330\256\330\261 \330\247\331\212\330\254\330\247\330\261 \331\205\330\263\330\257\330\257", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\330\263\331\206\330\251", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabRenters), QCoreApplication::translate("MainWindow", "\330\263\330\254\331\204 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261\331\212\331\206", nullptr));
        buttonEstateSave->setText(QCoreApplication::translate("MainWindow", "\330\255\331\201\330\270", nullptr));
        buttonEstateEmpty->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\261\331\212\330\272", nullptr));
        buttonEstateEdit->setText(QCoreApplication::translate("MainWindow", "\330\271\330\261\330\266 / \330\252\330\271\330\257\331\212\331\204", nullptr));
        labelEstateAddress->setText(QCoreApplication::translate("MainWindow", "\330\271\331\206\331\210\330\247\331\206 \330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        labelEstateNotes->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\247\330\265\331\212\331\204 \330\247\330\256\330\261\331\211", nullptr));
        labelFloors->setText(QCoreApplication::translate("MainWindow", "\330\271\330\257\330\257 \330\247\331\204\330\267\331\210\330\247\330\250\331\202", nullptr));
        labelApartments->setText(QCoreApplication::translate("MainWindow", "\330\271\330\257\330\257 \330\247\331\204\330\264\331\202\331\202", nullptr));
        labelOwnerName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\247\331\204\331\203", nullptr));
        labelEstateName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\261\331\205\330\262\331\211 \331\204\331\204\330\271\331\202\330\247\330\261 ", nullptr));
        labelWorkshops->setText(QCoreApplication::translate("MainWindow", "\330\271\330\257\330\257 \330\247\331\204\331\205\330\255\331\204\330\247\330\252", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabEstates), QCoreApplication::translate("MainWindow", "\330\263\330\254\331\204 \330\247\331\204\330\271\331\202\330\247\330\261\330\247\330\252", nullptr));
        buttonPrint->setText(QCoreApplication::translate("MainWindow", "\330\267\330\250\330\247\330\271\330\251", nullptr));
        labelReceiptEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        labelReceiptRenter->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        labelReceiptMonth->setText(QCoreApplication::translate("MainWindow", "\330\271\331\206 \330\264\331\207\330\261", nullptr));
        labelReceiptYear->setText(QCoreApplication::translate("MainWindow", "\330\263\331\206\330\251", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabReceipt), QCoreApplication::translate("MainWindow", "\330\247\330\265\330\257\330\247\330\261 \330\247\331\212\330\265\330\247\331\204 \330\247\331\212\330\254\330\247\330\261", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\331\205\331\204\331\201", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\331\202\330\247\330\271\330\257\330\251 \330\250\331\212\330\247\331\206\330\247\330\252", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "\330\271\331\206 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "\330\271\330\261\330\266", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "\330\252\330\271\330\257\331\212\331\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
