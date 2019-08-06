#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int iLiczba1, iLiczba2, iLiczba3;
    cout << "Podaj 3 liczby calkowite: \n";
    cin  >> iLiczba1 >> iLiczba2 >> iLiczba3;
    int iIloczyn = iLiczba1 * iLiczba2 * iLiczba3;
    cout << "\nIloczyn podanych liczb to: " << iIloczyn << ".\n";
    getch();

    return 0;
}
