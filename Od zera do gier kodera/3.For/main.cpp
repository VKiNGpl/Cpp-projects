#include <iostream>
#include <conio.h>

using namespace std;

int Suma(int nLiczba)
{
    int nSuma = 0;

    for (int i = 1; i <= nLiczba; i++)
        nSuma += i;

    return nSuma;
}

int main()
{
    int nLiczba;
    cout << "Program oblicza sume od 1 do podanej liczby.\n";
    cout << "Podaj ja: ";
    cin >> nLiczba;

    cout << "Suma liczb od 1 do " << nLiczba << " wynosi " << Suma(nLiczba) << ".\n";

    getch();
    return 0;
}
