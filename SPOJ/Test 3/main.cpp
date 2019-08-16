#include <iostream>

using namespace std;

int main()
{
    int nLiczba;
    int nLicznik = 0;

    while (nLicznik < 3)
    {

        cin >> nLiczba;
        while (nLiczba == 42)
        {
            cout << nLiczba;
            cin >> nLiczba;
        }
        cout << nLiczba << endl;
        if (nLiczba == 42)
        {
            nLicznik++;
            cout << nLicznik;
        }
    }

    return 0;
}
