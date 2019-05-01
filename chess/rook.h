#ifndef ROOK_H
#define ROOK_H
#include "chess.h"
#include "chessboard.h"

class rook : public chess
{
public:
    rook();
    void legalMoveClickFirst(int x0,int y0);
    void legalMoveClickSecond(int x0,int y0);
    bool legalMove(chess *chessposition[9][10]);
    void legalCapture();
};

#endif // ROOK_H
