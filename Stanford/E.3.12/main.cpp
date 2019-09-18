#include <iostream>
#include "card.h"

using namespace std;

int main()
{
    cardT Ace;
    rankT Trank;
    suitT Tsuit;
    cout << Trank.sRank[12][0] << endl << Tsuit.sSuit[3][0] << endl;
    cout << Ace.cRank.sRank[9][0] << Ace.cSuit.sSuit[2][0];

    return 0;
}
