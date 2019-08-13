#include <iostream>

using namespace std;

int main()
{
    int nV1, nV2, nVav, t;
    cin >> t;
    for (int i=0; i < t; i++)
    {
        cin >> nV1 >> nV2;
        nVav = 2*nV1 * nV2 / (nV1 + nV2);
        cout << nVav << endl;
    }
    return 0;
}
