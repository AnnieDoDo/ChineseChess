#-------------------------------------------------
#
# Project created by QtCreator 2019-04-09T21:05:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChineseChess
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

CONFIG += c++11

SOURCES += \
    chess.cpp \
    chess/king.cpp \
        main.cpp \
        mainwindow.cpp \
    widget.cpp \
    chessboard.cpp \
    chess/advisor.cpp \
    chess/elephant.cpp \
    chess/rook.cpp \
    chess/horse.cpp \
    chess/cannon.cpp \
    chess/soldier.cpp \
    message.cpp

HEADERS += \
    chess.h \
    chess/king.h \
        mainwindow.h \
    widget.h \
    chessboard.h \
    chess/advisor.h \
    chess/elephant.h \
    chess/rook.h \
    chess/horse.h \
    chess/cannon.h \
    chess/soldier.h \
    message.h

FORMS += \
        mainwindow.ui \
    widget.ui \
    message.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
DISTFILES += \
    chessboard.png \
    red_king.jpg \
    red_king.png \
    red_advisor.png \
    black_advisor.png \
    black_cannon.png \
    black_elephant.png \
    black_horse.png \
    black_king.png \
    black_rook.png \
    black_soldier.png \
    red_cannon.png \
    red_elephant.png \
    red_horse.png \
    red_rook.png \
    red_soldier.png
