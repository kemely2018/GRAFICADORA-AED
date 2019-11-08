#include "mainwindowmenu.h"
#include "ui_mainwindowmenu.h"

MainWindowMenu::MainWindowMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowMenu)
{
    ui->setupUi(this);
    setWindowTitle("TREE GRAPHICS");

}

MainWindowMenu::~MainWindowMenu()
{
    delete ui;
}

void MainWindowMenu::on_pushButton_clicked()
{
    MainWindowMenu::close();
    MainWindow *w = new MainWindow;
    w ->show();
}

void MainWindowMenu::on_pushButton_2_clicked()
{
    MainWindowMenu::close();
    MainWindow2 *s = new MainWindow2;
    s ->show();
}
