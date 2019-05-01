#ifndef ELEPHANT_H
#define ELEPHANT_H
#include "chess.h"
#include "chessboard.h"

class elephant : public chess
{
public:
    elephant();
    void legalMoveClickFirst(int x0,int y0);
    void legalMoveClickSecond(int x0,int y0);
    bool legalMove(chess **chessposition);
    void legalCapture();
};

#endif // ELEPHANT_H
