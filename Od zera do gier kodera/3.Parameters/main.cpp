#include <iostream>
#include <conio.h>

using namespace std;

void Dodaj(int nWartosc1, int nWartosc2);

int main()
{
    int nLiczba1;
    cout << "Podaj pierwsza liczbe: ";
    cin >> nLiczba1;

    int nLiczba2;
    cout << "Podaj druga liczbe: ";
    cin >> nLiczba2;

    Dodaj(nLiczba1, nLiczba2);
    getch();

    return 0;
}

void Dodaj(int nWartosc1, int nWartosc2)
    {
        int nWynik = nWartosc1 + nWartosc2;
        cout << nWartosc1 << " + " << nWartosc2  << " = " << nWynik;
        cout << endl;
    }
