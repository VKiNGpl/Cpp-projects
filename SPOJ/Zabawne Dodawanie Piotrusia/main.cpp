#include <iostream>

using namespace std;

int main()
{

    int nLiczba, nKopia, nCyfra, nOdwr, nTestow;

    cin >> nTestow;

    for (int i=0; i<nTestow; i++)
    {
        cin >> nLiczba;
        int nLicznik = 0;
        nKopia = 0;

        while (nKopia != nOdwr)
        {

            nOdwr = 0;
            nKopia = nLiczba;
            do
            {
                nCyfra = nLiczba % 10;
                nOdwr = (nOdwr * 10) + nCyfra;
                nLiczba = nLiczba / 10;
            }
            while (nLiczba != 0);

            if (nKopia == nOdwr)
            {
                cout << nKopia << " " << nLicznik << endl;
            }
            else
            {
                nLiczba = nKopia + nOdwr;
                nLicznik++;
            }
        }
    }
    return 0;
}
