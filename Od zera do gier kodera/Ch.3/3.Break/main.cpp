// Break - przerwanie petli
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nLiczba;

    do
    {
        cout << "Wprowadz liczbe wieksza od 10\n";
        cout << "lub 0 by zakonczyc program: ";
        cin >> nLiczba;

        if (nLiczba == 0) break;
    } while (nLiczba <= 10);

    cout << "Nacisnij dowolny klawisz.";

    getch();
    return 0;
}
