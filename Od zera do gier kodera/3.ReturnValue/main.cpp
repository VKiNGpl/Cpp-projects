// ReturnValue - funkcje zwracajace wartosc
#include <iostream>
#include <conio.h>

using namespace std;

int Obwod(int, int);
int Pole(int, int);

int main()
{
    int nDlugosc1;
    cout << "Podaj dlugosc pierwszego boku: ";
    cin >> nDlugosc1;

    int nDlugosc2;
    cout << "Podaj dlugosc drugiego boku: ";
    cin >> nDlugosc2;

    cout << "Obwod prostokata: " << Obwod(nDlugosc1, nDlugosc2) << endl;
    cout << "Pole prostokata: " << Pole(nDlugosc1, nDlugosc2) << endl;
    getch();

    return 0;
}

int Obwod(int nBok1, int nBok2)
{
    return 2 * (nBok1 + nBok2);
}

int Pole(int nBok1, int nBok2)
{
    return nBok1 * nBok2;
}
