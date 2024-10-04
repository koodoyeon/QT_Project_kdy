#include "Dack.h"
#include <algorithm>
#include <random>

Dack::Dack() {
    // 카드 초기화 (예: 52장의 카드 생성)
    for (int suit = 0; suit < 4; ++suit) { // 4개의 슈트 (Hearts, Diamonds, Clubs, Spades)
        for (int rank = 1; rank <= 13; ++rank) { // 1부터 13까지의 랭크
            cards.emplace_back(static_cast<Card::Suit>(suit), rank); // 카드 생성
        }
    }
}

void Dack::shuffle() {
    // 카드 셔플
    std::random_device rd; // 랜덤 디바이스
    std::mt19937 g(rd()); // Mersenne Twister 엔진
    std::shuffle(cards.begin(), cards.end(), g); // 카드 셔플
}

Card Dack::drawCard() {
    if (isEmpty()) {
        throw std::out_of_range("No cards left in the deck."); // 카드가 없을 때 예외 처리
    }
    Card drawnCard = cards.back(); // 마지막 카드 뽑기
    cards.pop_back(); // 카드 제거
    return drawnCard;
}

bool Dack::isEmpty() const {
    return cards.empty(); // 벡터가 비었는지 확인
}
