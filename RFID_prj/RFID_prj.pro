#-------------------------------------------------
#
# Project created by QtCreator 2016-05-11T17:38:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RFID_prj
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    low_level_lib.cpp \
    rfid.cpp

HEADERS  += mainwindow.h \
    wiringPi.h \
    low_level_lib.h \
    wiringPiSPI.h \
    rfid.h

FORMS    += mainwindow.ui
