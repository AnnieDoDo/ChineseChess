#include "message.h"
#include "ui_message.h"
#include <iostream>
using namespace std;

message::message(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::message)
{
    ui->setupUi(this);
    setWindowTitle(QStringLiteral("END"));
    endgame=new QPushButton;
    endgame->setText(tr("This game is over"));

    endgamelayout = new QVBoxLayout(this);
    endgamelayout->addWidget(endgame);


}

message::~message()
{
    delete ui;
}

void message::showEndGameMessage(){
    QMessageBox::about(this,tr("Game is over"),tr("Winner"));
    cout<<"show message"<<endl;
}

