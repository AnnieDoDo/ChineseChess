#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <iostream>
#include <QObject>

class chessboard : public QObject
{
    Q_OBJECT

public:
    explicit chessboard(QObject *parent = nullptr);
    int *board[9][10];
    int x;
    int y;

public slots:
    void setBoard();
};

#endif // CHESSBOARD_H
