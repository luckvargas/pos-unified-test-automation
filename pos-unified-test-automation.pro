#-------------------------------------------------
#
# Project created by QtCreator 2017-10-26T10:44:02
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pos-unified-test-automation
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/postesttool.cpp \
    src/actuators/cardcontroller.cpp \
    src/actuators/keyboardcontroller.cpp \
    src/actuators/printercontroller.cpp \
    src/actuators/touchcontroller.cpp \
    src/vision/visionworker.cpp

HEADERS += \
    src/mainwindow.h \
    src/postesttool.h \
    src/actuators/cardcontroller.h \
    src/actuators/keyboardcontroller.h \
    src/actuators/printercontroller.h \
    src/actuators/touchcontroller.h \
    src/vision/visionworker.h

FORMS += \
        ui/mainwindow.ui

RESOURCES += \
        res/resource.qrc

INCLUDEPATH += \
        src/actuators \
        src/vision

# add open CV
unix {
    CONFIG += link_pkgconfig
    PKGCONFIG += opencv
}

# add AtCore
INCLUDEPATH += /usr/include/AtCore
LIBS += -L/usr/lib -lAtCore
