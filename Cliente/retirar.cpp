#include "retirar.h"
#include "ui_retirar.h"

Retirar::Retirar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Retirar)
{
    ui->setupUi(this);
}

Retirar::~Retirar()
{
    delete ui;
}
