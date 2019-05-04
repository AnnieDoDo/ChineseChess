#ifndef CHESS_H
#define CHESS_H

#include <QObject>
#include "QString"
#include <QPixmap>



class chess : public QObject
{
    Q_OBJECT
public:
    explicit chess(QObject *parent = nullptr);
    virtual void legalMoveClickFirst(int x0,int y0) = 0;
    virtual void legalMoveClickSecond(int x0,int y0) = 0;
    virtual bool legalMove(chess *chessposition[9][10]) = 0;

    bool checkMate(chess *chessposition[9][10]);
    QPixmap chesspic;
    bool rb;
protected:
    int fx;
    int fy;
    int sx;
    int sy;
    bool isking;

};

#endif // CHESS_H
