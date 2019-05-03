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
    return true;
}
void cannon::legalCapture(){

}
