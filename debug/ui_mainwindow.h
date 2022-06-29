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
    QDateEdit *dateEditQueryDateTo;
    QCheckBox *checkBoxQueryRenter;
    QLabel *labelQueryEstate;
    QComboBox *comboBoxQueryRenter;
    QDateEdit *dateEditQueryDateFrom;
    QComboBox *comboBoxQueryEstate;
    QComboBox *comboBoxQueryReport;
    QWidget *widget_5;
    QGridLayout *gridLayout_12;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *buttonQuery;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelQueryDateFrom;
    QLabel *labelQueryReport;
    QLabel *labelQueryDateTo;
    QWidget *tabMoney;
    QGridLayout *gridLayout_7;
    QWidget *widget_3;
    QGridLayout *gridLayout_9;
    QPushButton *buttonMoneySave;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonMoneyEmpty;
    QComboBox *comboBoxMoneyType;
    QComboBox *comboBoxMoneyRenter;
    QSpacerItem *verticalSpacer;
    QLabel *labelMoneyDate;
    QFrame *line_2;
    QDateEdit *dateEditMoneyDate;
    QCheckBox *checkBoxAddFreeMoney;
    QLabel *labelMoneyEstate;
    QLabel *labelMoneyLabel;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *textEditMoneyNotes;
    QLabel *labelMoney;
    QFrame *line;
    QLabel *labelMoneyRenterName;
    QDoubleSpinBox *doubleSpinBoxMony;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QRadioButton *RadioDeposite;
    QRadioButton *radioWithdraw;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelMoneyType;
    QComboBox *comboBoxMoneyEstate;
    QWidget *widget_8;
    QGridLayout *gridLayout_15;
    QLabel *labelMoneyMonth;
    QLabel *labelMoneyYear;
    QComboBox *comboBoxMonyMonth;
    QSpinBox *spinBoxMoneyYear;
    QWidget *tabRenters;
    QGridLayout *gridLayout_6;
    QLabel *labeRenterEstate;
    QLabel *labelRenterName;
    QComboBox *comboBoxApartmentType;
    QLabel *labelContractType;
    QDateEdit *dateEditContract;
    QComboBox *comboBoxContractType;
    QLabel *labelRenterPhone;
    QLineEdit *lineEditRenterPhone;
    QLabel *labeAprtmentType;
    QLineEdit *lineEditRenterNationalId;
    QWidget *widget_2;
    QGridLayout *gridLayout_8;
    QPushButton *buttonRenterEmpty;
    QPushButton *buttonRenterSave;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelContractDate;
    QLabel *labelRenterNationalID;
    QLineEdit *lineEditRenterName;
    QLabel *labelContractEndDate;
    QComboBox *comboBoxRenterEstate;
    QDateEdit *dateEditContractEnd;
    QLabel *labelApartmentNumber;
    QSpinBox *spinBoxRenterApartmentNumber;
    QWidget *tabEstates;
    QGridLayout *gridLayout_4;
    QLabel *labelOwnerName;
    QLabel *labelEstateNotes;
    QTextEdit *textEditEstatesNotes;
    QLabel *labelFloors;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QPushButton *buttonEstateEmpty;
    QPushButton *buttonEstateSave;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelApartments;
    QLineEdit *lineEditEstateAddress;
    QLineEdit *lineEditOwnerName;
    QSpinBox *spinBoxAppartments;
    QSpinBox *spinBoxFloors;
    QLabel *labelEstateAddress;
    QLabel *labelEstateName;
    QLineEdit *lineEditEstateName;
    QWidget *tabReceipt;
    QGridLayout *gridLayout_14;
    QPushButton *buttonPrint;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_6;
    QGridLayout *gridLayout_13;
    QComboBox *comboBoxReceiptRenter;
    QLabel *labelReceiptMonth;
    QLabel *labelReceiptEstate;
    QComboBox *comboBoxReceiptEstate;
    QLabel *labelReceiptRenter;
    QComboBox *comboBoxReceiptMonth;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelReceiptYear;
    QSpinBox *spinBoxReceiptYear;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuFile;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(727, 665);
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
        dateEditQueryDateTo = new QDateEdit(widget_4);
        dateEditQueryDateTo->setObjectName(QString::fromUtf8("dateEditQueryDateTo"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEditQueryDateTo->sizePolicy().hasHeightForWidth());
        dateEditQueryDateTo->setSizePolicy(sizePolicy);
        dateEditQueryDateTo->setMinimumSize(QSize(0, 30));
        dateEditQueryDateTo->setFont(font);
        dateEditQueryDateTo->setLayoutDirection(Qt::LeftToRight);
        dateEditQueryDateTo->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditQueryDateTo->setCalendarPopup(true);

        gridLayout_11->addWidget(dateEditQueryDateTo, 3, 3, 1, 1);

        checkBoxQueryRenter = new QCheckBox(widget_4);
        checkBoxQueryRenter->setObjectName(QString::fromUtf8("checkBoxQueryRenter"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxQueryRenter->sizePolicy().hasHeightForWidth());
        checkBoxQueryRenter->setSizePolicy(sizePolicy1);
        checkBoxQueryRenter->setMinimumSize(QSize(100, 0));
        checkBoxQueryRenter->setFont(font);

        gridLayout_11->addWidget(checkBoxQueryRenter, 4, 0, 1, 1);

        labelQueryEstate = new QLabel(widget_4);
        labelQueryEstate->setObjectName(QString::fromUtf8("labelQueryEstate"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelQueryEstate->sizePolicy().hasHeightForWidth());
        labelQueryEstate->setSizePolicy(sizePolicy2);
        labelQueryEstate->setMinimumSize(QSize(100, 0));
        labelQueryEstate->setFont(font);

        gridLayout_11->addWidget(labelQueryEstate, 0, 0, 1, 1);

        comboBoxQueryRenter = new QComboBox(widget_4);
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->addItem(QString());
        comboBoxQueryRenter->setObjectName(QString::fromUtf8("comboBoxQueryRenter"));
        sizePolicy.setHeightForWidth(comboBoxQueryRenter->sizePolicy().hasHeightForWidth());
        comboBoxQueryRenter->setSizePolicy(sizePolicy);
        comboBoxQueryRenter->setMinimumSize(QSize(0, 30));
        comboBoxQueryRenter->setFont(font);

        gridLayout_11->addWidget(comboBoxQueryRenter, 4, 1, 1, 3);

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

        comboBoxQueryEstate = new QComboBox(widget_4);
        comboBoxQueryEstate->addItem(QString());
        comboBoxQueryEstate->addItem(QString());
        comboBoxQueryEstate->addItem(QString());
        comboBoxQueryEstate->setObjectName(QString::fromUtf8("comboBoxQueryEstate"));
        sizePolicy.setHeightForWidth(comboBoxQueryEstate->sizePolicy().hasHeightForWidth());
        comboBoxQueryEstate->setSizePolicy(sizePolicy);
        comboBoxQueryEstate->setMinimumSize(QSize(0, 30));
        comboBoxQueryEstate->setFont(font);

        gridLayout_11->addWidget(comboBoxQueryEstate, 0, 1, 1, 3);

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

        labelQueryDateFrom = new QLabel(widget_4);
        labelQueryDateFrom->setObjectName(QString::fromUtf8("labelQueryDateFrom"));
        sizePolicy2.setHeightForWidth(labelQueryDateFrom->sizePolicy().hasHeightForWidth());
        labelQueryDateFrom->setSizePolicy(sizePolicy2);
        labelQueryDateFrom->setMinimumSize(QSize(100, 0));
        labelQueryDateFrom->setFont(font);

        gridLayout_11->addWidget(labelQueryDateFrom, 3, 0, 1, 1);

        labelQueryReport = new QLabel(widget_4);
        labelQueryReport->setObjectName(QString::fromUtf8("labelQueryReport"));
        sizePolicy2.setHeightForWidth(labelQueryReport->sizePolicy().hasHeightForWidth());
        labelQueryReport->setSizePolicy(sizePolicy2);
        labelQueryReport->setMinimumSize(QSize(100, 0));
        labelQueryReport->setFont(font);

        gridLayout_11->addWidget(labelQueryReport, 2, 0, 1, 1);

        labelQueryDateTo = new QLabel(widget_4);
        labelQueryDateTo->setObjectName(QString::fromUtf8("labelQueryDateTo"));
        sizePolicy2.setHeightForWidth(labelQueryDateTo->sizePolicy().hasHeightForWidth());
        labelQueryDateTo->setSizePolicy(sizePolicy2);
        labelQueryDateTo->setMinimumSize(QSize(50, 0));
        labelQueryDateTo->setFont(font);
        labelQueryDateTo->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(labelQueryDateTo, 3, 2, 1, 1);


        gridLayout_10->addWidget(widget_4, 0, 0, 1, 1);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabQuery, icon, QString());
        tabMoney = new QWidget();
        tabMoney->setObjectName(QString::fromUtf8("tabMoney"));
        gridLayout_7 = new QGridLayout(tabMoney);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget_3 = new QWidget(tabMoney);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_9 = new QGridLayout(widget_3);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        buttonMoneySave = new QPushButton(widget_3);
        buttonMoneySave->setObjectName(QString::fromUtf8("buttonMoneySave"));
        buttonMoneySave->setMinimumSize(QSize(40, 40));
        buttonMoneySave->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_9->addWidget(buttonMoneySave, 1, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        buttonMoneyEmpty = new QPushButton(widget_3);
        buttonMoneyEmpty->setObjectName(QString::fromUtf8("buttonMoneyEmpty"));
        buttonMoneyEmpty->setMinimumSize(QSize(40, 40));

        gridLayout_9->addWidget(buttonMoneyEmpty, 1, 2, 1, 1);


        gridLayout_7->addWidget(widget_3, 15, 0, 1, 2);

        comboBoxMoneyType = new QComboBox(tabMoney);
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->addItem(QString());
        comboBoxMoneyType->setObjectName(QString::fromUtf8("comboBoxMoneyType"));
        sizePolicy.setHeightForWidth(comboBoxMoneyType->sizePolicy().hasHeightForWidth());
        comboBoxMoneyType->setSizePolicy(sizePolicy);
        comboBoxMoneyType->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(comboBoxMoneyType, 11, 1, 1, 1);

        comboBoxMoneyRenter = new QComboBox(tabMoney);
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->addItem(QString());
        comboBoxMoneyRenter->setObjectName(QString::fromUtf8("comboBoxMoneyRenter"));
        sizePolicy.setHeightForWidth(comboBoxMoneyRenter->sizePolicy().hasHeightForWidth());
        comboBoxMoneyRenter->setSizePolicy(sizePolicy);
        comboBoxMoneyRenter->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(comboBoxMoneyRenter, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 4, 0, 1, 1);

        labelMoneyDate = new QLabel(tabMoney);
        labelMoneyDate->setObjectName(QString::fromUtf8("labelMoneyDate"));
        sizePolicy2.setHeightForWidth(labelMoneyDate->sizePolicy().hasHeightForWidth());
        labelMoneyDate->setSizePolicy(sizePolicy2);
        labelMoneyDate->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyDate, 3, 0, 1, 1);

        line_2 = new QFrame(tabMoney);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_2, 9, 0, 1, 2);

        dateEditMoneyDate = new QDateEdit(tabMoney);
        dateEditMoneyDate->setObjectName(QString::fromUtf8("dateEditMoneyDate"));
        sizePolicy.setHeightForWidth(dateEditMoneyDate->sizePolicy().hasHeightForWidth());
        dateEditMoneyDate->setSizePolicy(sizePolicy);
        dateEditMoneyDate->setMinimumSize(QSize(0, 30));
        dateEditMoneyDate->setLayoutDirection(Qt::LeftToRight);
        dateEditMoneyDate->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditMoneyDate->setCalendarPopup(true);

        gridLayout_7->addWidget(dateEditMoneyDate, 3, 1, 1, 1);

        checkBoxAddFreeMoney = new QCheckBox(tabMoney);
        checkBoxAddFreeMoney->setObjectName(QString::fromUtf8("checkBoxAddFreeMoney"));
        checkBoxAddFreeMoney->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(checkBoxAddFreeMoney, 0, 0, 1, 2);

        labelMoneyEstate = new QLabel(tabMoney);
        labelMoneyEstate->setObjectName(QString::fromUtf8("labelMoneyEstate"));
        sizePolicy2.setHeightForWidth(labelMoneyEstate->sizePolicy().hasHeightForWidth());
        labelMoneyEstate->setSizePolicy(sizePolicy2);
        labelMoneyEstate->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyEstate, 1, 0, 1, 1);

        labelMoneyLabel = new QLabel(tabMoney);
        labelMoneyLabel->setObjectName(QString::fromUtf8("labelMoneyLabel"));
        sizePolicy2.setHeightForWidth(labelMoneyLabel->sizePolicy().hasHeightForWidth());
        labelMoneyLabel->setSizePolicy(sizePolicy2);
        labelMoneyLabel->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyLabel, 14, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 10, 0, 1, 1);

        textEditMoneyNotes = new QTextEdit(tabMoney);
        textEditMoneyNotes->setObjectName(QString::fromUtf8("textEditMoneyNotes"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEditMoneyNotes->sizePolicy().hasHeightForWidth());
        textEditMoneyNotes->setSizePolicy(sizePolicy3);
        textEditMoneyNotes->setLayoutDirection(Qt::RightToLeft);
        textEditMoneyNotes->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout_7->addWidget(textEditMoneyNotes, 14, 1, 1, 1);

        labelMoney = new QLabel(tabMoney);
        labelMoney->setObjectName(QString::fromUtf8("labelMoney"));
        sizePolicy2.setHeightForWidth(labelMoney->sizePolicy().hasHeightForWidth());
        labelMoney->setSizePolicy(sizePolicy2);
        labelMoney->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoney, 6, 0, 1, 1);

        line = new QFrame(tabMoney);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 5, 0, 1, 2);

        labelMoneyRenterName = new QLabel(tabMoney);
        labelMoneyRenterName->setObjectName(QString::fromUtf8("labelMoneyRenterName"));
        sizePolicy2.setHeightForWidth(labelMoneyRenterName->sizePolicy().hasHeightForWidth());
        labelMoneyRenterName->setSizePolicy(sizePolicy2);
        labelMoneyRenterName->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyRenterName, 2, 0, 1, 1);

        doubleSpinBoxMony = new QDoubleSpinBox(tabMoney);
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
        doubleSpinBoxMony->setMaximum(999999999.000000000000000);
        doubleSpinBoxMony->setSingleStep(0.250000000000000);
        doubleSpinBoxMony->setStepType(QAbstractSpinBox::DefaultStepType);
        doubleSpinBoxMony->setValue(0.000000000000000);

        gridLayout_7->addWidget(doubleSpinBoxMony, 6, 1, 1, 1);

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


        gridLayout_7->addWidget(widget_7, 8, 0, 1, 2);

        labelMoneyType = new QLabel(tabMoney);
        labelMoneyType->setObjectName(QString::fromUtf8("labelMoneyType"));
        sizePolicy2.setHeightForWidth(labelMoneyType->sizePolicy().hasHeightForWidth());
        labelMoneyType->setSizePolicy(sizePolicy2);
        labelMoneyType->setMinimumSize(QSize(100, 0));

        gridLayout_7->addWidget(labelMoneyType, 11, 0, 1, 1);

        comboBoxMoneyEstate = new QComboBox(tabMoney);
        comboBoxMoneyEstate->addItem(QString());
        comboBoxMoneyEstate->addItem(QString());
        comboBoxMoneyEstate->addItem(QString());
        comboBoxMoneyEstate->setObjectName(QString::fromUtf8("comboBoxMoneyEstate"));
        sizePolicy.setHeightForWidth(comboBoxMoneyEstate->sizePolicy().hasHeightForWidth());
        comboBoxMoneyEstate->setSizePolicy(sizePolicy);
        comboBoxMoneyEstate->setMinimumSize(QSize(0, 30));

        gridLayout_7->addWidget(comboBoxMoneyEstate, 1, 1, 1, 1);

        widget_8 = new QWidget(tabMoney);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_15 = new QGridLayout(widget_8);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        labelMoneyMonth = new QLabel(widget_8);
        labelMoneyMonth->setObjectName(QString::fromUtf8("labelMoneyMonth"));
        sizePolicy2.setHeightForWidth(labelMoneyMonth->sizePolicy().hasHeightForWidth());
        labelMoneyMonth->setSizePolicy(sizePolicy2);
        labelMoneyMonth->setMinimumSize(QSize(100, 0));

        gridLayout_15->addWidget(labelMoneyMonth, 0, 0, 1, 1);

        labelMoneyYear = new QLabel(widget_8);
        labelMoneyYear->setObjectName(QString::fromUtf8("labelMoneyYear"));
        sizePolicy2.setHeightForWidth(labelMoneyYear->sizePolicy().hasHeightForWidth());
        labelMoneyYear->setSizePolicy(sizePolicy2);

        gridLayout_15->addWidget(labelMoneyYear, 0, 2, 1, 1);

        comboBoxMonyMonth = new QComboBox(widget_8);
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->addItem(QString());
        comboBoxMonyMonth->setObjectName(QString::fromUtf8("comboBoxMonyMonth"));
        sizePolicy.setHeightForWidth(comboBoxMonyMonth->sizePolicy().hasHeightForWidth());
        comboBoxMonyMonth->setSizePolicy(sizePolicy);
        comboBoxMonyMonth->setMinimumSize(QSize(0, 30));

        gridLayout_15->addWidget(comboBoxMonyMonth, 0, 1, 1, 1);

        spinBoxMoneyYear = new QSpinBox(widget_8);
        spinBoxMoneyYear->setObjectName(QString::fromUtf8("spinBoxMoneyYear"));
        spinBoxMoneyYear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxMoneyYear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxMoneyYear->setMinimum(1111);
        spinBoxMoneyYear->setMaximum(9999);

        gridLayout_15->addWidget(spinBoxMoneyYear, 0, 3, 1, 1);


        gridLayout_7->addWidget(widget_8, 13, 0, 1, 2);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/money.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabMoney, icon1, QString());
        tabRenters = new QWidget();
        tabRenters->setObjectName(QString::fromUtf8("tabRenters"));
        gridLayout_6 = new QGridLayout(tabRenters);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        labeRenterEstate = new QLabel(tabRenters);
        labeRenterEstate->setObjectName(QString::fromUtf8("labeRenterEstate"));
        sizePolicy2.setHeightForWidth(labeRenterEstate->sizePolicy().hasHeightForWidth());
        labeRenterEstate->setSizePolicy(sizePolicy2);
        labeRenterEstate->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labeRenterEstate, 0, 0, 1, 1);

        labelRenterName = new QLabel(tabRenters);
        labelRenterName->setObjectName(QString::fromUtf8("labelRenterName"));
        sizePolicy2.setHeightForWidth(labelRenterName->sizePolicy().hasHeightForWidth());
        labelRenterName->setSizePolicy(sizePolicy2);
        labelRenterName->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labelRenterName, 3, 0, 1, 1);

        comboBoxApartmentType = new QComboBox(tabRenters);
        comboBoxApartmentType->addItem(QString());
        comboBoxApartmentType->addItem(QString());
        comboBoxApartmentType->setObjectName(QString::fromUtf8("comboBoxApartmentType"));
        sizePolicy.setHeightForWidth(comboBoxApartmentType->sizePolicy().hasHeightForWidth());
        comboBoxApartmentType->setSizePolicy(sizePolicy);
        comboBoxApartmentType->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(comboBoxApartmentType, 2, 1, 1, 1);

        labelContractType = new QLabel(tabRenters);
        labelContractType->setObjectName(QString::fromUtf8("labelContractType"));
        sizePolicy2.setHeightForWidth(labelContractType->sizePolicy().hasHeightForWidth());
        labelContractType->setSizePolicy(sizePolicy2);
        labelContractType->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labelContractType, 8, 0, 1, 1);

        dateEditContract = new QDateEdit(tabRenters);
        dateEditContract->setObjectName(QString::fromUtf8("dateEditContract"));
        sizePolicy.setHeightForWidth(dateEditContract->sizePolicy().hasHeightForWidth());
        dateEditContract->setSizePolicy(sizePolicy);
        dateEditContract->setMinimumSize(QSize(0, 30));
        dateEditContract->setLayoutDirection(Qt::LeftToRight);
        dateEditContract->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditContract->setCalendarPopup(true);

        gridLayout_6->addWidget(dateEditContract, 6, 1, 1, 1);

        comboBoxContractType = new QComboBox(tabRenters);
        comboBoxContractType->addItem(QString());
        comboBoxContractType->addItem(QString());
        comboBoxContractType->setObjectName(QString::fromUtf8("comboBoxContractType"));
        sizePolicy.setHeightForWidth(comboBoxContractType->sizePolicy().hasHeightForWidth());
        comboBoxContractType->setSizePolicy(sizePolicy);
        comboBoxContractType->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(comboBoxContractType, 8, 1, 1, 1);

        labelRenterPhone = new QLabel(tabRenters);
        labelRenterPhone->setObjectName(QString::fromUtf8("labelRenterPhone"));
        sizePolicy2.setHeightForWidth(labelRenterPhone->sizePolicy().hasHeightForWidth());
        labelRenterPhone->setSizePolicy(sizePolicy2);
        labelRenterPhone->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labelRenterPhone, 5, 0, 1, 1);

        lineEditRenterPhone = new QLineEdit(tabRenters);
        lineEditRenterPhone->setObjectName(QString::fromUtf8("lineEditRenterPhone"));
        sizePolicy.setHeightForWidth(lineEditRenterPhone->sizePolicy().hasHeightForWidth());
        lineEditRenterPhone->setSizePolicy(sizePolicy);
        lineEditRenterPhone->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(lineEditRenterPhone, 5, 1, 1, 1);

        labeAprtmentType = new QLabel(tabRenters);
        labeAprtmentType->setObjectName(QString::fromUtf8("labeAprtmentType"));
        sizePolicy2.setHeightForWidth(labeAprtmentType->sizePolicy().hasHeightForWidth());
        labeAprtmentType->setSizePolicy(sizePolicy2);
        labeAprtmentType->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labeAprtmentType, 2, 0, 1, 1);

        lineEditRenterNationalId = new QLineEdit(tabRenters);
        lineEditRenterNationalId->setObjectName(QString::fromUtf8("lineEditRenterNationalId"));
        sizePolicy.setHeightForWidth(lineEditRenterNationalId->sizePolicy().hasHeightForWidth());
        lineEditRenterNationalId->setSizePolicy(sizePolicy);
        lineEditRenterNationalId->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(lineEditRenterNationalId, 4, 1, 1, 1);

        widget_2 = new QWidget(tabRenters);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_8 = new QGridLayout(widget_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        buttonRenterEmpty = new QPushButton(widget_2);
        buttonRenterEmpty->setObjectName(QString::fromUtf8("buttonRenterEmpty"));
        buttonRenterEmpty->setMinimumSize(QSize(40, 40));

        gridLayout_8->addWidget(buttonRenterEmpty, 0, 2, 1, 1);

        buttonRenterSave = new QPushButton(widget_2);
        buttonRenterSave->setObjectName(QString::fromUtf8("buttonRenterSave"));
        buttonRenterSave->setMinimumSize(QSize(40, 40));
        buttonRenterSave->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_8->addWidget(buttonRenterSave, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_6->addWidget(widget_2, 10, 0, 1, 2);

        labelContractDate = new QLabel(tabRenters);
        labelContractDate->setObjectName(QString::fromUtf8("labelContractDate"));
        sizePolicy2.setHeightForWidth(labelContractDate->sizePolicy().hasHeightForWidth());
        labelContractDate->setSizePolicy(sizePolicy2);
        labelContractDate->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labelContractDate, 6, 0, 1, 1);

        labelRenterNationalID = new QLabel(tabRenters);
        labelRenterNationalID->setObjectName(QString::fromUtf8("labelRenterNationalID"));
        sizePolicy2.setHeightForWidth(labelRenterNationalID->sizePolicy().hasHeightForWidth());
        labelRenterNationalID->setSizePolicy(sizePolicy2);
        labelRenterNationalID->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labelRenterNationalID, 4, 0, 1, 1);

        lineEditRenterName = new QLineEdit(tabRenters);
        lineEditRenterName->setObjectName(QString::fromUtf8("lineEditRenterName"));
        sizePolicy.setHeightForWidth(lineEditRenterName->sizePolicy().hasHeightForWidth());
        lineEditRenterName->setSizePolicy(sizePolicy);
        lineEditRenterName->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(lineEditRenterName, 3, 1, 1, 1);

        labelContractEndDate = new QLabel(tabRenters);
        labelContractEndDate->setObjectName(QString::fromUtf8("labelContractEndDate"));
        sizePolicy2.setHeightForWidth(labelContractEndDate->sizePolicy().hasHeightForWidth());
        labelContractEndDate->setSizePolicy(sizePolicy2);
        labelContractEndDate->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labelContractEndDate, 7, 0, 1, 1);

        comboBoxRenterEstate = new QComboBox(tabRenters);
        comboBoxRenterEstate->addItem(QString());
        comboBoxRenterEstate->addItem(QString());
        comboBoxRenterEstate->addItem(QString());
        comboBoxRenterEstate->setObjectName(QString::fromUtf8("comboBoxRenterEstate"));
        sizePolicy.setHeightForWidth(comboBoxRenterEstate->sizePolicy().hasHeightForWidth());
        comboBoxRenterEstate->setSizePolicy(sizePolicy);
        comboBoxRenterEstate->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(comboBoxRenterEstate, 0, 1, 1, 1);

        dateEditContractEnd = new QDateEdit(tabRenters);
        dateEditContractEnd->setObjectName(QString::fromUtf8("dateEditContractEnd"));
        sizePolicy.setHeightForWidth(dateEditContractEnd->sizePolicy().hasHeightForWidth());
        dateEditContractEnd->setSizePolicy(sizePolicy);
        dateEditContractEnd->setMinimumSize(QSize(0, 30));
        dateEditContractEnd->setLayoutDirection(Qt::LeftToRight);
        dateEditContractEnd->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEditContractEnd->setCalendarPopup(true);

        gridLayout_6->addWidget(dateEditContractEnd, 7, 1, 1, 1);

        labelApartmentNumber = new QLabel(tabRenters);
        labelApartmentNumber->setObjectName(QString::fromUtf8("labelApartmentNumber"));
        sizePolicy2.setHeightForWidth(labelApartmentNumber->sizePolicy().hasHeightForWidth());
        labelApartmentNumber->setSizePolicy(sizePolicy2);
        labelApartmentNumber->setMinimumSize(QSize(100, 0));

        gridLayout_6->addWidget(labelApartmentNumber, 1, 0, 1, 1);

        spinBoxRenterApartmentNumber = new QSpinBox(tabRenters);
        spinBoxRenterApartmentNumber->setObjectName(QString::fromUtf8("spinBoxRenterApartmentNumber"));
        sizePolicy.setHeightForWidth(spinBoxRenterApartmentNumber->sizePolicy().hasHeightForWidth());
        spinBoxRenterApartmentNumber->setSizePolicy(sizePolicy);
        spinBoxRenterApartmentNumber->setMinimumSize(QSize(0, 30));
        spinBoxRenterApartmentNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRenterApartmentNumber->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_6->addWidget(spinBoxRenterApartmentNumber, 1, 1, 1, 1);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabRenters, icon2, QString());
        tabEstates = new QWidget();
        tabEstates->setObjectName(QString::fromUtf8("tabEstates"));
        gridLayout_4 = new QGridLayout(tabEstates);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        labelOwnerName = new QLabel(tabEstates);
        labelOwnerName->setObjectName(QString::fromUtf8("labelOwnerName"));
        sizePolicy2.setHeightForWidth(labelOwnerName->sizePolicy().hasHeightForWidth());
        labelOwnerName->setSizePolicy(sizePolicy2);
        labelOwnerName->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelOwnerName, 1, 0, 1, 1);

        labelEstateNotes = new QLabel(tabEstates);
        labelEstateNotes->setObjectName(QString::fromUtf8("labelEstateNotes"));
        sizePolicy2.setHeightForWidth(labelEstateNotes->sizePolicy().hasHeightForWidth());
        labelEstateNotes->setSizePolicy(sizePolicy2);
        labelEstateNotes->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelEstateNotes, 5, 0, 1, 1);

        textEditEstatesNotes = new QTextEdit(tabEstates);
        textEditEstatesNotes->setObjectName(QString::fromUtf8("textEditEstatesNotes"));
        sizePolicy3.setHeightForWidth(textEditEstatesNotes->sizePolicy().hasHeightForWidth());
        textEditEstatesNotes->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(textEditEstatesNotes, 5, 1, 1, 1);

        labelFloors = new QLabel(tabEstates);
        labelFloors->setObjectName(QString::fromUtf8("labelFloors"));
        sizePolicy2.setHeightForWidth(labelFloors->sizePolicy().hasHeightForWidth());
        labelFloors->setSizePolicy(sizePolicy2);
        labelFloors->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelFloors, 3, 0, 1, 1);

        widget = new QWidget(tabEstates);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        buttonEstateEmpty = new QPushButton(widget);
        buttonEstateEmpty->setObjectName(QString::fromUtf8("buttonEstateEmpty"));
        buttonEstateEmpty->setMinimumSize(QSize(40, 40));

        gridLayout_5->addWidget(buttonEstateEmpty, 0, 2, 1, 1);

        buttonEstateSave = new QPushButton(widget);
        buttonEstateSave->setObjectName(QString::fromUtf8("buttonEstateSave"));
        buttonEstateSave->setMinimumSize(QSize(40, 40));
        buttonEstateSave->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 144, 255);"));

        gridLayout_5->addWidget(buttonEstateSave, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout_4->addWidget(widget, 6, 0, 1, 2);

        labelApartments = new QLabel(tabEstates);
        labelApartments->setObjectName(QString::fromUtf8("labelApartments"));
        sizePolicy2.setHeightForWidth(labelApartments->sizePolicy().hasHeightForWidth());
        labelApartments->setSizePolicy(sizePolicy2);
        labelApartments->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelApartments, 4, 0, 1, 1);

        lineEditEstateAddress = new QLineEdit(tabEstates);
        lineEditEstateAddress->setObjectName(QString::fromUtf8("lineEditEstateAddress"));
        sizePolicy.setHeightForWidth(lineEditEstateAddress->sizePolicy().hasHeightForWidth());
        lineEditEstateAddress->setSizePolicy(sizePolicy);
        lineEditEstateAddress->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(lineEditEstateAddress, 2, 1, 1, 1);

        lineEditOwnerName = new QLineEdit(tabEstates);
        lineEditOwnerName->setObjectName(QString::fromUtf8("lineEditOwnerName"));
        sizePolicy.setHeightForWidth(lineEditOwnerName->sizePolicy().hasHeightForWidth());
        lineEditOwnerName->setSizePolicy(sizePolicy);
        lineEditOwnerName->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(lineEditOwnerName, 1, 1, 1, 1);

        spinBoxAppartments = new QSpinBox(tabEstates);
        spinBoxAppartments->setObjectName(QString::fromUtf8("spinBoxAppartments"));
        sizePolicy.setHeightForWidth(spinBoxAppartments->sizePolicy().hasHeightForWidth());
        spinBoxAppartments->setSizePolicy(sizePolicy);
        spinBoxAppartments->setMinimumSize(QSize(0, 30));
        spinBoxAppartments->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxAppartments->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxAppartments->setMaximum(999999999);

        gridLayout_4->addWidget(spinBoxAppartments, 4, 1, 1, 1);

        spinBoxFloors = new QSpinBox(tabEstates);
        spinBoxFloors->setObjectName(QString::fromUtf8("spinBoxFloors"));
        sizePolicy.setHeightForWidth(spinBoxFloors->sizePolicy().hasHeightForWidth());
        spinBoxFloors->setSizePolicy(sizePolicy);
        spinBoxFloors->setMinimumSize(QSize(0, 30));
        spinBoxFloors->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxFloors->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxFloors->setMaximum(999999999);

        gridLayout_4->addWidget(spinBoxFloors, 3, 1, 1, 1);

        labelEstateAddress = new QLabel(tabEstates);
        labelEstateAddress->setObjectName(QString::fromUtf8("labelEstateAddress"));
        sizePolicy2.setHeightForWidth(labelEstateAddress->sizePolicy().hasHeightForWidth());
        labelEstateAddress->setSizePolicy(sizePolicy2);
        labelEstateAddress->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelEstateAddress, 2, 0, 1, 1);

        labelEstateName = new QLabel(tabEstates);
        labelEstateName->setObjectName(QString::fromUtf8("labelEstateName"));
        sizePolicy2.setHeightForWidth(labelEstateName->sizePolicy().hasHeightForWidth());
        labelEstateName->setSizePolicy(sizePolicy2);
        labelEstateName->setMinimumSize(QSize(100, 0));

        gridLayout_4->addWidget(labelEstateName, 0, 0, 1, 1);

        lineEditEstateName = new QLineEdit(tabEstates);
        lineEditEstateName->setObjectName(QString::fromUtf8("lineEditEstateName"));
        sizePolicy.setHeightForWidth(lineEditEstateName->sizePolicy().hasHeightForWidth());
        lineEditEstateName->setSizePolicy(sizePolicy);
        lineEditEstateName->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(lineEditEstateName, 0, 1, 1, 1);

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
        comboBoxReceiptRenter = new QComboBox(widget_6);
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->addItem(QString());
        comboBoxReceiptRenter->setObjectName(QString::fromUtf8("comboBoxReceiptRenter"));
        sizePolicy.setHeightForWidth(comboBoxReceiptRenter->sizePolicy().hasHeightForWidth());
        comboBoxReceiptRenter->setSizePolicy(sizePolicy);
        comboBoxReceiptRenter->setMinimumSize(QSize(0, 30));
        comboBoxReceiptRenter->setLayoutDirection(Qt::RightToLeft);
        comboBoxReceiptRenter->setEditable(false);

        gridLayout_13->addWidget(comboBoxReceiptRenter, 1, 1, 1, 1);

        labelReceiptMonth = new QLabel(widget_6);
        labelReceiptMonth->setObjectName(QString::fromUtf8("labelReceiptMonth"));

        gridLayout_13->addWidget(labelReceiptMonth, 2, 0, 1, 1);

        labelReceiptEstate = new QLabel(widget_6);
        labelReceiptEstate->setObjectName(QString::fromUtf8("labelReceiptEstate"));
        sizePolicy2.setHeightForWidth(labelReceiptEstate->sizePolicy().hasHeightForWidth());
        labelReceiptEstate->setSizePolicy(sizePolicy2);
        labelReceiptEstate->setMinimumSize(QSize(100, 0));

        gridLayout_13->addWidget(labelReceiptEstate, 0, 0, 1, 1);

        comboBoxReceiptEstate = new QComboBox(widget_6);
        comboBoxReceiptEstate->addItem(QString());
        comboBoxReceiptEstate->addItem(QString());
        comboBoxReceiptEstate->addItem(QString());
        comboBoxReceiptEstate->setObjectName(QString::fromUtf8("comboBoxReceiptEstate"));
        sizePolicy.setHeightForWidth(comboBoxReceiptEstate->sizePolicy().hasHeightForWidth());
        comboBoxReceiptEstate->setSizePolicy(sizePolicy);
        comboBoxReceiptEstate->setMinimumSize(QSize(0, 30));
        comboBoxReceiptEstate->setLayoutDirection(Qt::RightToLeft);
        comboBoxReceiptEstate->setEditable(false);

        gridLayout_13->addWidget(comboBoxReceiptEstate, 0, 1, 1, 1);

        labelReceiptRenter = new QLabel(widget_6);
        labelReceiptRenter->setObjectName(QString::fromUtf8("labelReceiptRenter"));
        sizePolicy2.setHeightForWidth(labelReceiptRenter->sizePolicy().hasHeightForWidth());
        labelReceiptRenter->setSizePolicy(sizePolicy2);
        labelReceiptRenter->setMinimumSize(QSize(100, 0));

        gridLayout_13->addWidget(labelReceiptRenter, 1, 0, 1, 1);

        comboBoxReceiptMonth = new QComboBox(widget_6);
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->addItem(QString());
        comboBoxReceiptMonth->setObjectName(QString::fromUtf8("comboBoxReceiptMonth"));
        comboBoxReceiptMonth->setMinimumSize(QSize(0, 30));
        comboBoxReceiptMonth->setLayoutDirection(Qt::RightToLeft);
        comboBoxReceiptMonth->setEditable(false);

        gridLayout_13->addWidget(comboBoxReceiptMonth, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_13->addItem(verticalSpacer_3, 4, 0, 1, 2);

        labelReceiptYear = new QLabel(widget_6);
        labelReceiptYear->setObjectName(QString::fromUtf8("labelReceiptYear"));

        gridLayout_13->addWidget(labelReceiptYear, 3, 0, 1, 1);

        spinBoxReceiptYear = new QSpinBox(widget_6);
        spinBoxReceiptYear->setObjectName(QString::fromUtf8("spinBoxReceiptYear"));
        spinBoxReceiptYear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxReceiptYear->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxReceiptYear->setMinimum(1111);
        spinBoxReceiptYear->setMaximum(9999);

        gridLayout_13->addWidget(spinBoxReceiptYear, 3, 1, 1, 1);


        gridLayout_14->addWidget(widget_6, 0, 0, 1, 3);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon/resit.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetMain->addTab(tabReceipt, icon4, QString());

        gridLayout->addWidget(tabWidgetMain, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 727, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuFile = new QMenu(menu);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        labelQueryEstate->setBuddy(comboBoxQueryEstate);
        labelQueryDateFrom->setBuddy(dateEditQueryDateFrom);
        labelQueryReport->setBuddy(comboBoxQueryReport);
        labelQueryDateTo->setBuddy(dateEditQueryDateTo);
        labelMoneyDate->setBuddy(dateEditMoneyDate);
        labelMoneyEstate->setBuddy(comboBoxMoneyEstate);
        labelMoneyLabel->setBuddy(textEditMoneyNotes);
        labelMoney->setBuddy(doubleSpinBoxMony);
        labelMoneyRenterName->setBuddy(comboBoxMoneyRenter);
        labelMoneyType->setBuddy(comboBoxMoneyType);
        labelMoneyMonth->setBuddy(comboBoxMonyMonth);
        labeRenterEstate->setBuddy(comboBoxRenterEstate);
        labelRenterName->setBuddy(lineEditRenterName);
        labelContractType->setBuddy(comboBoxContractType);
        labelRenterPhone->setBuddy(lineEditRenterPhone);
        labeAprtmentType->setBuddy(comboBoxApartmentType);
        labelContractDate->setBuddy(dateEditContract);
        labelRenterNationalID->setBuddy(lineEditRenterNationalId);
        labelContractEndDate->setBuddy(dateEditContractEnd);
        labelApartmentNumber->setBuddy(spinBoxRenterApartmentNumber);
        labelOwnerName->setBuddy(lineEditOwnerName);
        labelEstateNotes->setBuddy(textEditEstatesNotes);
        labelFloors->setBuddy(spinBoxFloors);
        labelApartments->setBuddy(spinBoxAppartments);
        labelEstateAddress->setBuddy(lineEditEstateAddress);
        labelEstateName->setBuddy(lineEditEstateName);
        labelReceiptMonth->setBuddy(comboBoxReceiptMonth);
        labelReceiptEstate->setBuddy(comboBoxReceiptEstate);
        labelReceiptRenter->setBuddy(comboBoxReceiptRenter);
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
        QWidget::setTabOrder(checkBoxAddFreeMoney, comboBoxMoneyEstate);
        QWidget::setTabOrder(comboBoxMoneyEstate, comboBoxMoneyRenter);
        QWidget::setTabOrder(comboBoxMoneyRenter, dateEditMoneyDate);
        QWidget::setTabOrder(dateEditMoneyDate, doubleSpinBoxMony);
        QWidget::setTabOrder(doubleSpinBoxMony, RadioDeposite);
        QWidget::setTabOrder(RadioDeposite, radioWithdraw);
        QWidget::setTabOrder(radioWithdraw, comboBoxMoneyType);
        QWidget::setTabOrder(comboBoxMoneyType, textEditMoneyNotes);
        QWidget::setTabOrder(textEditMoneyNotes, buttonMoneySave);
        QWidget::setTabOrder(buttonMoneySave, buttonMoneyEmpty);
        QWidget::setTabOrder(buttonMoneyEmpty, comboBoxRenterEstate);
        QWidget::setTabOrder(comboBoxRenterEstate, spinBoxRenterApartmentNumber);
        QWidget::setTabOrder(spinBoxRenterApartmentNumber, comboBoxApartmentType);
        QWidget::setTabOrder(comboBoxApartmentType, lineEditRenterName);
        QWidget::setTabOrder(lineEditRenterName, lineEditRenterNationalId);
        QWidget::setTabOrder(lineEditRenterNationalId, lineEditRenterPhone);
        QWidget::setTabOrder(lineEditRenterPhone, dateEditContract);
        QWidget::setTabOrder(dateEditContract, dateEditContractEnd);
        QWidget::setTabOrder(dateEditContractEnd, comboBoxContractType);
        QWidget::setTabOrder(comboBoxContractType, buttonRenterSave);
        QWidget::setTabOrder(buttonRenterSave, buttonRenterEmpty);
        QWidget::setTabOrder(buttonRenterEmpty, lineEditEstateName);
        QWidget::setTabOrder(lineEditEstateName, lineEditOwnerName);
        QWidget::setTabOrder(lineEditOwnerName, lineEditEstateAddress);
        QWidget::setTabOrder(lineEditEstateAddress, spinBoxFloors);
        QWidget::setTabOrder(spinBoxFloors, spinBoxAppartments);
        QWidget::setTabOrder(spinBoxAppartments, textEditEstatesNotes);
        QWidget::setTabOrder(textEditEstatesNotes, buttonEstateSave);
        QWidget::setTabOrder(buttonEstateSave, buttonEstateEmpty);
        QWidget::setTabOrder(buttonEstateEmpty, comboBoxReceiptEstate);
        QWidget::setTabOrder(comboBoxReceiptEstate, comboBoxReceiptRenter);
        QWidget::setTabOrder(comboBoxReceiptRenter, comboBoxReceiptMonth);
        QWidget::setTabOrder(comboBoxReceiptMonth, buttonPrint);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menu->addAction(menuFile->menuAction());
        menu->addAction(menuExit);
        menuFile->addAction(menuExport);
        menuFile->addAction(menuImport);
        menuAbout->addAction(menuAboutApp);
        menuAbout->addAction(menuAboutQt);

        retranslateUi(MainWindow);

        tabWidgetMain->setCurrentIndex(1);
        comboBoxReceiptRenter->setCurrentIndex(0);
        comboBoxReceiptEstate->setCurrentIndex(0);
        comboBoxReceiptMonth->setCurrentIndex(0);


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
        buttonExit->setText(QCoreApplication::translate("MainWindow", "\330\256\330\261\331\210\330\254", nullptr));
        checkBoxQueryRenter->setText(QCoreApplication::translate("MainWindow", "\330\252\330\255\330\257\331\212\330\257 \331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        labelQueryEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\330\252\330\271\331\204\330\247\331\205 \330\271\331\206 \330\271\331\202\330\247\330\261", nullptr));
        comboBoxQueryRenter->setItemText(0, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 1", nullptr));
        comboBoxQueryRenter->setItemText(1, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 2", nullptr));
        comboBoxQueryRenter->setItemText(2, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 3", nullptr));
        comboBoxQueryRenter->setItemText(3, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 4", nullptr));
        comboBoxQueryRenter->setItemText(4, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 5", nullptr));
        comboBoxQueryRenter->setItemText(5, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 6", nullptr));
        comboBoxQueryRenter->setItemText(6, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 7", nullptr));
        comboBoxQueryRenter->setItemText(7, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 8", nullptr));
        comboBoxQueryRenter->setItemText(8, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 9", nullptr));
        comboBoxQueryRenter->setItemText(9, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 10", nullptr));

        comboBoxQueryEstate->setItemText(0, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 1", nullptr));
        comboBoxQueryEstate->setItemText(1, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 2", nullptr));
        comboBoxQueryEstate->setItemText(2, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 3", nullptr));

        comboBoxQueryReport->setItemText(0, QCoreApplication::translate("MainWindow", "\331\205\330\257\331\212\331\210\331\206\331\212\330\251 \330\247\331\204\330\247\331\212\330\254\330\247\330\261", nullptr));
        comboBoxQueryReport->setItemText(1, QCoreApplication::translate("MainWindow", "\331\205\330\257\331\212\331\210\331\206\331\212\330\251 \330\247\331\204\331\205\331\212\330\247\330\251", nullptr));
        comboBoxQueryReport->setItemText(2, QCoreApplication::translate("MainWindow", "\331\203\331\204 \330\247\331\204\331\205\330\257\331\212\331\210\331\206\331\212\330\247\330\252", nullptr));
        comboBoxQueryReport->setItemText(3, QCoreApplication::translate("MainWindow", "\330\247\331\204\331\205\330\250\331\204\330\272 \330\247\331\204\331\201\330\271\331\204\331\211", nullptr));
        comboBoxQueryReport->setItemText(4, QCoreApplication::translate("MainWindow", "\330\247\330\254\331\205\330\247\331\204\331\211 \330\247\331\204\331\205\330\250\330\247\331\204\330\272 \330\247\331\204\331\205\330\255\330\265\331\204\330\251 \330\271\331\206 \331\201\330\252\330\261\330\251 ", nullptr));
        comboBoxQueryReport->setItemText(5, QCoreApplication::translate("MainWindow", "\330\255\330\247\331\204\330\251 \330\247\331\204\330\271\331\202\331\210\330\257", nullptr));

        buttonQuery->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\330\252\330\271\331\204\330\247\331\205", nullptr));
        labelQueryDateFrom->setText(QCoreApplication::translate("MainWindow", "\330\271\331\206 \330\247\331\204\331\201\330\252\330\261\330\251", nullptr));
        labelQueryReport->setText(QCoreApplication::translate("MainWindow", "\330\271\330\261\330\266 \330\252\331\202\330\261\331\212\330\261 \330\271\331\206 ", nullptr));
        labelQueryDateTo->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\211", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabQuery), QCoreApplication::translate("MainWindow", "\330\247\330\263\330\252\330\271\331\204\330\247\331\205\330\247\330\252", nullptr));
        buttonMoneySave->setText(QCoreApplication::translate("MainWindow", "\330\255\331\201\330\270", nullptr));
        buttonMoneyEmpty->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\261\331\212\330\272", nullptr));
        comboBoxMoneyType->setItemText(0, QCoreApplication::translate("MainWindow", "\330\263\330\257\330\247\330\257 \330\247\331\212\330\254\330\247\330\261", nullptr));
        comboBoxMoneyType->setItemText(1, QCoreApplication::translate("MainWindow", "\330\263\330\257\330\247\330\257 \331\205\331\212\330\247\330\251", nullptr));
        comboBoxMoneyType->setItemText(2, QCoreApplication::translate("MainWindow", "\330\263\330\257\330\247\330\257 \330\247\330\271\331\205\330\247\331\204 \330\265\331\212\330\247\331\206\330\251 / \330\267\331\210\330\247\330\261\330\246", nullptr));
        comboBoxMoneyType->setItemText(3, QCoreApplication::translate("MainWindow", "\330\272\331\212\330\261 \331\205\330\265\331\206\331\201", nullptr));

        comboBoxMoneyRenter->setItemText(0, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 1", nullptr));
        comboBoxMoneyRenter->setItemText(1, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 2", nullptr));
        comboBoxMoneyRenter->setItemText(2, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 3", nullptr));
        comboBoxMoneyRenter->setItemText(3, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 4", nullptr));
        comboBoxMoneyRenter->setItemText(4, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 5", nullptr));
        comboBoxMoneyRenter->setItemText(5, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 6", nullptr));
        comboBoxMoneyRenter->setItemText(6, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 7", nullptr));
        comboBoxMoneyRenter->setItemText(7, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 8", nullptr));
        comboBoxMoneyRenter->setItemText(8, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 9", nullptr));
        comboBoxMoneyRenter->setItemText(9, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 10", nullptr));

        labelMoneyDate->setText(QCoreApplication::translate("MainWindow", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\271\331\205\331\204\331\212\330\251", nullptr));
        checkBoxAddFreeMoney->setText(QCoreApplication::translate("MainWindow", "\330\247\330\266\330\247\331\201\330\251 \331\205\330\250\331\204\330\272 \330\250\330\257\331\210\331\206 \330\252\330\265\331\206\331\212\331\201", nullptr));
        labelMoneyEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        labelMoneyLabel->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\247\330\265\331\212\331\204 \330\247\330\256\330\261\331\211", nullptr));
        textEditMoneyNotes->setDocumentTitle(QString());
        textEditMoneyNotes->setPlaceholderText(QString());
        labelMoney->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\331\205\330\250\331\204\330\272 \330\247\331\204\331\205\330\257\331\201\331\210\330\271", nullptr));
        labelMoneyRenterName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        RadioDeposite->setText(QCoreApplication::translate("MainWindow", "\330\247\331\212\330\257\330\247\330\271", nullptr));
        radioWithdraw->setText(QCoreApplication::translate("MainWindow", "\330\263\330\255\330\250", nullptr));
        labelMoneyType->setText(QCoreApplication::translate("MainWindow", "\331\206\331\210\330\271 \330\247\331\204\331\205\330\271\330\247\331\205\331\204\330\251", nullptr));
        comboBoxMoneyEstate->setItemText(0, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 1", nullptr));
        comboBoxMoneyEstate->setItemText(1, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 2", nullptr));
        comboBoxMoneyEstate->setItemText(2, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 3", nullptr));

        labelMoneyMonth->setText(QCoreApplication::translate("MainWindow", "\331\205\330\257\331\201\331\210\330\271\330\251 \330\271\331\206 \330\264\331\207\330\261", nullptr));
        labelMoneyYear->setText(QCoreApplication::translate("MainWindow", "\330\263\331\206\330\251", nullptr));
        comboBoxMonyMonth->setItemText(0, QCoreApplication::translate("MainWindow", "1- \331\212\331\206\330\247\331\212\330\261", nullptr));
        comboBoxMonyMonth->setItemText(1, QCoreApplication::translate("MainWindow", "2- \331\201\330\250\330\261\330\247\331\212\330\261", nullptr));
        comboBoxMonyMonth->setItemText(2, QCoreApplication::translate("MainWindow", "3- \331\205\330\247\330\261\330\263", nullptr));
        comboBoxMonyMonth->setItemText(3, QCoreApplication::translate("MainWindow", "4- \330\247\330\250\330\261\331\212\331\204", nullptr));
        comboBoxMonyMonth->setItemText(4, QCoreApplication::translate("MainWindow", "5- \331\205\330\247\331\212\331\210", nullptr));
        comboBoxMonyMonth->setItemText(5, QCoreApplication::translate("MainWindow", "6- \331\212\331\210\331\206\331\212\331\210", nullptr));
        comboBoxMonyMonth->setItemText(6, QCoreApplication::translate("MainWindow", "7- \331\212\331\210\331\204\331\212\331\210", nullptr));
        comboBoxMonyMonth->setItemText(7, QCoreApplication::translate("MainWindow", "8- \330\247\330\272\330\263\330\267\330\263", nullptr));
        comboBoxMonyMonth->setItemText(8, QCoreApplication::translate("MainWindow", "9- \330\263\330\250\330\252\331\205\330\250\330\261", nullptr));
        comboBoxMonyMonth->setItemText(9, QCoreApplication::translate("MainWindow", "10- \330\247\331\203\330\252\331\210\330\250\330\261", nullptr));
        comboBoxMonyMonth->setItemText(10, QCoreApplication::translate("MainWindow", "11- \331\206\331\210\331\201\331\205\330\250\330\261", nullptr));
        comboBoxMonyMonth->setItemText(11, QCoreApplication::translate("MainWindow", "12- \330\257\331\212\330\263\331\205\330\250\330\261", nullptr));

        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabMoney), QCoreApplication::translate("MainWindow", "\331\205\330\271\330\247\331\205\331\204\330\251 \331\205\330\247\331\204\331\212\330\251", nullptr));
        labeRenterEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        labelRenterName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        comboBoxApartmentType->setItemText(0, QCoreApplication::translate("MainWindow", "\330\264\331\202\330\251", nullptr));
        comboBoxApartmentType->setItemText(1, QCoreApplication::translate("MainWindow", "\331\205\330\255\331\204", nullptr));

        labelContractType->setText(QCoreApplication::translate("MainWindow", "\331\206\331\210\330\271 \330\247\331\204\330\271\331\202\330\257", nullptr));
        comboBoxContractType->setItemText(0, QCoreApplication::translate("MainWindow", "\331\202\330\247\331\206\331\210\331\206 \331\202\330\257\331\212\331\205", nullptr));
        comboBoxContractType->setItemText(1, QCoreApplication::translate("MainWindow", "\331\202\330\247\331\206\331\210\331\206 \330\254\330\257\331\212\330\257", nullptr));

        labelRenterPhone->setText(QCoreApplication::translate("MainWindow", "\330\252\331\204\331\212\331\201\331\210\331\206", nullptr));
        labeAprtmentType->setText(QCoreApplication::translate("MainWindow", "\331\206\331\210\330\271 \330\247\331\204\330\271\331\212\331\206 \330\247\331\204\331\205\330\244\330\254\330\261\330\251", nullptr));
        buttonRenterEmpty->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\261\331\212\330\272", nullptr));
        buttonRenterSave->setText(QCoreApplication::translate("MainWindow", "\330\255\331\201\330\270", nullptr));
        labelContractDate->setText(QCoreApplication::translate("MainWindow", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\204\330\271\331\202\330\257", nullptr));
        labelRenterNationalID->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\331\202\331\210\331\205\331\211", nullptr));
        labelContractEndDate->setText(QCoreApplication::translate("MainWindow", "\330\252\330\247\330\261\331\212\330\256 \330\247\331\206\330\252\331\207\330\247\330\241 \330\247\331\204\330\271\331\202\330\257", nullptr));
        comboBoxRenterEstate->setItemText(0, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 1", nullptr));
        comboBoxRenterEstate->setItemText(1, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 2", nullptr));
        comboBoxRenterEstate->setItemText(2, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 3", nullptr));

        labelApartmentNumber->setText(QCoreApplication::translate("MainWindow", "\330\261\331\202\331\205 \330\247\331\204\330\264\331\202\330\251", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabRenters), QCoreApplication::translate("MainWindow", "\330\263\330\254\331\204 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261\331\212\331\206", nullptr));
        labelOwnerName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\247\331\204\331\203", nullptr));
        labelEstateNotes->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\247\330\265\331\212\331\204 \330\247\330\256\330\261\331\211", nullptr));
        labelFloors->setText(QCoreApplication::translate("MainWindow", "\330\271\330\257\330\257 \330\247\331\204\330\267\331\210\330\247\330\250\331\202", nullptr));
        buttonEstateEmpty->setText(QCoreApplication::translate("MainWindow", "\330\252\331\201\330\261\331\212\330\272", nullptr));
        buttonEstateSave->setText(QCoreApplication::translate("MainWindow", "\330\255\331\201\330\270", nullptr));
        labelApartments->setText(QCoreApplication::translate("MainWindow", "\330\271\330\257\330\257 \330\247\331\204\330\264\331\202\331\202", nullptr));
        labelEstateAddress->setText(QCoreApplication::translate("MainWindow", "\330\271\331\206\331\210\330\247\331\206 \330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        labelEstateName->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\261\331\205\330\262\331\211 \331\204\331\204\330\271\331\202\330\247\330\261 ", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabEstates), QCoreApplication::translate("MainWindow", "\330\263\330\254\331\204 \330\247\331\204\330\271\331\202\330\247\330\261\330\247\330\252", nullptr));
        buttonPrint->setText(QCoreApplication::translate("MainWindow", "\330\267\330\250\330\247\330\271\330\251", nullptr));
        comboBoxReceiptRenter->setItemText(0, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 1", nullptr));
        comboBoxReceiptRenter->setItemText(1, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 2", nullptr));
        comboBoxReceiptRenter->setItemText(2, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 3", nullptr));
        comboBoxReceiptRenter->setItemText(3, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 4", nullptr));
        comboBoxReceiptRenter->setItemText(4, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 5", nullptr));
        comboBoxReceiptRenter->setItemText(5, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 6", nullptr));
        comboBoxReceiptRenter->setItemText(6, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 7", nullptr));
        comboBoxReceiptRenter->setItemText(7, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 8", nullptr));
        comboBoxReceiptRenter->setItemText(8, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 9", nullptr));
        comboBoxReceiptRenter->setItemText(9, QCoreApplication::translate("MainWindow", "\331\205\330\263\330\252\330\243\330\254\330\261 10", nullptr));

        labelReceiptMonth->setText(QCoreApplication::translate("MainWindow", "\330\271\331\206 \330\264\331\207\330\261", nullptr));
        labelReceiptEstate->setText(QCoreApplication::translate("MainWindow", "\330\247\331\204\330\271\331\202\330\247\330\261", nullptr));
        comboBoxReceiptEstate->setItemText(0, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 1", nullptr));
        comboBoxReceiptEstate->setItemText(1, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 2", nullptr));
        comboBoxReceiptEstate->setItemText(2, QCoreApplication::translate("MainWindow", "\330\271\331\202\330\247\330\261 3", nullptr));

        labelReceiptRenter->setText(QCoreApplication::translate("MainWindow", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\243\330\254\330\261", nullptr));
        comboBoxReceiptMonth->setItemText(0, QCoreApplication::translate("MainWindow", "1- \331\212\331\206\330\247\331\212\330\261", nullptr));
        comboBoxReceiptMonth->setItemText(1, QCoreApplication::translate("MainWindow", "2- \331\201\330\250\330\261\330\247\331\212\330\261", nullptr));
        comboBoxReceiptMonth->setItemText(2, QCoreApplication::translate("MainWindow", "3- \331\205\330\247\330\261\330\263", nullptr));
        comboBoxReceiptMonth->setItemText(3, QCoreApplication::translate("MainWindow", "4- \330\247\330\250\330\261\331\212\331\204", nullptr));
        comboBoxReceiptMonth->setItemText(4, QCoreApplication::translate("MainWindow", "5- \331\205\330\247\331\212\331\210", nullptr));
        comboBoxReceiptMonth->setItemText(5, QCoreApplication::translate("MainWindow", "6- \331\212\331\210\331\206\331\212\331\210", nullptr));
        comboBoxReceiptMonth->setItemText(6, QCoreApplication::translate("MainWindow", "7- \331\212\331\210\331\204\331\212\331\210", nullptr));
        comboBoxReceiptMonth->setItemText(7, QCoreApplication::translate("MainWindow", "8- \330\247\330\272\330\263\330\267\330\263", nullptr));
        comboBoxReceiptMonth->setItemText(8, QCoreApplication::translate("MainWindow", "9- \330\263\330\250\330\252\331\205\330\250\330\261 ", nullptr));
        comboBoxReceiptMonth->setItemText(9, QCoreApplication::translate("MainWindow", "10- \330\247\331\203\330\252\331\210\330\250\330\261 ", nullptr));
        comboBoxReceiptMonth->setItemText(10, QCoreApplication::translate("MainWindow", "11- \331\206\331\210\331\201\331\205\330\250\330\261", nullptr));
        comboBoxReceiptMonth->setItemText(11, QCoreApplication::translate("MainWindow", "12- \330\257\331\212\330\263\331\205\330\250\330\261", nullptr));

        labelReceiptYear->setText(QCoreApplication::translate("MainWindow", "\330\263\331\206\330\251", nullptr));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabReceipt), QCoreApplication::translate("MainWindow", "\330\247\330\265\330\257\330\247\330\261 \330\247\331\212\330\265\330\247\331\204 \330\247\331\212\330\254\330\247\330\261", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\331\205\331\204\331\201", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\331\202\330\247\330\271\330\257\330\251 \330\250\331\212\330\247\331\206\330\247\330\252", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "\330\271\331\206 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
