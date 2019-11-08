//#include "mainwindow.h"
#include "mainwindowmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle("fusion");
    /*MainWindow w;
    w.show();*/

    MainWindowMenu menu;
    menu.show();
    return a.exec();
}
