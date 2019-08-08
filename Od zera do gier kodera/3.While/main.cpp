// While - druga petla warunkowa
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // wylosowanie liczby
    srand((int) time(NULL));                            //albo srand(time(NULL));
    int nWylosowana = rand() % 100 +1;
    cout << "Wylosowano liczbe z przedzialu 1-100.\n";

    // pierwsza proba odgadniecia liczby
    int nWprowadzona;
    cout << "Sprobuj ja odgadnac: ";
    cin >> nWprowadzona;

    // kolejne proby, az do skutku - przy uzyciu petli while
    while (nWprowadzona != nWylosowana)
    {
        if (nWprowadzona < nWylosowana)
            cout << "Liczba jest zbyt mala. ";
        else
            cout << "Za duza liczba ";
            cout << "Sprobuj jeszcze raz: ";
            cin >> nWprowadzona;
    }
        cout << "Celny strzal :) Brawo!\n";

    getch();
    return 0;
}
