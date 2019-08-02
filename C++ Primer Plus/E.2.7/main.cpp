#include <iostream>
#include <conio.h>

using namespace std;

void clock(int);

int main()
{
    int hours, minutes;

    cout << "Enter the number of hours: ";
    cin  >> hours;
    cout << "Enter the number of minutes: ";
    cin  >> minutes;
    cout << "Time: ";
    clock(hours);
    cout << ":";
    clock(minutes);
    cout << endl;

    getch();
    return 0;
}

void clock(int t)
{
    cout << t;
}
