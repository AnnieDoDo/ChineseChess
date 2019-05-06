#include "chess/soldier.h"
#include "chessboard.h"
#include <cmath>
#include <iostream>
using namespace std;

soldier::soldier(){
    fx = 0;
    fy = 0;
    sx = 0;
    sy = 0;
    rb = 0;
    isking = 0;

}

void soldier::legalMoveClickFirst(int x0,int y0){
    fx = x0;
    fy = y0;
}
void soldier::legalMoveClickSecond(int x0, int y0){
    sx = x0;
    sy = y0;

}
bool soldier::legalMove(chess *chessposition[9][10]){
    if((fx==sx)&&(fy==sy))
    {
        return false;
    }
    if(chessposition[fx][fy]->rb==0)
   {
       int plus =0;
       if(sy-fy<0)
       {
           return false;
       }
       if(sy>4)
       {
           if(abs(sx-fx)>1){
               return false;
           }else{
               plus=plus+abs(sx-fx);
           }
           if(sy-fy>1){
               return false;
           }else {
               plus=plus+sy-fy;
           }
           if(plus>1){
               return false;
           }
       }else {
            if(sx-fx!=0)
            {
                return false;
            }
       }
    }else
   {
       int plus =0;
       if(sy-fy>0)
       {
           return false;
       }
       if(sy<=4)
       {
           if(abs(sx-fx)>1){
               return false;
           }else{
               plus=plus+abs(sx-fx);
           }
           if(abs(sy-fy)>1){
               return false;
           }else {
               plus=plus+abs(sy-fy);
           }
           if(plus>1){
               return false;
           }
       }else {
            if(sx-fx!=0)
            {
                return false;
            }
       }
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
        delete chessposition[sx][sy];
        chessposition[sx][sy]=nullptr;
        cout<<"soldier legalcapture"<<endl;
    }
    return true;

}

