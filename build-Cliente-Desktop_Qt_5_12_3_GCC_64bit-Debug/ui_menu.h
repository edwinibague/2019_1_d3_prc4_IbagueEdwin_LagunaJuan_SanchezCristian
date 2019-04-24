/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *Consulta;
    QPushButton *Datos;
    QPushButton *Depositar;
    QPushButton *Retirar;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(400, 300);
        Consulta = new QPushButton(menu);
        Consulta->setObjectName(QString::fromUtf8("Consulta"));
        Consulta->setGeometry(QRect(140, 70, 80, 25));
        Datos = new QPushButton(menu);
        Datos->setObjectName(QString::fromUtf8("Datos"));
        Datos->setGeometry(QRect(140, 110, 80, 25));
        Depositar = new QPushButton(menu);
        Depositar->setObjectName(QString::fromUtf8("Depositar"));
        Depositar->setGeometry(QRect(140, 160, 80, 25));
        Retirar = new QPushButton(menu);
        Retirar->setObjectName(QString::fromUtf8("Retirar"));
        Retirar->setGeometry(QRect(140, 200, 80, 25));

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Form", nullptr));
        Consulta->setText(QApplication::translate("menu", "Consulta", nullptr));
        Datos->setText(QApplication::translate("menu", "Modificar Datos", nullptr));
        Depositar->setText(QApplication::translate("menu", "Depositar", nullptr));
        Retirar->setText(QApplication::translate("menu", "Retirar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
