/********************************************************************************
** Form generated from reading UI file 'retirar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETIRAR_H
#define UI_RETIRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Retirar
{
public:

    void setupUi(QWidget *Retirar)
    {
        if (Retirar->objectName().isEmpty())
            Retirar->setObjectName(QString::fromUtf8("Retirar"));
        Retirar->resize(400, 300);

        retranslateUi(Retirar);

        QMetaObject::connectSlotsByName(Retirar);
    } // setupUi

    void retranslateUi(QWidget *Retirar)
    {
        Retirar->setWindowTitle(QApplication::translate("Retirar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Retirar: public Ui_Retirar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETIRAR_H
