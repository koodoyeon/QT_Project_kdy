/********************************************************************************
** Form generated from reading UI file 'Rull.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULL_H
#define UI_RULL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Rull
{
public:
    QLabel *BackGround;
    QPushButton *back;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Rull)
    {
        if (Rull->objectName().isEmpty())
            Rull->setObjectName(QString::fromUtf8("Rull"));
        Rull->resize(640, 480);
        BackGround = new QLabel(Rull);
        BackGround->setObjectName(QString::fromUtf8("BackGround"));
        BackGround->setGeometry(QRect(-10, 0, 651, 491));
        BackGround->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/green.jpeg")));
        BackGround->setScaledContents(true);
        back = new QPushButton(Rull);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(530, 430, 89, 25));
        label = new QLabel(Rull);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 120, 451, 91));
        label_2 = new QLabel(Rull);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 190, 641, 161));

        retranslateUi(Rull);

        QMetaObject::connectSlotsByName(Rull);
    } // setupUi

    void retranslateUi(QDialog *Rull)
    {
        Rull->setWindowTitle(QCoreApplication::translate("Rull", "Dialog", nullptr));
        BackGround->setText(QString());
        back->setText(QCoreApplication::translate("Rull", "BACk", nullptr));
        label->setText(QCoreApplication::translate("Rull", "\353\252\250\353\223\240 \354\271\264\353\223\234\353\245\274 \354\247\235\355\214\250\353\263\204\353\241\234 \354\227\220\354\235\264\354\212\244\353\266\200\355\204\260 \355\202\271\352\271\214\354\247\200 \354\230\244\353\246\204\354\260\250\354\210\234\354\234\274\353\241\234 \354\214\223\353\212\224 \352\262\203\354\235\264 \353\252\251\355\221\234.", nullptr));
        label_2->setText(QCoreApplication::translate("Rull", "\352\260\201 \352\270\260\354\264\210 \354\271\264\353\223\234 \353\215\224\353\257\270\354\227\220 \354\271\264\353\223\234\353\245\274 \354\247\235\355\214\250\353\263\204\353\241\234 \354\227\220\354\235\264\354\212\244\353\266\200\355\204\260 \355\202\271\352\271\214\354\247\200 \354\230\244\353\246\204\354\260\250\354\210\234\354\234\274\353\241\234 \354\214\223\353\212\224\353\213\244.\n"
"\352\270\260\354\264\210 \354\271\264\353\223\234 \353\215\224\353\257\270\354\227\220 \354\236\210\353\212\224 \354\271\264\353\223\234\353\212\224 \353\213\244\354\213\234 \354\244\204 \354\212\244\355\203\235\354\234\274\353\241\234 \354\230\256\352\270\270 \354\210\230 \354\236\210\353\213\244. \n"
"\353\213\250, \355\225\234 \353\262\210\354\227\220 1\354\236\245\353\247\214 \354\230\256\352\270\270 \354\210\230 \354\236\210\353\213\244.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rull: public Ui_Rull {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULL_H
