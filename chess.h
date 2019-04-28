#ifndef CHESS_H
#define CHESS_H

#include <QObject>

class chess : public QObject
{
    Q_OBJECT
public:
    explicit chess(QObject *parent = nullptr);
    virtual void legalMove() = 0;
    virtual void legalCapture() = 0;
    void checkMate();

protected:
    int fx;
    int fy;
    int sx;
    int sy;
    bool rb;
    bool king;

};

#endif // CHESS_H
