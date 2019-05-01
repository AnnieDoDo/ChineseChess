#include "mainwindow.h"
#include "chessboard.h"
#include "widget.h"
#include "chess.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;



    w.setWindowTitle(QObject::tr("first main window"));
    w.show();

    return a.exec();
}
