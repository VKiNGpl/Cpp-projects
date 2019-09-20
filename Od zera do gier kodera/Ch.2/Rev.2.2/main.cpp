#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    string strImie, strNazwisko;
    cout << "Podaj swoje imie: ";
    cin >> strImie;
    cout << "Podaj swoje nazwisko: ";
    cin >> strNazwisko;
    cout << "\nNazywasz sie " << strImie << " " << strNazwisko << ".\n";
    getch();

    return 0;
}
