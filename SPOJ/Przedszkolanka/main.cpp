#include <iostream>

using namespace std;

int Cukierkow(int, int);

int main()
{
    int nTestow, nGrupa1, nGrupa2;

    cin >> nTestow;

    for (int i=0; i<nTestow; i++)
    {
        cin >> nGrupa1 >> nGrupa2;
        cout << Cukierkow(nGrupa1, nGrupa2) << endl;
    }

    return 0;
}
int Cukierkow(int a, int b)
{
    int nDzielnik;

    if (a > b)
            nDzielnik = b;
        else
            nDzielnik = a;

            for (int i=nDzielnik; a%i == 0 && b%i == 0; i--)
                    return a*b/i;
}
