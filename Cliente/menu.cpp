#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_Consulta_clicked()
{
    consulta.show();
    close();
}

void menu::on_Datos_clicked()
{
    datos.show();
    close();
}

void menu::on_Depositar_clicked()
{
    depositar.show();
    close();
}

void menu::on_Retirar_clicked()
{
    retirar.show();
    close();
}

void menu::on_menu_destroyed()
{

}
