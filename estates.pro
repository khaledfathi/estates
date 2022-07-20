QT       += core gui sql printsupport

RC_FILE = app_icon.rc
RC_ICONS = app_icon.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    database.cpp \
    estatesedit.cpp \
    main.cpp \
    mainwindow.cpp \
    query.cpp \
    rawdatabase.cpp \
    validation.cpp \
    waterinvoice.cpp

HEADERS += \
    about.h \
    database.h \
    estatesedit.h \
    mainwindow.h \
    query.h \
    rawdatabase.h \
    validation.h \
    waterinvoice.h

FORMS += \
    about.ui \
    estatesedit.ui \
    mainwindow.ui \
    query.ui \
    rawdatabase.ui \
    waterinvoice.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourse.qrc

DISTFILES += \
    a.html
