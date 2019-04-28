#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <iostream>
#include <QObject>
#include <QPushButton>

class chessboard : public QObject
{
    Q_OBJECT

public:
    explicit chessboard(QObject *parent = nullptr);
    ~chessboard();
    int *board[9][10];

public slots:
    void setBoard();
};

#endif // CHESSBOARD_H
