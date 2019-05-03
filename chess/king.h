#ifndef KING_H
#define KING_H
#include "chess.h"
#include "chessboard.h"


class king : public chess
{
public:
    king();
    void legalMoveClickFirst(int x0,int y0);
    void legalMoveClickSecond(int x0,int y0);
    bool legalMove(chess *chessposition[9][10]);



};

#endif // KING_H
