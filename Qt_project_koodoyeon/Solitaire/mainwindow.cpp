#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "SolitaireUI.h"  // SolitaireUI 포함
#include "Rull.h"
#include "ui_Rull.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->start, &QPushButton::clicked, this, &MainWindow::on_start_clicked);
    connect(ui->rull, &QPushButton::clicked, this, &MainWindow::on_rull_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete solitaireWindow; // 메모리 해제
}

void MainWindow::on_start_clicked()
{
    if (solitaireWindow == nullptr) {
        solitaireWindow = new SolitaireUI(this);
    }
    solitaireWindow->show();  // QWidget에서는 show() 사용
}

void MainWindow::on_rull_clicked()
{
    Rull *rullWindow = new Rull(this);
    rullWindow->setModal(true);
    rullWindow->exec();
    delete rullWindow;
}
