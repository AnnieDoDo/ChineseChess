#include "chess/horse.h"
#include "chessboard.h"
#include <cmath>
#include <iostream>
using namespace std;

horse::horse(){
    fx = 0;
    fy = 0;
    sx = 0;
    sy = 0;
    rb = 0;
    isking = 0;

}

void horse::legalMoveClickFirst(int x0,int y0){
    fx = x0;
    fy = y0;
}
void horse::legalMoveClickSecond(int x0, int y0){
    sx = x0;
    sy = y0;

}
bool horse::legalMove(chess *chessposition[9][10]){

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
    if((abs(fx-sx)!=2||abs(fy-sy)!=1)&&(abs(fx-sx)!=1||abs(fy-sy)!=2))
    {
        return false;
    }

    if(abs(fx-sx)==2&&abs(fy-sy)==1)
    {
        int middlex=(fx+sx)/2;
        if(chessposition[middlex][fy]!=nullptr){
            return false;
        }
    }
    if(abs(fx-sx)==1&&abs(fy-sy)==2)
    {
        int middley=(fy+sy)/2;
        if(chessposition[fx][middley]!=nullptr){
            return false;
        }
    }
    if(chessposition[sx][sy]!=nullptr)
    {
        delete chessposition[sx][sy];
        chessposition[sx][sy]=nullptr;
        cout<<"horse legalcapture"<<endl;
    }

    return true;
}

