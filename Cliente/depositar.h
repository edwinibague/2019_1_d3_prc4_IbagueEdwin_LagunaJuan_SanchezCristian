#ifndef DEPOSITAR_H
#define DEPOSITAR_H

#include <QWidget>

namespace Ui {
class Depositar;
}

class Depositar : public QWidget
{
    Q_OBJECT

public:
    explicit Depositar(QWidget *parent = nullptr);
    ~Depositar();

private:
    Ui::Depositar *ui;
};

#endif // DEPOSITAR_H
