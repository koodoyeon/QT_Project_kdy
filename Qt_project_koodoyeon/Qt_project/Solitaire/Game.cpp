#include "Game.h"
#include "ui_Game.h"
#include "Card.h"
#include "mainwindow.h"

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game),
    scene(new QGraphicsScene(this))
{
    ui->setupUi(this);

    setupDeck(); // 덱 설정

    connect(ui->back, &QPushButton::clicked, this, &Game::onBackClicked);
}

Game::~Game() {
    delete ui;
}

void Game::onBackClicked() {
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

void Game::setupDeck() {
    for (int i = 1; i <= 32; ++i) {
        QString deckName = QString("deck%1").arg(i);
        QWidget *deckWidget = findChild<QWidget*>(deckName); // UI에서 deck1~deck32 위젯을 찾음

        if (deckWidget) {
            // 카드 이미지 추가
            Card::Suit suit = static_cast<Card::Suit>((i - 1) / 8); // 예시로 카드를 나눔
            int rank = ((i - 1) % 13) + 1;
            Card card(suit, rank);

            QPixmap cardPixmap(card.imagePath());
            QPixmap scaledCardPixmap = cardPixmap.scaled(deckWidget->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation); // 위젯 크기에 맞게 스케일링

            // QLabel로 카드 표시
            QLabel *cardLabel = new QLabel(deckWidget);
            cardLabel->setPixmap(scaledCardPixmap);
            cardLabel->setGeometry(0, 0, deckWidget->width(), deckWidget->height()); // QLabel 크기 조정
            cardLabel->setScaledContents(true); // QLabel 크기에 맞춰 이미지 스케일
            cardLabel->show(); // QLabel 표시
        }
    }
}
