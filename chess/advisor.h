#ifndef ADVISOR_H
#define ADVISOR_H
#include "chess.h"
#include "chessboard.h"

class advisor : public chess
{
public:
    advisor();
    void legalMoveClickFirst(int x0,int y0);
    void legalMoveClickSecond(int x0,int y0);
    bool legalMove(chess *chessposition[9][10]);

};

#endif // ADVISOR_H
