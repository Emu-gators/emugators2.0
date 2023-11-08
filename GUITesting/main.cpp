#include "mainwindow.h"

#include <QApplication>
MainWindow* mwPointer;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    mwPointer = &w;
    w.setWindowState(Qt::WindowFullScreen);
    w.show();
    return a.exec();

}
