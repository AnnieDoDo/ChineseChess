#include "widget.h"
#include "ui_widget.h"
#include "QString"
#include "chessboard.h"
#include "chess.h"
#include <QIcon>
#include <iostream>

using namespace std;

widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    setWindowTitle(tr("Chinese Chess"));
    ui->setupUi(this);
    QPixmap p("chessboard.png");
    label1 = new QLabel(this);
    label1->setGeometry(300,0,900,900);
    label1->setPixmap(p.scaled(900,900,Qt::KeepAspectRatio));
    transparent_pic=QPixmap("red_king.png");
    transparent_pic.fill(Qt::transparent);

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<10;j++)
        {
            btn[i][j] = new QPushButton(this);
            btn[i][j]->setGeometry(335+i*88,40+j*86,50,50);
            btn[i][j]->setFlat(true);
            QObject::connect(btn[i][j],SIGNAL(clicked()),&cb,SLOT(setBoard()));

            ButtonIcon[i][j]=QIcon(transparent_pic);
            btn[i][j]->setIcon(ButtonIcon[i][j]);
            btn[i][j]->setIconSize(btn[i][j]->rect().size());
            if(cb.board[i][j]!=nullptr){
                widget::showChessPic(i,j);
            }
            QObject::connect(&cb,SIGNAL(renewboard()),this,SLOT(checkChessPic()));


        }
    }
    widget::checkChessPic();

}

void widget::checkChessPic(){


    for(int i=0;i<9;i++)
    {
        for(int j=0;j<10;j++)
        {
            ButtonIcon[i][j]=QIcon(transparent_pic);
            btn[i][j]->setIcon(ButtonIcon[i][j]);
            btn[i][j]->setIconSize(btn[i][j]->rect().size());
            if(cb.board[i][j]!=nullptr){
                widget::showChessPic(i,j);
            }
        }
    }


}

void widget::showChessPic(int i,int j)
{

    ButtonIcon[i][j] = QIcon(cb.board[i][j]->chesspic);
    btn[i][j]->setIcon(ButtonIcon[i][j]);
    btn[i][j]->setIconSize(btn[i][j]->rect().size());

}

widget::~widget()
{
    delete ui;
}
