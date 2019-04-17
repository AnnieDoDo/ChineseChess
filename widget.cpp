#include "widget.h"
#include "ui_widget.h"
#include "QString"
#include "chessboard.h"

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
    chessboard cb;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<10;j++)
        {
            btn[i][j] = new QPushButton(this);
            btn[i][j]->setGeometry(335+i*88,40+j*86,50,50);
            QObject::connect(btn[i][j],SIGNAL(clicked()),&cb,SLOT(cb.setBoard));
        }
    }
}

widget::~widget()
{
    delete ui;
}
