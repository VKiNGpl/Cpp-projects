#include <iostream>

using namespace std;

string name;

int main()
{
    cout << "What is your name: ";
    cin  >> name;

    int length = name.length();

    if (name[length-1]=='a')
        cout << "I think you are a female.";
    else
        cout << "I think you are a male.";

    return 0;
}
