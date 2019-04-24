/********************************************************************************
** Form generated from reading UI file 'depositar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITAR_H
#define UI_DEPOSITAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Depositar
{
public:

    void setupUi(QWidget *Depositar)
    {
        if (Depositar->objectName().isEmpty())
            Depositar->setObjectName(QString::fromUtf8("Depositar"));
        Depositar->resize(400, 300);

        retranslateUi(Depositar);

        QMetaObject::connectSlotsByName(Depositar);
    } // setupUi

    void retranslateUi(QWidget *Depositar)
    {
        Depositar->setWindowTitle(QApplication::translate("Depositar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Depositar: public Ui_Depositar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITAR_H
