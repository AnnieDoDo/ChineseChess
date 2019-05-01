#include "chess/rook.h"
#include "chessboard.h"
#include <cmath>
#include <iostream>
using namespace std;

rook::rook(){
    fx = 0;
    fy = 0;
    sx = 0;
    sy = 0;
    rb = 0;
    isking = 0;

}

void rook::legalMoveClickFirst(int x0,int y0){
    fx = x0;
    fy = y0;
}
void rook::legalMoveClickSecond(int x0, int y0){
    sx = x0;
    sy = y0;

}
bool rook::legalMove(chess *chessposition[9][10]){

    return true;
}
void rook::legalCapture(){

}
