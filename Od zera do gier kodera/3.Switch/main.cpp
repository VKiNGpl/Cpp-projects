// Switch - instrukcja wyboru
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nOpcja;
    float fLiczba1, fLiczba2;

    cout << "Podaj dwie liczby rozdzielone spacja: ";
    cin >> fLiczba1 >> fLiczba2;

    cout << "Wybierz dzalanie: \n";
    cout << "1. Dodwawanie\n";
    cout << "2. Odejmowanie\n";
    cout << "3. Mnozenie\n";
    cout << "4. Dzielenie\n";
    cout << "0. Wyjscie\n";
    cout << "Twoj wybor: ";
    cin >> nOpcja;

    switch (nOpcja)
    {
        case 1: cout << fLiczba1 << " + " << fLiczba2 << " = "
                     << fLiczba1 + fLiczba2; break;
        case 2: cout << fLiczba1 << " - " << fLiczba2 << " = "
                     << fLiczba1 - fLiczba2; break;
        case 3: cout << fLiczba1 << " * " << fLiczba2 << " = "
                     << fLiczba1 * fLiczba2; break;
        case 4:
            if (fLiczba2 == 0.0)
                cout << "Dzielnik nie moze byc zerem!";
            else
                cout << fLiczba1 << " / " << fLiczba2 << " = "
                     << fLiczba1 / fLiczba2;
            break;
        case 0: cout << "Dziekujemy :)"; break;
        default: cout << "Nieznana opcja!";
    }
    getch();
    return 0;
}
