#include "chess.h"
#include "QString"
#include <iostream>
using namespace std;

chess::chess(QObject *parent) :
    QObject(parent)
{

}


bool chess::checkMate(chess *chessposition[9][10]){

    for(int j=3;j<6;j++)
    {
        int check=0;
        if(chessposition[j][0]!=nullptr)
        {
            if(chessposition[j][0]->isking==1)
            {
                for(int i=1;i<9;i++){
                    if(chessposition[j][i]!=nullptr)
                    {
                        check++;
                    }
                }
            }
        }
        if(chessposition[j][9]!=nullptr)
        {
            if(chessposition[j][9]->isking==1&&check==0)
            {
                return true;
            }
        }
    }

    int redking=0;
    int blackking=0;
    for(int i=3;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(chessposition[i][j]!=nullptr)
            {
                if(chessposition[i][j]->isking==1)
                {
                    redking++;
                }
            }
            if(chessposition[i][j+7]!=nullptr)
            {
                if(chessposition[i][j+7]->isking==1)
                {
                    blackking++;
                }
            }
        }
    }
    if(blackking==0)
    {
        cout<<"black lose"<<endl;
        return false;
    }
    if(redking==0)
    {
        cout<<"red lose"<<endl;
        return false;
    }
    return false;
}
