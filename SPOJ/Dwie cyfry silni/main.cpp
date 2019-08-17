#include <iostream>

using namespace std;

unsigned long silnia(int);

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

    cout << silnia(nLiczba) << endl;
    cout << silnia(nLiczba)/10 << " " << silnia(nLiczba)%10 << endl;
    }

    return 0;
}

 unsigned long silnia(int a)
{
    unsigned long n = 1;

    for(unsigned long i=1; i<=a; i++)
    {
        n = n*i;
    }
    return n;
}
