#include "mainwindow.h"
#include <QApplication>
#include <QtCore/QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.setWindowFlags(Qt::FramelessWindowHint);
//    w.setWindowFlags(Qt::CustomizeWindowHint);
    w.show();
    
    QTranslator translator(&a);//Loader translator
    translator.load(QString("./language/KaymaxRecorderUI_en_US"));//Language pack files generated by the linguist tool
    a.installTranslator(&translator);

    return a.exec();
}
