#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class Game; }
QT_END_NAMESPACE

class Game : public QDialog {
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:
    void onBackClicked(); // 메인 윈도우로 돌아가는 슬롯 함수

private:
    Ui::Game *ui;
    QGraphicsScene *scene;

    void setupDeck(); // 덱 설정 함수
};

#endif // GAME_H
