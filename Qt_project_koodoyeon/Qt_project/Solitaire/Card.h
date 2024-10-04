#ifndef CARD_H
#define CARD_H

#include <QString>

class Card {
public:
    enum Suit {
        Hearts,
        Diamonds,
        Clubs,
        Spades
    };

    Card(Suit suit, int rank);
    QString imagePath() const;

private:
    Suit suit;
    int rank;
};

#endif // CARD_H
