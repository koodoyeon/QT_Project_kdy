#ifndef DACK_H
#define DACK_H

#include <vector>
#include <QString>
#include "Card.h" // 카드 클래스를 포함합니다.

class Dack {
public:
    Dack(); // 생성자
    void shuffle(); // 덱을 셔플하는 함수
    Card drawCard(); // 카드를 한 장 뽑는 함수
    bool isEmpty() const; // 덱이 비었는지 확인하는 함수

private:
    std::vector<Card> cards; // 카드 벡터
};

#endif // DECK_H
