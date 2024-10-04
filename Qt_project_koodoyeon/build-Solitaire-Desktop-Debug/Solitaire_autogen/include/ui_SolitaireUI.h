/********************************************************************************
** Form generated from reading UI file 'SolitaireUI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLITAIREUI_H
#define UI_SOLITAIREUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_SolitaireUI
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SolitaireUI)
    {
        if (SolitaireUI->objectName().isEmpty())
            SolitaireUI->setObjectName(QString::fromUtf8("SolitaireUI"));
        SolitaireUI->resize(400, 300);
        buttonBox = new QDialogButtonBox(SolitaireUI);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SolitaireUI);
        QObject::connect(buttonBox, SIGNAL(accepted()), SolitaireUI, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SolitaireUI, SLOT(reject()));

        QMetaObject::connectSlotsByName(SolitaireUI);
    } // setupUi

    void retranslateUi(QDialog *SolitaireUI)
    {
        SolitaireUI->setWindowTitle(QCoreApplication::translate("SolitaireUI", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SolitaireUI: public Ui_SolitaireUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLITAIREUI_H
