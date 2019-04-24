#include "consulta.h"
#include "ui_consulta.h"

Consulta::Consulta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Consulta)
{
    ui->setupUi(this);
}

Consulta::~Consulta()
{
    delete ui;
}

