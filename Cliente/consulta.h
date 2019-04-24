#ifndef CONSULTA_H
#define CONSULTA_H

#include <QWidget>

namespace Ui {
class Consulta;
}

class Consulta : public QWidget
{
    Q_OBJECT

public:
    explicit Consulta(QWidget *parent = nullptr);
    ~Consulta();

private slots:

private:
    Ui::Consulta *ui;
};

#endif // CONSULTA_H
