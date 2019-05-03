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
    return true;
}
void horse::legalCapture(){

}
