#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

float MPG(float, float);

int main()
{
    float fMiles;
    float fGallons;

    cout << "Enter the number of miles you have driven: ";          cin >> fMiles;
    cout << "Enter how many gallons of gasoline you have used: ";   cin >> fGallons;

    cout << fixed;
    cout << "Your car has gotten " << setprecision(1) << MPG(fMiles, fGallons) << " miles per gallon.\n";

    getch();
    return 0;
}

float MPG(float m, float g)
{
    return m / g;
}
