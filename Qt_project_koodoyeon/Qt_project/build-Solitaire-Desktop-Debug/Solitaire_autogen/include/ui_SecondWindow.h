/********************************************************************************
** Form generated from reading UI file 'SecondWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QLabel *BackGround;
    QLabel *object1;
    QLabel *object_logo2;
    QLabel *object_logo1;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(640, 480);
        BackGround = new QLabel(SecondWindow);
        BackGround->setObjectName(QString::fromUtf8("BackGround"));
        BackGround->setEnabled(true);
        BackGround->setGeometry(QRect(0, 0, 641, 491));
        BackGround->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/green.jpeg")));
        BackGround->setScaledContents(true);
        object1 = new QLabel(SecondWindow);
        object1->setObjectName(QString::fromUtf8("object1"));
        object1->setGeometry(QRect(240, 40, 531, 551));
        object1->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/object_img.png")));
        object1->setScaledContents(true);
        object_logo2 = new QLabel(SecondWindow);
        object_logo2->setObjectName(QString::fromUtf8("object_logo2"));
        object_logo2->setGeometry(QRect(10, 410, 71, 61));
        object_logo2->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/main_object2.png")));
        object_logo2->setScaledContents(true);
        object_logo1 = new QLabel(SecondWindow);
        object_logo1->setObjectName(QString::fromUtf8("object_logo1"));
        object_logo1->setGeometry(QRect(10, 420, 71, 51));
        object_logo1->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/mainlogo.png")));
        object_logo1->setScaledContents(true);

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        BackGround->setText(QString());
        object1->setText(QString());
        object_logo2->setText(QString());
        object_logo1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
