#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nLiczba1;
    cout << "Podaj pierwsza liczbe: ";
    cin >> nLiczba1;

    int nLiczba2;
    cout << "Podaj druga liczbe: ";
    cin >> nLiczba2;

    int nWynik = nLiczba1 + nLiczba2;
    cout << nLiczba1 << " + " << nLiczba2 << " = " << nWynik;

    getch();
    return 0;
}
