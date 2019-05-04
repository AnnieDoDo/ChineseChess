#include "chessboard.h"
#include <QPushButton>
#include "chess/king.h"
#include "chess/advisor.h"
#include "chess/elephant.h"
#include "chess/rook.h"
#include "chess/horse.h"
#include "chess/cannon.h"
#include "chess/soldier.h"


using namespace std;

chessboard::chessboard(QObject *parent) :
    QObject(parent)
{
    clickedCount=0;
    turn=0;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<10;j++)
        {
            board[i][j] = nullptr;
        }
    }
    //if red and black change, soldier's and elephant's rb have to change.
    board[0][0]=new rook;
    board[0][0]->chesspic = QPixmap("red_rook.png");
    board[1][0]=new horse;
    board[1][0]->chesspic = QPixmap("red_horse.png");
    board[2][0]=new elephant;
    board[2][0]->chesspic = QPixmap("red_elephant.png");
    board[3][0]=new advisor;
    board[3][0]->chesspic = QPixmap("red_advisor.png");
    board[4][0]=new king;
    board[4][0]->chesspic = QPixmap("red_king.png");
    board[5][0]=new advisor;
    board[5][0]->chesspic = QPixmap("red_advisor.png");
    board[6][0]=new elephant;
    board[6][0]->chesspic = QPixmap("red_elephant.png");
    board[7][0]=new horse;
    board[7][0]->chesspic = QPixmap("red_horse.png");
    board[8][0]=new rook;
    board[8][0]->chesspic = QPixmap("red_rook.png");
    board[1][2]=new cannon;
    board[1][2]->chesspic = QPixmap("red_cannon.png");
    board[7][2]=new cannon;
    board[7][2]->chesspic = QPixmap("red_cannon.png");
    board[0][3]=new soldier;
    board[0][3]->chesspic = QPixmap("red_soldier.png");
    board[2][3]=new soldier;
    board[2][3]->chesspic = QPixmap("red_soldier.png");
    board[4][3]=new soldier;
    board[4][3]->chesspic = QPixmap("red_soldier.png");
    board[6][3]=new soldier;
    board[6][3]->chesspic = QPixmap("red_soldier.png");
    board[8][3]=new soldier;
    board[8][3]->chesspic = QPixmap("red_soldier.png");

    board[0][9]=new rook;
    board[0][9]->chesspic = QPixmap("black_rook.png");
    board[0][9]->rb=1;
    board[1][9]=new horse;
    board[1][9]->chesspic = QPixmap("black_horse.png");
    board[1][9]->rb=1;
    board[2][9]=new elephant;
    board[2][9]->chesspic = QPixmap("black_elephant.png");
    board[2][9]->rb=1;
    board[3][9]=new advisor;
    board[3][9]->chesspic = QPixmap("black_advisor.png");
    board[3][9]->rb=1;
    board[4][9]=new king;
    board[4][9]->chesspic = QPixmap("black_king.png");
    board[4][9]->rb=1;
    board[5][9]=new advisor;
    board[5][9]->chesspic = QPixmap("black_advisor.png");
    board[5][9]->rb=1;
    board[6][9]=new elephant;
    board[6][9]->chesspic = QPixmap("black_elephant.png");
    board[6][9]->rb=1;
    board[7][9]=new horse;
    board[7][9]->chesspic = QPixmap("black_horse.png");
    board[7][9]->rb=1;
    board[8][9]=new rook;
    board[8][9]->chesspic = QPixmap("black_rook.png");
    board[8][9]->rb=1;
    board[1][7]=new cannon;
    board[1][7]->chesspic = QPixmap("black_cannon.png");
    board[1][7]->rb=1;
    board[7][7]=new cannon;
    board[7][7]->chesspic = QPixmap("black_cannon.png");
    board[7][7]->rb=1;
    board[0][6]=new soldier;
    board[0][6]->chesspic = QPixmap("black_soldier.png");
    board[0][6]->rb=1;
    board[2][6]=new soldier;
    board[2][6]->chesspic = QPixmap("black_soldier.png");
    board[2][6]->rb=1;
    board[4][6]=new soldier;
    board[4][6]->chesspic = QPixmap("black_soldier.png");
    board[4][6]->rb=1;
    board[6][6]=new soldier;
    board[6][6]->chesspic = QPixmap("black_soldier.png");
    board[6][6]->rb=1;
    board[8][6]=new soldier;
    board[8][6]->chesspic = QPixmap("black_soldier.png");
    board[8][6]->rb=1;
}

chessboard::~chessboard()
{

}
void chessboard::setBoard(){
    QPushButton *newbtnpos=qobject_cast<QPushButton *>(sender());
    int x = newbtnpos->x();
    int y = newbtnpos->y();


    if(clickedCount==0)
    {
        y1 = (x-355+88)/88;
        x1 = (y-40)/86;
        if((board[y1][x1]!=nullptr)&&(board[y1][x1]->rb==turn))
        {
            board[y1][x1]->legalMoveClickFirst(y1,x1);
            clickedCount=1;
        }else{cout<<"reclick again"<<endl;}
    }else{
        y2 = (x-355+88)/88;
        x2 = (y-40)/86;
        board[y1][x1]->legalMoveClickSecond(y2,x2);
        clickedCount=0;
        if(board[y1][x1]->legalMove(board)==true){
            board[y2][x2]=board[y1][x1];
            board[y1][x1]=nullptr;
            chessboard::renewboard();
            cout<<"legalmove"<<endl;
            if(board[y2][x2]->checkMate(board)==true)
            {
                cout<<"checkmate"<<endl;
            }
            turn=!turn;
        }else{
            cout<<"illegalmove"<<endl;
        }
    }
}








