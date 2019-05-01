#include "chessboard.h"
#include <QPushButton>
#include "chess/king.h"


using namespace std;

chessboard::chessboard(QObject *parent) :
    QObject(parent)
{
    clickedCount=0;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<10;j++)
        {
            board[i][j] = nullptr;
        }
    }
    board[4][0]=new king;
    board[4][0]->chesspic = QPixmap("red_king.png");



    cout<<"cheessboard"<<endl;
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
        if(board[y1][x1]!=nullptr)
        {
            board[y1][x1]->legalMoveClickFirst(y1,x1);
            clickedCount=1;
        }else{cout<<"reclick again"<<endl;}
    }else{
        y2 = (x-355+88)/88;
        x2 = (y-40)/86;
        board[y1][x1]->legalMoveClickSecond(y2,x2);
        clickedCount=0;
        if(board[y1][x1]->legalMove()==true){
            board[y2][x2]=board[y1][x1];
            board[y1][x1]=nullptr;
            chessboard::renewboard();
            cout<<"legalmove"<<endl;
        }else{
            cout<<"illegalmove"<<endl;
        }
    }


    cout<<x1<<" "<<y1<<endl;
}

//void chessboard::renewboard(){

//}






