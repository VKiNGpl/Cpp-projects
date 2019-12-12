#include <iostream>
#include <ctime>
#include <cstdlib>
#include "game.h"

FIELD g_aPlansza[3][3] = {{FLD_EMPTY, FLD_EMPTY, FLD_EMPTY},
                          {FLD_EMPTY, FLD_EMPTY, FLD_EMPTY},
                          {FLD_EMPTY, FLD_EMPTY, FLD_EMPTY}};
GAMESTATE g_StanGry = GS_NOTSTARTED;
SIGN g_AktualnyGracz;

bool StartGry()
{
    if (g_StanGry != GS_NOTSTARTED)
        return false;

// losujemy gracza, ktory bedzie zaczynal
    srand((int)time(NULL));
    g_AktualnyGracz = (rand() % 2 == 0 ? SGN_CIRCLE : SGN_CROSS);

// ustawiamy stan gry na ruch graczy
    g_StanGry = GS_MOVE;

    return 0;
}

bool Ruch(unsigned uNumerPola)
{
    if (g_StanGry != GS_MOVE)
        return false;
    if (!(uNumerPola >= 1 && uNumerPola <= 9))
        return false;

    unsigned uY = (uNumerPola - 1) / 3;
    unsigned uX = (uNumerPola - 1) % 3;

    if (g_aPlansza[uY][uX] == FLD_EMPTY);
    // wstaw znak aktualnego gracza w podanym polu
    else
        return false;

    g_aPlansza[uY][uX] = (FIELD)g_AktualnyGracz;

    const int LINIE[][3][2] = {{{0,0}, {0,1}, {0,2}},    // gorna pozioma
                               {{1,0}, {1,1}, {1,2}},    // srodkowa pozioma
                               {{2,0}, {2,1}, {2,2}},    // dolna pozioma
                               {{0,0}, {1,0}, {2,0}},    // lewa pionowa
                               {{0,1}, {1,1}, {2,1}},    // srodkowa pionowa
                               {{0,2}, {1,2}, {2,2}},    // prawa pionowa
                               {{0,2}, {1,1}, {2,0}},    // prawa backslashowa
                               {{0,0}, {1,1}, {2,2}}};   // prawa slashowa

    FIELD Pole, ZgodnePole;
    unsigned uLiczbaZgodnychPol, uLiczbaZapelnionychPol;
    for (int i = 0; i < 8; i++)
    {
        // i przebiega po kolejnych mozliwych liniach (jest ich osiem)

        // zerujemy zmienne pomocnicze
        Pole = ZgodnePole = FLD_EMPTY;   // obie zmienne == FLD_EMPTY
        uLiczbaZgodnychPol = 0;
        uLiczbaZapelnionychPol = 0;

        for (int j = 0; j < 3; j++)
        {
            // j przebiega po trzech polach w kazdej linii

            // pobieramy rzeczone pole
            // to zdecydowanie najbardziej pogmatwane wyrazenie
            Pole =  g_aPlansza[LINIE[i][j][0]][LINIE[i][j][1]];

            // jesli sprawdzone pole rozne od tego, ktore ma sie zgadzac...
            if (Pole != ZgodnePole)
            {
                // to zmieniamy zgadzane pole na to aktualne
                ZgodnePole = Pole;
                uLiczbaZgodnychPol = 1;
            }
            else
                // jesli natomiast oba pola sie zgadzaja, no to
                // inkrementujemy licznik takich zgodnych pol
                uLiczbaZgodnychPol++;
        }
        // teraz sprawdzamy, czy udalo nam sie zgodzic linie
        if (uLiczbaZgodnychPol == 3 && ZgodnePole != FLD_EMPTY)
        {
            // jezeli tak, no to ustawiamy stan gry na wygrana
            g_StanGry = GS_WON;

            // przerywamy petle i funkcje
            return true;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                if (g_aPlansza[i][j] != FLD_EMPTY)
                    uLiczbaZapelnionychPol++;
        }

        if (uLiczbaZapelnionychPol == 3*3)
        {
            g_StanGry = GS_DRAW;
            return true;
        }
    }

    g_AktualnyGracz = (g_AktualnyGracz == SGN_CIRCLE ? SGN_CROSS : SGN_CIRCLE);

    return true;
}

bool RysujPlansze()
{
    if (g_StanGry == GS_NOTSTARTED) return false;

    system("cls");

    std::cout << "   KOLKO I KRZYZYK   " << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "        -----" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        // lewa czesc ramki
        std::cout << "        |";

        // wiersz
        for (int j = 0; j < 3; j++)
        {
            if (g_aPlansza[i][j] == FLD_EMPTY)
                // numer pola
                std::cout << i * 3 + j + 1;
            else
                // kolko lub krzyzyk
                std::cout << (char)g_aPlansza[i][j];
        }

        // prawa czesc ramki
        std::cout << "|" << std::endl;
    }
    std::cout << "        -----" << std::endl;
    std::cout << std::endl;

    switch (g_StanGry)
    {
    case GS_MOVE:
        // prosba o nastepny ruch
        std::cout << "Podaj numer pola, w ktorym" << std::endl;
        std::cout << "chces postawic ";
        std::cout << (g_AktualnyGracz == SGN_CIRCLE ?
                      "kolko" : "krzyzyk") << ": ";
        break;
    case GS_WON:
        // informacja o wygranej
        std::cout << "Wygral gracz stawiajacy ";
        std::cout << (g_AktualnyGracz == SGN_CIRCLE ?
                      "kolka" : "krzyzyki") << "!";
        break;
    case GS_DRAW:
        // informacja o remisie
        std::cout << "Remis!";
        break;
    }

    return true;
}
