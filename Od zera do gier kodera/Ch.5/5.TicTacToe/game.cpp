#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "game.h"


FIELD g_aPlansza[GAME_SIZE][GAME_SIZE];
GAMESTATE g_StanGry = GS_NOTSTARTED;
SIGN g_AktualnyGracz;

bool StartGry()
{
    if (g_StanGry != GS_NOTSTARTED)
        return false;

    InicjujPlansze();

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
    if (!(uNumerPola >= 1 && uNumerPola <= GAME_SIZE * GAME_SIZE))
        return false;

    unsigned uY = (uNumerPola - 1) / GAME_SIZE;
    unsigned uX = (uNumerPola - 1) % GAME_SIZE;

    if (g_aPlansza[uY][uX] == FLD_EMPTY);
    // wstaw znak aktualnego gracza w podanym polu
    else
        return false;

    g_aPlansza[uY][uX] = (FIELD)g_AktualnyGracz;
    int nLiczbaKombinacji = GAME_SIZE*2+2;
    int LINIE[nLiczbaKombinacji][GAME_SIZE][2];
    // poziome kombinacje
    for (int i = 0; i < GAME_SIZE; i++)
    {
        for (int j = 0; j < GAME_SIZE; j++)
        {
                LINIE[i][j][0] = i;
                LINIE[i][j][1] = j;
        }
    }
    // pionowe kombinacje
    for (int i = GAME_SIZE; i < GAME_SIZE*2; i++)
    {
        for (int j = 0; j < GAME_SIZE; j++)
        {
                LINIE[i][j][0] = j;
                LINIE[i][j][1] = i - GAME_SIZE;
        }
    }
    // prawa backslashowa
    for (int i = GAME_SIZE*2; i < GAME_SIZE*2+1; i++)
    {
        for (int j = GAME_SIZE - 1; j >= 0; j--)
        {
                LINIE[i][j][0] = (GAME_SIZE - 1) - j;
                LINIE[i][j][1] = j;
        }
    }
    // prawa slashowa
    for (int i = GAME_SIZE*2+1; i < GAME_SIZE*2+2; i++)
    {
        for (int j = 0; j < GAME_SIZE; j++)
        {
                LINIE[i][j][0] = j;
                LINIE[i][j][1] = j;
        }
    }

    FIELD Pole, ZgodnePole;
    unsigned uLiczbaZgodnychPol, uLiczbaZapelnionychPol;
    for (int i = 0; i < GAME_SIZE*2+2; i++)
    {
        // i przebiega po kolejnych mozliwych liniach (jest ich GAME_SIZE*2+2)

        // zerujemy zmienne pomocnicze
        Pole = ZgodnePole = FLD_EMPTY;   // obie zmienne == FLD_EMPTY
        uLiczbaZgodnychPol = 0;
        uLiczbaZapelnionychPol = 0;

        for (int j = 0; j < GAME_SIZE; j++)
        {
            // j przebiega po GAME_SIZE polach w kazdej linii

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
        if (uLiczbaZgodnychPol == GAME_SIZE && ZgodnePole != FLD_EMPTY)
        {
            // jezeli tak, no to ustawiamy stan gry na wygrana
            g_StanGry = GS_WON;

            // przerywamy petle i funkcje
            return true;
        }
        }
        for (int i = 0; i < GAME_SIZE; i++)
        {
            for (int j = 0; j < GAME_SIZE; j++)
                if (g_aPlansza[i][j] != FLD_EMPTY)
                    uLiczbaZapelnionychPol++;
        }

        if (uLiczbaZapelnionychPol == GAME_SIZE*GAME_SIZE)
        {
            g_StanGry = GS_DRAW;
            return true;
    }

    g_AktualnyGracz = (g_AktualnyGracz == SGN_CIRCLE ? SGN_CROSS : SGN_CIRCLE);

    return true;
}

bool RysujPlansze()
{
    if (g_StanGry == GS_NOTSTARTED) return false;

    system("cls");

    for (int i = 0; i < GAME_SIZE*5/2-7; i++)
        {
            std::cout << " ";
        }
    std::cout << "KOLKO I KRZYZYK" << std::endl;
    for (int i = 0; i < GAME_SIZE*5+1; i++)
    {
    std::cout << "-";
    }
    std::cout << std::endl;


    for (int i = 0; i < GAME_SIZE; i++)
    {
        // lewy odstep
        for (int j = 0; j < GAME_SIZE; j++)
        {
            std::cout << " ";
        }
        // gorna ramka
        if (i == 0)
            std::cout << "-";
        else
            std::cout << "|";
        // pozioma ramka
        for (int j = 0; j < GAME_SIZE; j++)
        {
            if (i == 0)
                std::cout << "---";
            else
                std::cout << "--|";
        }
        std::cout << std::endl;
        // wiersz
        for (int j = 0; j < GAME_SIZE; j++)
        {
            std::cout << " ";
        }
        std::cout << "|";
        for (int j = 0; j < GAME_SIZE; j++)
        {
            if (g_aPlansza[i][j] == FLD_EMPTY)
                // numer pola
                std::cout << std::setw(2) << i * GAME_SIZE + j + 1 << "|";
            else
                // kolko lub krzyzyk
                std::cout << std::setw(2) << (char)g_aPlansza[i][j] << "|";
        }

        if (i == GAME_SIZE - 1)
        {
            std::cout << std::endl;
            for (int j = 0; j < GAME_SIZE; j++)
            {
                std::cout << " ";
            }
            for (int j = 0; j < GAME_SIZE; j++)
            {
                std::cout << "---";
            }
            std::cout << "-" << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    switch (g_StanGry)
    {
    case GS_MOVE:
        // prosba o nastepny ruch
        std::cout << "Podaj numer pola, w ktorym" << std::endl;
        std::cout << "chcesz postawic ";
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

bool InicjujPlansze()
{
    if (g_StanGry != GS_NOTSTARTED)
        return false;
    for (int i = 0; i < GAME_SIZE; i++)
    {
        for (int j = 0; j < GAME_SIZE; j++)
        {
            g_aPlansza[i][j] = FLD_EMPTY;
        }
    }

    return true;
}
