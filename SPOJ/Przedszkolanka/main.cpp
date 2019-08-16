#include <iostream>

using namespace std;

int main()
{
    int nTestow, nGrupa1, nGrupa2, nCukierkow, nDzielnik;

    cin >> nTestow;

    for (int i=0; i<nTestow; i++)
    {
        cin>> nGrupa1 >> nGrupa2;

        if (nGrupa1 > nGrupa2)
            nDzielnik = nGrupa2;
        else
            nDzielnik = nGrupa1;

            for (int i=nDzielnik; i>0; i--)
            {
                if (nGrupa1%i == 0 && nGrupa2%i ==0)
                {
                    nCukierkow = nGrupa1*nGrupa2/i;
                    cout << nCukierkow << endl;
                    break;
                }
            }
    }

    return 0;
}
