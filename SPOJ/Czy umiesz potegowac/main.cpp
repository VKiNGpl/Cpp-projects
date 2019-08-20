#include <iostream>

using namespace std;

int liczbaJednosci(int, int);
int nLiczba2;

int main()
{
    int nTestow, nLiczba1, nModulo2;

    cin >> nTestow;
    if(nTestow<0 || nTestow>100)
        return 0;
    for (int i=0; i<nTestow; i++)
    {
        cin >> nLiczba1 >> nLiczba2;
        nModulo2 = nLiczba2%4;
        if(((nLiczba1 || nLiczba2)<0) || ((nLiczba1 || nLiczba2)>2000000000))
            return 0;

        cout << liczbaJednosci(nLiczba1%10, nModulo2) << endl;

    }
    return 0;
}

int liczbaJednosci(int a, int b)
{
    if(a==0 && nLiczba2!=0)
        return 0;
    else if((a==1 || nLiczba2==0) || ((a==3 || a==7 || a==9) && b==0) || (a==9 && b==2))
        return 1;
    else if((a==2 && b==1) || (a==8 && b==3))
        return 2;
    else if((a==3 && b==1) || (a==7 && b==3))
        return 3;
    else if(((a==2 || a==8) && b==2) || (a==4 && (b==1 || b==3)))
        return 4;
    else if(a==5)
        return 5;
    else if(((a==2 || a==4 || a==8) && b==0) || (a==4 && b==2) || a==6)
        return 6;
    else if((a==3 && b==3) || (a==7 && b==1))
        return 7;
    else if((a==2 && b==3) || (a==8 && b==1))
        return 8;
    else if(((a==3 || a==7) && b==2) || (a==9 && (b==1 || b==3)))
        return 9;
}
