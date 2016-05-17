#-------------------------------------------------
#
# Project created by QtCreator 2016-05-15T16:03:17
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DatabaseLoginForm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bankemployee.cpp \
    administrator.cpp

HEADERS  += mainwindow.h \
    bankemployee.h \
    administrator.h

FORMS    += mainwindow.ui \
    bankemployee.ui \
    administrator.ui
