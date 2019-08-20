#include <iostream>

using namespace std;

int liczbaJednosci(int);
int liczbaDziesiatek(int);

int main()
{
    int nTestow, nLiczba;

    cin >> nTestow;
    if(nTestow>30)
        return 0;

    for (int i=0; i<nTestow; i++)
    {
        cin >> nLiczba;
        if(nLiczba<0 || nLiczba>1000000000)
            return 0;

        cout << liczbaDziesiatek(nLiczba) << " ";
        cout << liczbaJednosci(nLiczba) << endl;
    }

    return 0;
}

int liczbaDziesiatek(int liczba)
{
    if(liczba<=3)
        return 0;
    else if(liczba>=4 && liczba<=6 || liczba==8)
        return 2;
    else if(liczba==7)
        return 4;
    else if(liczba==9)
        return 8;
    else if(liczba>=10)
        return 0;
}

int liczbaJednosci(int liczba)
{
    if(liczba<=1)
        return 1;
    else if(liczba==2)
        return 2;
    else if(liczba==3)
        return 6;
    else if(liczba==4)
        return 4;
    else if(liczba>=5)
        return 0;
}
