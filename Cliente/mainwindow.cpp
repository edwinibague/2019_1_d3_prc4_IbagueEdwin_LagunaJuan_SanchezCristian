#include <sys/mman.h> //shm_open, mmap
#include <unistd.h> //ftruncate
#include <fcntl.h> //defines the shm_open, mmap
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <pthread.h>


#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_Validar_clicked()
{



    QString Documento = ui->CC->text();
    QString Pass = ui->Password->text();




    consulta.show();

}

