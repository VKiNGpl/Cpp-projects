#include <iostream>
#include <conio.h>

using namespace std;

int nLiczba1, nLiczba2, nLiczba3, nMax;

int main()
{
    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin >> nLiczba1 >> nLiczba2 >> nLiczba3;

    nMax = nLiczba1;
    if (nLiczba2 > nMax) nMax = nLiczba2;
    if (nLiczba3 > nMax) nMax = nLiczba3;

        cout << "Najwieksza liczba to " << nMax;

/*    cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin >> nLiczba1 >> nLiczba2 >> nLiczba3;

    if ((nLiczba1>=nLiczba2) && (nLiczba1>=nLiczba3))
        cout << "Najwieksza liczba to " << nLiczba1;

    else if((nLiczba2>=nLiczba1) && (nLiczba2>=nLiczba3))
        cout << "Najwieksza liczba to " << nLiczba2;

    else if((nLiczba3>=nLiczba1) && (nLiczba3>=nLiczba2))
        cout << "Najwieksza liczba to " << nLiczba3;
*/

/*  cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin >> nLiczba1 >> nLiczba2 >> nLiczba3;

    if((nLiczba1>=nLiczba2) && (nLiczba1>=nLiczba3))
        cout << "Najwieksza liczba to " << nLiczba1;

    if((nLiczba2>=nLiczba1) && (nLiczba2>=nLiczba3))
        cout << "Najwieksza liczba to " << nLiczba2;

    if((nLiczba3>=nLiczba1) && (nLiczba3>=nLiczba2))
        cout << "Najwieksza liczba to " << nLiczba3;
*/

/*  cout << "Podaj 3 liczby rozdzielone spacja: ";
    cin >> nLiczba1 >> nLiczba2 >> nLiczba3;

    if((nLiczba1>nLiczba2) && (nLiczba1>nLiczba3))
        cout << "Najwieksza liczba to " << nLiczba1;

    if((nLiczba2>nLiczba1) && (nLiczba2>nLiczba3))
        cout << "Najwieksza liczba to " << nLiczba2;

    if((nLiczba3>nLiczba1) && (nLiczba3>nLiczba2))
        cout << "Najwieksza liczba to " << nLiczba3;
*/
    getch();
    return 0;
}
