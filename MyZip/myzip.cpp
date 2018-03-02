#include "myzip.h"
#include "ui_myzip.h"

#include <QDebug>
#include <QFileDialog>
#include <QStandardPaths>
#include <QMessageBox>

#include "JlCompress.h"

MyZip::MyZip(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyZip)
{
    ui->setupUi(this);

    //setWindowTitle(tr("压缩工具"));

    connect(ui->tBtn, SIGNAL(clicked()), this, SLOT(slot_tBtn_clicked()));
    connect(ui->btn_add, SIGNAL(clicked()), this, SLOT(slot_btnAdd()));
    connect(ui->btn_del, SIGNAL(clicked()), this, SLOT(slot_btnDel()));
    connect(ui->btn_zip, SIGNAL(clicked()), this, SLOT(slot_btnZip()));
    connect(ui->btn_auto, SIGNAL(clicked()), this, SLOT(slot_btnAuto()));
}

MyZip::~MyZip()
{
    delete ui;
}

void MyZip::slot_tBtn_clicked()
{
    QString path = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString fileName = QFileDialog::getOpenFileName(this,tr("选择压缩文件"), path,tr("ALL FILE(*.*)"));
}

void MyZip::slot_btnAdd()
{
    QString path = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QStringList fileList = QFileDialog::getOpenFileNames(this, tr("选择压缩文件"), path, tr("ALL FILE(*.*)"));

    QString dstName = ui->comboBox->currentText();
    if (dstName.isEmpty()) {
        QMessageBox::warning(this,tr("警告"),tr("压缩文件名为空！"));
        return;
    }
    QString zipName = path + "/" + dstName;
    bool b = JlCompress::compressFiles(zipName, fileList);
    qDebug() << "path:" << path << b;
}

void MyZip::slot_btnDel()
{
}

void MyZip::slot_btnZip()
{
}

void MyZip::slot_btnAuto()
{
}
