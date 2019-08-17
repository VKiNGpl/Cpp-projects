#include <iostream>

using namespace std;

int silnia(int);

int main()
{
    int nLiczba;

    cin >> nLiczba;

    cout << silnia(nLiczba);

    return 0;
}

int silnia(int a)
{
    int n = 2;

    for (int i=1; i<=a; i++)
    {
        n = n*i;
        i++;
        cout << n << endl;
    }
    return n;
}
