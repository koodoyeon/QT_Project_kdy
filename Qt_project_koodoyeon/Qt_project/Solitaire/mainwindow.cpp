#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , rullWindow(nullptr)
    , gameWindow(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
    delete rullWindow;
    delete gameWindow;
}

void MainWindow::on_start_clicked() {
    gameWindow = new Game(this);
    gameWindow->show();
    this->hide(); // 메인 윈도우 숨기기
}

void MainWindow::on_rull_clicked() {
    rullWindow = new Rull(this);
    rullWindow->show();
    this->hide(); // 메인 윈도우 숨기기
}
