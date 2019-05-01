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
    virtual bool legalMove() = 0;
    virtual void legalCapture() = 0;

    void checkMate();
    QPixmap chesspic;

protected:
    int fx;
    int fy;
    int sx;
    int sy;
    bool rb;
    bool isking;

};

#endif // CHESS_H
