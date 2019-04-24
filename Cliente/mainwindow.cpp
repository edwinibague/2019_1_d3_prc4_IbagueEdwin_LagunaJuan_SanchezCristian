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
	QString Documento = Ui->CC->text();
	QString Documento = Ui->Password->text();

}

