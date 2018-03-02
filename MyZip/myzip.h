#ifndef MYZIP_H
#define MYZIP_H

#include <QWidget>

namespace Ui {
class MyZip;
}

class MyZip : public QWidget
{
    Q_OBJECT

public:
    explicit MyZip(QWidget *parent = 0);
    ~MyZip();

private slots:
    void slot_tBtn_clicked();
    void slot_btnAdd();     //Ñ¹Ëõ
    void slot_btnDel();     //É¾³ý
    void slot_btnZip();     //É¾³ý
    void slot_btnAuto();    //É¾³ý

private:
    Ui::MyZip *ui;
};

#endif // MYZIP_H
