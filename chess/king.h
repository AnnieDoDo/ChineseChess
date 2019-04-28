#ifndef KING_H
#define KING_H
#include "chess.h"
#include "chessboard.h"

class king : public chess
{
public:
    king();
    void legalMove();
    void legalCapture();
};

#endif // KING_H
