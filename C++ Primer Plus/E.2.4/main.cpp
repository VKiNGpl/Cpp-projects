#include <iostream>
#include <conio.h>

using namespace std;

int tomonths(int);

int main()
{
    int age;
    cout << "Enter your age: ";
    cin  >> age;
    cout << "Your age in months is " << tomonths(age) << endl;

    getch();
    return 0;
}

int tomonths(int m)
{
    return 12*m;
}
