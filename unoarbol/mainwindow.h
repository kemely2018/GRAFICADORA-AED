#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include"avltree.h"
#include "mainwindowmenu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_insertar_clicked();

    void on_pushButton_dibujar_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QGraphicsScene *scene;
    AvlTree<int> t;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
