#include <iostream>

using namespace std;

string czyPierwsza (int);

int main()
{
    int nTestow, nLiczba;

    cin >> nTestow;

    for (int i=0; i<nTestow; i++)
    {
        cin >> nLiczba;
        cout << czyPierwsza(nLiczba) << endl;
    }

    return 0;
}

string czyPierwsza(int a)
{
    int nDzielnik = a;

    if (nDzielnik==1)
        return "NIE";

    for (int i=nDzielnik-1; i>1; i--)
    {
        if (a%(nDzielnik-1) == 0)
        {
        return "NIE";
        }
        nDzielnik--;
    }
    return "TAK";
}
