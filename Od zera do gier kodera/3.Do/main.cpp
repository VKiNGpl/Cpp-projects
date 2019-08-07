// Do - pierwsza petla warunkowa
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nLiczba;

    do
    {
        cout << "Wprowadz liczbe wieksza od 10: ";
        cin >> nLiczba;
    } while (nLiczba <= 10);

    cout << "Dziekuje za wspolprace! :)\n";
    getch();

    return 0;
}
