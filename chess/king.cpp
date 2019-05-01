#include "chess/king.h"
#include "chessboard.h"

#include <cmath>
#include <iostream>
using namespace std;

king::king(){
    fx = 0;
    fy = 0;
    sx = 0;
    sy = 0;
    rb = 0;
    isking = 1;

}

void king::legalMoveClickFirst(int x0,int y0){
    fx = x0;
    fy = y0;
}
void king::legalMoveClickSecond(int x0, int y0){
    sx = x0;
    sy = y0;

}
bool king::legalMove(){
    int plus=0;
    if(abs(sx-fx)>1){
        return false;
    }else{
        plus=plus+abs(sx-fx);
    }
    if(abs(sy-fy)>1){
        return false;
    }{
        plus=plus+abs(sy-fy);
    }
    if(plus>1){
        return false;
    }

    return true;
}
void king::legalCapture(){

}
