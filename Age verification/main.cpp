#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout<<"Welcome to this year's elections!\nPlease state your age: ";
    cin>>wiek;
    cout<<endl;

    if(wiek<18)
    {
        cout<<"You are not an adult.\n";
    }
    else if((wiek>=18)&&(wiek<35))
    {
        cout<<"You are an adult, but cannot run for president.\n";
    }
    else if((wiek>=35)&&(wiek<100))
    {
        cout<<"You are an adult and can run for president.\n";
    }
    else
    {
        cout<<"Incorrect entry. \n";
    }
    return 0;
}
