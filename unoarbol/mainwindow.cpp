#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("AVL TREE");
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    t.init(scene,ui->graphicsView);
    t.insert(4);
    t.insert(8);
    t.insert(10);
    t.insert(1);
    t.insert(20);
    t.insert(15);
    t.insert(13);
    t.insert(3);
    t.insert(11);
    t.printTree();

    t.show();



}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_pushButton_insertar_clicked()
{
    QString recibir = ui->lineEdit_insertar->text();
    int n= recibir.toInt();
    t.insert(n);
    ui->lineEdit_insertar->clear();


}

void MainWindow::on_pushButton_dibujar_clicked()
{
    //ui->graphicsView->close();
    scene->clear();
    t.show();
}

void MainWindow::on_pushButton_clicked()
{
    QString eliminar = ui->lineEdit_delete->text();
    int n= eliminar.toInt();
    t.remove(n);
    ui->lineEdit_delete->clear();

}

void MainWindow::on_pushButton_2_clicked()
{
    MainWindow::close();
    MainWindowMenu *m = new MainWindowMenu;
    m->show();
}
