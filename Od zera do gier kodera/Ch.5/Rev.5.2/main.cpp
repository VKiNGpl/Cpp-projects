#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


tm AktualnyCzas = {0, 0, 0, 1, 0, 0, 0, 0, 0};

int DniDoKoncaRoku();

int main()
{
    time_t Czas = time(NULL);
    AktualnyCzas = *localtime(&Czas);

    cout << "Obecnie jest: ";
    // data
    if (AktualnyCzas.tm_mon < 9)
        cout << "0";
    cout << AktualnyCzas.tm_mon + 1 << ".";
    if (AktualnyCzas.tm_mday <10)
        cout << "0";
    cout << AktualnyCzas.tm_mday << "."
         << AktualnyCzas.tm_year + 1900 << " ";
    // godzina
    if ((AktualnyCzas.tm_hour % 12) < 10)
        cout << "0";
    if (AktualnyCzas.tm_hour > 12)
        cout << AktualnyCzas.tm_hour % 12;
    else
        cout << AktualnyCzas.tm_hour;
    cout << ":";
    if (AktualnyCzas.tm_min < 10)
        cout << "0";
    cout << AktualnyCzas.tm_min << ":";
    if (AktualnyCzas.tm_sec <10)
        cout << "0";
    cout << AktualnyCzas.tm_sec << " ";
    if (AktualnyCzas.tm_hour < 12)
        cout << "AM";
    else
        cout << "PM";
    cout << "\nPozostalo " << DniDoKoncaRoku() << " dni do konca roku!\n";

    return 0;
}

int DniDoKoncaRoku()
{
    int rok = AktualnyCzas.tm_year + 1900;

    if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
        return 365 - AktualnyCzas.tm_yday;
    else
        return 364 - AktualnyCzas.tm_yday;
}
