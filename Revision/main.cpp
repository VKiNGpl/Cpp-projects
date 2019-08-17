#include <iostream>

using namespace std;


int main()
{
    int nLiczba;
    cin >> nLiczba;
    int nDzielnik = nLiczba;

    for (int i=nDzielnik-1; i>=0; i--)
    {
        cout << nDzielnik << endl;
        cout << nLiczba%(nDzielnik) << endl;
        if (nLiczba%nDzielnik == 0)
        {
        cout << "NIE" << endl;
        }
        nDzielnik--;
    }
    cout << "TAK" << endl;

    return 0;
}
