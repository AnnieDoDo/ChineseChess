#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <iostream>
#include "chessboard.h"
#include "chess.h"

namespace Ui {
class widget;
}

class widget : public QWidget
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);
    ~widget();
    QPushButton *btn[9][10];
    QIcon ButtonIcon[9][10];
    QPixmap transparent_pic;


public slots:
        void checkChessPic();
        void showChessPic(int,int);
        void showturn(bool);

private:
    Ui::widget *ui;
    QLabel *label1;
    chessboard cb;
    QLabel *redturn;
    QLabel *blackturn;
    QFont f;
    QPalette p;
};

#endif // WIDGET_H
