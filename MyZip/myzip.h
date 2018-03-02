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
    void slot_btnAdd();     //ѹ��
    void slot_btnDel();     //ɾ��
    void slot_btnZip();     //ɾ��
    void slot_btnAuto();    //ɾ��

private:
    Ui::MyZip *ui;
};

#endif // MYZIP_H
