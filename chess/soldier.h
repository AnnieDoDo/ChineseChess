#ifndef SOLDIER_H
#define SOLDIER_H
#include "chess.h"
#include "chessboard.h"

class soldier : public chess
{
public:
    soldier();
    void legalMoveClickFirst(int x0,int y0);
    void legalMoveClickSecond(int x0,int y0);
    bool legalMove(chess *chessposition[9][10]);
    void legalCapture();
};

#endif // SOLDIER_H
