#include "myzip.h"
#include <QApplication>
#include <qtextcodec.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec *codec = QTextCodec::codecForName("GB18030");
    QTextCodec::setCodecForLocale(codec);

    MyZip w;
    w.show();

    return a.exec();
}
