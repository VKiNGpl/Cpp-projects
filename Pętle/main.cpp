#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie; int liczba;

int main()
{
    for (int i=1; i<=10; i++)
    {
        cout << i<< endl;
    }
    cout <<"\n";

    for (int i=4; i>=-1; i--)
    {
        cout << i<< endl;
    }
    cout <<"\n";

    for (int i=-13; i<0; i=i+2)
    {
        cout <<i<<endl;
    }
    cout<<"\n";

    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout <<i<<endl;
    }
    cout<<"\n";
    Sleep(3000);
    cout<<"JEBUT!"<<endl;
    cout<<"\n";

    cout<<"Podaj imie: ";
    cin>>imie;
    cout<<"Podaj dodania liczbe calkowita: ";
    cin>>liczba;

    for (int i=1; i<=liczba; i++)
    {
        cout<<i<<". "<<imie<<endl;
    }

    return 0;
}
