#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout<<"Welcome to our ATM!\nPlease input PIN: ";
    cin>>PIN;

    if(PIN=="1234")
    {
        cout<<"PIN accepted!\n";
    }
    else
        cout<<"Incorrect PIN!\n";

    return 0;
}
