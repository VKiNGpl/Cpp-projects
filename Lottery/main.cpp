#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int number;

int main()
{
    cout<<"Welcome to our lottery. In three seconds we will commence drawing the lucky numbers:";
    Sleep(3000);
    cout<<endl;

    srand(time(NULL));

    for (int i=1; i<=6; i++)
    {
        number=rand()%49+1;
        Sleep(1000);
        cout<<number<<"\a"<<endl;
    }

    system("pause");

    return 0;
}
