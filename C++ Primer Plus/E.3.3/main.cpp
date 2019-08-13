#include <iostream>
#include <conio.h>

using namespace std;

const int nPerUnit = 60;
float fDeg;
float fMin;
float fSec;

float fDegInDec(int, float, float, float);

int main()
{
    cout << "Enter a latidtude in degrees, minutes and seconds.\n";
    cout << "First, enter latitude in degrees: ";   cin >> fDeg;
    cout << "Next, enter the minutes of arc: ";     cin >> fMin;
    cout << "Finally, enter the seconds of arc: ";  cin >> fSec;

    cout << "\n" << fDeg << " degrees, " << fMin << " minutes, " << fSec
         << " seconds = " << fDegInDec(nPerUnit, fDeg, fMin, fSec)<< " degrees.";

    getch();
    return 0;
}

float fDegInDec(int c, float d, float m, float s)
{
    return d + m / c + s / c / c;
}
