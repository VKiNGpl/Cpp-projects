#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

const float fKmToMi = 62.14;
const float fGalToLtr = 3.785;

float MPG(float);

int main()
{

    float fLiters;

    cout << "Enter the number of liters per 100km: ";          cin >> fLiters;
    cout << fixed;
    cout << "That is " << setprecision(1) << MPG(fLiters) << " mpg.\n";

    getch();
    return 0;
}

float MPG(float l)
{
    return fKmToMi / (l / fGalToLtr);
}
