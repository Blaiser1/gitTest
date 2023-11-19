#include "mainwindow.h"
#include <QApplication>
//!!!!!!!!!!!!!!!!!!!!!!!
//! //52555555555555555555555555555555555555555555555555555555555555555555555555555555
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
