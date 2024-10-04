#include "Card.h"

Card::Card(Suit suit, int rank) : suit(suit), rank(rank) {}

QString Card::imagePath() const {
    QString suitStr;
    switch (suit) {
        case Hearts:   suitStr = "heart"; break;
        case Diamonds: suitStr = "diamond"; break;
        case Clubs:    suitStr = "club"; break;
        case Spades:   suitStr = "spade"; break;
    }
    return QString("/home/dy/Desktop/CARD_PNG/%1_%2.png").arg(suitStr).arg(rank);
}
