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
bool elephant::legalMove(chess **chessposition){

    return true;
}
void elephant::legalCapture(){

}