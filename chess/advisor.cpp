#include "chess/advisor.h"
#include "chessboard.h"
#include <cmath>
#include <iostream>
using namespace std;
advisor::advisor()
{
    fx = 0;
    fy = 0;
    sx = 0;
    sy = 0;
    rb = 0;
    isking = 1;
}

void advisor::legalMoveClickFirst(int x0,int y0){
    fx = x0;
    fy = y0;
}
void advisor::legalMoveClickSecond(int x0, int y0){
    sx = x0;
    sy = y0;

}

bool advisor::legalMove(chess *chessposition[9][10]){
    if((abs(sx-fx)!=1)||(abs(sy-fy)!=1)){
        return false;
    }
    if(sx<3||sx>5)
    {
        return false;
    }
    if(sy>2&&sy<7)
    {
        return false;
    }
    if((fx==sx)&&(fy==sy))
    {
        return false;
    }
    if(chessposition[sx][sy]!=nullptr)
    {
        if(chessposition[fx][fy]->rb==chessposition[sx][sy]->rb)
        {
            return false;
        }
    }
    if(chessposition[sx][sy]!=nullptr)
    {
        chessposition[sx][sy]=nullptr;
        cout<<"advisor legalcapture"<<endl;
        delete chessposition[sx][sy];
    }
    return true;
}


