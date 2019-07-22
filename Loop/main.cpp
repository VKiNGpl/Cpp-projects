#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string name; int number;

int main()
{
    for (int i=15; i>0; i--)
    {
        Sleep(1000);
        system("cls");
        cout<<i<<endl;
    }
    Sleep(1000);
    system("cls");
    cout<<"!!!KABOOM!!!\n";

    cout<<"\nEnter a name: ";
    cin>>name;
    cout<<"Enter a number: ";
    cin>>number;
    for (int i=1;i<=number;i++)
    {
        cout<<"\n"<<i<<". "<<name;
    }
    cout<<"\n";
return 0;
}
