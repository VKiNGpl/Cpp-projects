#include <iostream>
#include <conio.h>
#include "game.h"

using namespace std;

int main()
{
    StartGry();
    for (;;)
    {
        RysujPlansze();
        if (g_StanGry == GS_MOVE)
        {
            unsigned uNumerPola;
            std::cin >> uNumerPola;
            if (uNumerPola == '\0')
            {
                cin.clear();
                cin.ignore();
            }
            Ruch(uNumerPola);
        }
        else if (g_StanGry == GS_WON || g_StanGry == GS_DRAW)
            break;
    }

    return 0;
}
