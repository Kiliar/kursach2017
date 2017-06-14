#-------------------------------------------------
#
# Project created by QtCreator 2017-05-06T18:43:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kursach
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    task.cpp \
    settings.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    task.h \
    settings.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui
