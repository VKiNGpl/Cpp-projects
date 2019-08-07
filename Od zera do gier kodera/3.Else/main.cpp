// Else - blok alternatywny w instrukcji if
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nLiczba;

    cout << "Wprowadz liczbe wieksza od 10: ";
    cin >> nLiczba;

    if(nLiczba > 10)
    {
        cout << "Dziekuje.\n";
        cout << "Wcisnij dowolny klawisz, by zakonczyc.\n";
    }
    else
    {
        cout << "Liczba " << nLiczba
                          << " nie jest wieksza od 10.\n";
        cout << "Czuj sie upomniany :P\n";
    }
    getch();

    return 0;
}
