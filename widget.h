#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <iostream>
#include "chessboard.h"


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
private:
    Ui::widget *ui;



    QLabel *label1;
};

#endif // WIDGET_H
