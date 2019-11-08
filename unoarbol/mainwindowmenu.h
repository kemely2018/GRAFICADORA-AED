#ifndef MAINWINDOWMENU_H
#define MAINWINDOWMENU_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "mainwindow.h"
#include "mainwindow2.h"
namespace Ui {
class MainWindowMenu;
}

class MainWindowMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowMenu(QWidget *parent = nullptr);
    ~MainWindowMenu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindowMenu *ui;
};

#endif // MAINWINDOWMENU_H
