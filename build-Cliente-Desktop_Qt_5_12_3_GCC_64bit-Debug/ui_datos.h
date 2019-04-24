/********************************************************************************
** Form generated from reading UI file 'datos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATOS_H
#define UI_DATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Datos
{
public:

    void setupUi(QWidget *Datos)
    {
        if (Datos->objectName().isEmpty())
            Datos->setObjectName(QString::fromUtf8("Datos"));
        Datos->resize(400, 300);

        retranslateUi(Datos);

        QMetaObject::connectSlotsByName(Datos);
    } // setupUi

    void retranslateUi(QWidget *Datos)
    {
        Datos->setWindowTitle(QApplication::translate("Datos", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Datos: public Ui_Datos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATOS_H
