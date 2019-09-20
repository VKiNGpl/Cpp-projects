#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float fA;
    cout << "Podaj wspolczynnik a: ";
    cin >> fA;

    float fB;
    cout << "Podaj wspolczynnik b: ";
    cin >> fB;

    if (fA == 0.0)
    {
        if (fB == 0.0)
            cout << "Rownanie spelnia kazda liczba rzeczywista.\n";
        else
            cout << "Rownianie nie posiada rozwiazan.\n";
    }
    else
        cout << "x = " << -fB / fA << endl;

    getch();
    return 0;
}
