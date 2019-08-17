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
            cout << nLiczba << endl;
            cin >> nLiczba;
        }
        cout << nLiczba << endl;
        while(nLiczba != 42)
        {
            cin >> nLiczba;
            cout << nLiczba << endl;
        }
        nLicznik++;
    }
    return 0;
}
