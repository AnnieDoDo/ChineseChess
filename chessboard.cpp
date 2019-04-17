#include "chessboard.h"
#include <QPushButton>

using namespace std;




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

chessboard::~chessboard()
{

}
void chessboard::setBoard(){
    btnpos=sender();
    QPushButton *newbtnpos=qobject_cast<QPushButton *>(btnpos);
    x=newbtnpos->x();
    y=newbtnpos->y();
    cout<<x<<" "<<y<<endl;
}


