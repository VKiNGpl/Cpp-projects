#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <string>

struct rankT
{
    const std::string sRank[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Ace", "Jack", "Queen", "King"};
};

struct suitT
{
    const std::string sSuit[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
};

struct cardT
{
    rankT cRank;
    suitT cSuit;
};

cardT NewCard(rankT, suitT);

#endif // CARD_H_INCLUDED
