#include "datos.h"
#include "ui_datos.h"

Datos::Datos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Datos)
{
    ui->setupUi(this);
}

Datos::~Datos()
{
    delete ui;
}
