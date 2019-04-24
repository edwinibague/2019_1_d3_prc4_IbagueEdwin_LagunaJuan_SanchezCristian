/********************************************************************************
** Form generated from reading UI file 'consulta.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTA_H
#define UI_CONSULTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consulta
{
public:

    void setupUi(QWidget *Consulta)
    {
        if (Consulta->objectName().isEmpty())
            Consulta->setObjectName(QString::fromUtf8("Consulta"));
        Consulta->resize(400, 300);

        retranslateUi(Consulta);

        QMetaObject::connectSlotsByName(Consulta);
    } // setupUi

    void retranslateUi(QWidget *Consulta)
    {
        Consulta->setWindowTitle(QApplication::translate("Consulta", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consulta: public Ui_Consulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTA_H
