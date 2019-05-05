#ifndef message_H
#define message_H
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class message;
}

class message : public QWidget
{
    Q_OBJECT

public:
    explicit message(QWidget *parent = nullptr);
    ~message();
public slots:
    void showEndGameMessage();
private:
    Ui::message *ui;
    QPushButton *endgame;
    QVBoxLayout *endgamelayout;



};

#endif // message_H
