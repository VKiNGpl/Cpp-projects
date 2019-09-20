// SimpleIf - prosty przyklad instrukcji if
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
        cout << "Wcisnij dowolny klawisz, by zakonczyc.";
        getch();
    }

    return 0;
}
