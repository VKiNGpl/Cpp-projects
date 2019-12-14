#include <iostream>
#include <time.h>
#include <cstdlib>

const unsigned ILOSC_LICZB = 6;
const int MAKSYMALNA_LICZBA = 49;

using namespace std;

int main()
{
    // deklaracja i wyzerowanie tablicy liczb
    unsigned aLiczby[ILOSC_LICZB];
    for (int i = 0; i < ILOSC_LICZB; i++)
    {
        aLiczby[i] = 0;
    }

    // losowanie liczb
    srand(static_cast<int>(time(NULL)));
    for (int i = 0; i < ILOSC_LICZB; )
    {
        // wylosowanie liczby
        aLiczby[i] = rand() % MAKSYMALNA_LICZBA + 1;

        // sprawdzenie, czy sie ona nie powtarza
        bool bPowtarzaSie = false;
        for (int j = 0; j < i; j ++)
        {
            if (aLiczby[j] == aLiczby[i])
            {
                bPowtarzaSie = true;
                break;
            }
        }

        // jezeli sie nie powtarza, przechodzimy do nastepnej liczby
        if (!bPowtarzaSie) i ++;
    }

    // wyswietlamy wylosowane liczby
    cout << "Wyniki losowania:" << endl;
    for (int i = 0; i < ILOSC_LICZB; i ++)
    {
        cout << aLiczby[i] << " ";
    }

    return 0;
}
