#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include<consulta.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Validar_clicked();

private:
    Ui::MainWindow *ui;

    Consulta consulta;
};


#endif // MAINWINDOW_H
