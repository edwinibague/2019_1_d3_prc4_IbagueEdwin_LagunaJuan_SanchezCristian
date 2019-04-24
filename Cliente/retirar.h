#ifndef RETIRAR_H
#define RETIRAR_H

#include <QWidget>

namespace Ui {
class Retirar;
}

class Retirar : public QWidget
{
    Q_OBJECT

public:
    explicit Retirar(QWidget *parent = nullptr);
    ~Retirar();

private:
    Ui::Retirar *ui;
};

#endif // RETIRAR_H
