#include "chess/elephant.h"
#include "chessboard.h"
#include <cmath>
#include <iostream>
using namespace std;

elephant::elephant(){
    fx = 0;
    fy = 0;
    sx = 0;
    sy = 0;
    rb = 0;
    isking = 0;

}

void elephant::legalMoveClickFirst(int x0,int y0){
    fx = x0;
    fy = y0;
}
void elephant::legalMoveClickSecond(int x0, int y0){
    sx = x0;
    sy = y0;

}
bool elephant::legalMove(chess *chessposition[9][10]){

    if((fx==sx)&&(fy==sy))
    {
        return false;
    }
    if(chessposition[fx][fy]->rb==0&&sy>4)
    {
        return false;
    }
    if(chessposition[fx][fy]->rb==1&&sy<5)
    {
        return false;
    }
    if(abs(sx-fx)!=2||abs(sy-fy)!=2)
    {
        return false;
    }
    int middlex=(fx+sx)/2;
    int middley=(fy+sy)/2;

    if(chessposition[middlex][middley]!=nullptr)
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
        cout<<"elephant legalcapture"<<endl;
        delete chessposition[sx][sy];
    }
    return true;
}

