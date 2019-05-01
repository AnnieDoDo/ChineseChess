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
   return true;

}
void soldier::legalCapture(){

}
