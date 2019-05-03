#include "chess/cannon.h"
#include "chessboard.h"
#include <cmath>
#include <iostream>
using namespace std;

cannon::cannon(){
    fx = 0;
    fy = 0;
    sx = 0;
    sy = 0;
    rb = 0;
    isking = 0;

}

void cannon::legalMoveClickFirst(int x0,int y0){
    fx = x0;
    fy = y0;
}
void cannon::legalMoveClickSecond(int x0, int y0){
    sx = x0;
    sy = y0;

}
bool cannon::legalMove(chess *chessposition[9][10]){

    if((fx==sx)&&(fy==sy))
    {
        return false;
    }
    if((abs(sx-fx)!=0)&&(abs(sy-fy)!=0)){
        return false;
    }
    int max=0;
    int min=0;
    int change=0;
    int unchange=0;
    if((sx-fx>0)&&(sy-fy==0))
    {
        max=sx;
        min=fx;
        unchange=fy;
    }else if((sx-fx<0)&&(sy-fy==0)){
        max=fx;
        min=sx;
        unchange=fy;
    }
    if((sy-fy>0)&&(sx-fx==0))
    {
        max=sy;
        min=fy;
        unchange=fx;
        change=1;
    }else if((sy-fy<0)&&(sx-fx==0)){
        max=fy;
        min=sy;
        unchange=fx;
        change=1;
    }
    int check=0;
    min=min+1;
    for(int i=min;i<max;i++){
        switch (change){
        case 0:
            if(chessposition[i][unchange]!=nullptr)
            {
                check++;
            }
            break;
        case 1:
            if(chessposition[unchange][i]!=nullptr)
            {
                check++;
            }
            break;
       }
    }
    if(chessposition[sx][sy]!=nullptr)
    {
        if(chessposition[fx][fy]->rb==chessposition[sx][sy]->rb)
        {
            return false;
        }
    }
    if(chessposition[sx][sy]!=nullptr&&check==1)
    {
        chessposition[sx][sy]=nullptr;
        cout<<"cannon legalcapture"<<endl;
        delete chessposition[sx][sy];
        return true;
    }else if(chessposition[sx][sy]!=nullptr&&check!=1){
        return false;
    }

    if(check!=0)
    {
        return false;
    }
    return true;
}

