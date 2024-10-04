#ifndef RULL_H
#define RULL_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Rull; }
QT_END_NAMESPACE

class Rull : public QDialog {
    Q_OBJECT

public:
    explicit Rull(QWidget *parent = nullptr);
    ~Rull();

private slots:
    void on_back_clicked(); // back 버튼 클릭 시 호출되는 슬롯 함수

private:
    Ui::Rull *ui;
};

#endif // RULL_H
