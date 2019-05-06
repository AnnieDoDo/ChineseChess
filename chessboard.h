#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <iostream>
#include <QObject>
#include <QPushButton>
#include "chess.h"
#include "message.h"
#include <QLabel>


class chessboard : public QObject
{
    Q_OBJECT

public:
    explicit chessboard(QObject *parent = nullptr);
    ~chessboard();
    chess *board[9][10];

    bool clickedCount;
    bool turn;
    bool checkmate;
    int y1;
    int x1;
    int y2;
    int x2;
    message mb;
    void resetboard();

public slots:
    void setBoard();


signals:
    void renewboard();
    void renewgame();
    void checkturn(bool);

};

#endif // CHESSBOARD_H
