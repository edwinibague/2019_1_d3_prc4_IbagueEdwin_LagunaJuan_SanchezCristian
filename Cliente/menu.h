#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include<consulta.h>
#include<datos.h>
#include<depositar.h>
#include<retirar.h>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_Consulta_clicked();

    void on_Datos_clicked();

    void on_Depositar_clicked();

    void on_Retirar_clicked();

    void on_menu_destroyed();

private:
    Ui::menu *ui;

    Retirar retirar;
    Depositar depositar;
    Datos datos;
    Consulta consulta;
};

#endif // MENU_H
