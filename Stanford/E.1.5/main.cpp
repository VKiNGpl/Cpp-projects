#include <iostream>

using namespace std;

int const SENTINEL = 0;

int Max(int&, int);

int main()
{
    int nNum;
    int nMax = 0;

    while(nNum != SENTINEL)
    {
    cin >> nNum;
    Max(nMax, nNum);
    }
    cout << nMax << endl;

    return 0;
}

int Max(int& m, int n)
{
    if(n>m)
        m=n;
}
