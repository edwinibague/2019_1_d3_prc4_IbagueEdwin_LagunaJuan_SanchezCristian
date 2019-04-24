#include "depositar.h"
#include "ui_depositar.h"

Depositar::Depositar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Depositar)
{
    ui->setupUi(this);
}

Depositar::~Depositar()
{
    delete ui;
}
