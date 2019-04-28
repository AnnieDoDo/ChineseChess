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
}

chessboard::~chessboard()
{

}
void chessboard::setBoard(){
    QPushButton *newbtnpos=qobject_cast<QPushButton *>(sender());
    int x = newbtnpos->x();
    int y = newbtnpos->y();
    cout<<x<<" "<<y<<endl;
}


