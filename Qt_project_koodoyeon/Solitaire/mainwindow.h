#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "SolitaireUI.h" // 필요한 헤더 파일 포함

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_start_clicked();  // Start 버튼 클릭 시 슬롯
    void on_rull_clicked();   // Rull 버튼 클릭 시 슬롯

private:
    Ui::MainWindow *ui;
    SolitaireUI *solitaireWindow = nullptr; // nullptr로 초기화
};

#endif // MAINWINDOW_H
