#include "Rull.h"
#include "ui_Rull.h"
#include "mainwindow.h"

Rull::Rull(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rull)
{
    ui->setupUi(this);
}

Rull::~Rull() {
    delete ui;
}

void Rull::on_back_clicked() {
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}
