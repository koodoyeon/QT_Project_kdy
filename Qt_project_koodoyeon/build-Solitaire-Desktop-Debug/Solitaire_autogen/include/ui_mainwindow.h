/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *BackGround;
    QLabel *main_object1;
    QLabel *main_logo;
    QPushButton *start;
    QPushButton *rull;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BackGround = new QLabel(centralwidget);
        BackGround->setObjectName(QString::fromUtf8("BackGround"));
        BackGround->setGeometry(QRect(0, -20, 641, 501));
        BackGround->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/green.jpeg")));
        BackGround->setScaledContents(true);
        main_object1 = new QLabel(centralwidget);
        main_object1->setObjectName(QString::fromUtf8("main_object1"));
        main_object1->setGeometry(QRect(-100, 110, 461, 441));
        main_object1->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/main_object3.png")));
        main_object1->setScaledContents(true);
        main_object1->setWordWrap(true);
        main_logo = new QLabel(centralwidget);
        main_logo->setObjectName(QString::fromUtf8("main_logo"));
        main_logo->setGeometry(QRect(120, 40, 391, 231));
        main_logo->setPixmap(QPixmap(QString::fromUtf8("../../CARD_PNG/mainlogo.png")));
        main_logo->setScaledContents(true);
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(450, 370, 161, 51));
        rull = new QPushButton(centralwidget);
        rull->setObjectName(QString::fromUtf8("rull"));
        rull->setGeometry(QRect(450, 300, 161, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BackGround->setText(QString());
        main_object1->setText(QString());
        main_logo->setText(QString());
        start->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        rull->setText(QCoreApplication::translate("MainWindow", "RUll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
