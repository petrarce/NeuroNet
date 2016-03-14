#-------------------------------------------------
#
# Project created by QtCreator 2016-03-13T15:43:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BackPropagation
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    src/neuron.cpp \
    src/layer.cpp\
    

HEADERS  += mainwindow.h \
    lib/neuron.h \
    lib/layer.h\
    

FORMS    += mainwindow.ui
