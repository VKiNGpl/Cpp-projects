#include <iostream>

using namespace std;

int main()
{
    int t, n, nLiczba;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int nSuma = 0;
        cin >> n;

        for (int j=0; j<n; j++)
        {
            cin >> nLiczba;
            nSuma += nLiczba;

        }
        cout << nSuma << endl;
    }

    return 0;
}
