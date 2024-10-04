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

QT_BEGIN_NAMESPACE

class Ui_Rull
{
public:
    QLabel *BackGround;

    void setupUi(QDialog *Rull)
    {
        if (Rull->objectName().isEmpty())
            Rull->setObjectName(QString::fromUtf8("Rull"));
        Rull->resize(640, 480);
        BackGround = new QLabel(Rull);
        BackGround->setObjectName(QString::fromUtf8("BackGround"));
        BackGround->setGeometry(QRect(0, 0, 651, 491));
        BackGround->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/green.jpeg")));
        BackGround->setScaledContents(true);

        retranslateUi(Rull);

        QMetaObject::connectSlotsByName(Rull);
    } // setupUi

    void retranslateUi(QDialog *Rull)
    {
        Rull->setWindowTitle(QCoreApplication::translate("Rull", "Dialog", nullptr));
        BackGround->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Rull: public Ui_Rull {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULL_H
