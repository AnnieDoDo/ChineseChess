#ifndef HORSE_H
#define HORSE_H
#include "chess.h"
#include "chessboard.h"

class horse : public chess
{
public:
    horse();
    void legalMoveClickFirst(int x0,int y0);
    void legalMoveClickSecond(int x0,int y0);
    bool legalMove(chess *chessposition[9][10]);

};

#endif // HORSE_H
