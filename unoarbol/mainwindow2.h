#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "rbtree.h"
#include "mainwindowmenu.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();
private slots:
    void on_pushButton_insertar_clicked();

    void on_pushButton_dibujar_clicked();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    QGraphicsScene *scena;
    RBTree<int> t;
    Ui::MainWindow2 *ui;
};

#endif // MAINWINDOW2_H
