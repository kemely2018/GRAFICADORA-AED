#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    setWindowTitle("RED BLACK TREE");
    scena = new QGraphicsScene(this);
    ui->graphicsView->setScene(scena);
    t.init(scena,ui->graphicsView);
    /*t.insert(2);
    t.insert(1);
    t.insert(4);
    t.insert(5);
    t.insert(9);
    t.insert(3);
    t.insert(6);
    t.insert(7);*/
    //t.mostrar();

    t.show();
}

MainWindow2::~MainWindow2()
{
    delete ui;
}



void MainWindow2::on_pushButton_insertar_clicked()
{
    QString recibir = ui->lineEdit_insertar->text();
    int n= recibir.toInt();
    t.insert(n);
    ui->lineEdit_insertar->clear();


}

void MainWindow2::on_pushButton_dibujar_clicked()
{
    //ui->graphicsView->close();
    scena->clear();
    t.show();
}

void MainWindow2::on_pushButton_clicked()
{
    QString eliminar = ui->lineEdit_delete->text();
    int n= eliminar.toInt();
    t.remove(n);
    ui->lineEdit_delete->clear();

}

void MainWindow2::on_pushButton_2_clicked()
{
    MainWindow2::close();
    MainWindowMenu *m = new MainWindowMenu;
    m->show();
}
