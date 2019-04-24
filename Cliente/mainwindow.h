#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include<consulta.h>
#include<menu.h>

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
    menu Menu;

};


#endif // MAINWINDOW_H
