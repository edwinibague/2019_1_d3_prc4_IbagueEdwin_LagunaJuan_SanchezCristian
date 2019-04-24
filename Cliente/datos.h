#ifndef DATOS_H
#define DATOS_H

#include <QWidget>

namespace Ui {
class Datos;
}

class Datos : public QWidget
{
    Q_OBJECT

public:
    explicit Datos(QWidget *parent = nullptr);
    ~Datos();

private:
    Ui::Datos *ui;
};

#endif // DATOS_H
