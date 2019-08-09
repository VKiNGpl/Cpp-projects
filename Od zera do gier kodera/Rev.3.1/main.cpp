#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nLiczba;

    cout << "Podaj liczbe calkowita: ";
    cin >> nLiczba;

    if (nLiczba < 0)
        cout << "\nPodana liczba nalezy do przedzialu liczb ujemnych!";
    else if (nLiczba >=0 && nLiczba <10)
        cout << "\nPodana liczba nalezy do przedzialu liczb jednocyfrowych!";
    else if (nLiczba >9 && nLiczba <100)
        cout << "\nPodana liczba nalezy do przedzialu liczb dwucyfrowych!";
    else
        cout << "\nPodana liczba nalezy do przedzialu liczb pozostalych!";

    getch();
    return 0;
}
