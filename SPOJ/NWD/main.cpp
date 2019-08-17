#include <iostream>

using namespace std;

int nwd(int a, int b);

int main()
{
    int nTestow, nLiczba1, nLiczba2;

    cin >> nTestow;

    for (int i = 0; i < nTestow; i++)
    {
        cin >> nLiczba1 >> nLiczba2;

        cout << nwd(nLiczba1, nLiczba2) << endl;
    }
    return 0;
}

int nwd(int a, int b)
{
    int nDzielnik;
    if (a > b)
    {
        nDzielnik = b;
    }
    else
    {
        nDzielnik = a;
    }
    for (int j=nDzielnik; nDzielnik > 0; j--)
    {
        if (a%nDzielnik == 0 && b%nDzielnik == 0)
            return nDzielnik;
        nDzielnik--;
    }
}
/*#include <iostream>

using namespace std;

int main()
{
    int nTestow, nLiczba1, nLiczba2, nDzielnik;

    cin >> nTestow;

    for (int i = 0; i < nTestow; i++)
    {
        cin >> nLiczba1 >> nLiczba2;
        if (nLiczba1 > nLiczba2)
        {
            nDzielnik = nLiczba2;
        }
        else
        {
            nDzielnik = nLiczba1;
        }
        for (int j=nDzielnik; nDzielnik > 0; j--)
        {
            if (nLiczba1%nDzielnik == 0 && nLiczba2%nDzielnik == 0)
                break;
            nDzielnik--;
        }
        cout << nDzielnik << endl;
    }
    return 0;
}
*/
