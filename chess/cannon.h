#ifndef CANNON_H
#define CANNON_H
#include "chess.h"
#include "chessboard.h"

class cannon : public chess
{
public:
    cannon();
    void legalMoveClickFirst(int x0,int y0);
    void legalMoveClickSecond(int x0,int y0);
    bool legalMove(chess *chessposition[9][10]);
    void legalCapture();
};

#endif // CANNON_H
