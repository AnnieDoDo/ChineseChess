#include "chessboard.h"



chessboard::chessboard(QObject *parent) :
    QObject(parent)
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<10;j++)
        {
            board[i][j] = nullptr;

        }
    }

    x=0;
    y=0;
}

void chessboard::setBoard(){

}

