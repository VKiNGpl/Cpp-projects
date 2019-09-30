#include <iostream>
#include <conio.h>

using namespace std;

const int nHoursInDay = 24;
const int nPerUnit = 60;

long long nSeconds;

int main()
{
    cout << "Enter the number of seconds: "; cin >> nSeconds;
    cout << nSeconds << " seconds = " << nSeconds / nPerUnit / nPerUnit / nHoursInDay << " days, "
         << (nSeconds / nPerUnit / nPerUnit) % 24 << " hours, " << (nSeconds / nPerUnit) % 60
         << " minutes, " << nSeconds % 60 << " seconds.";

    getch();
    return 0;
}
