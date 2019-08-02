#include <iostream>
#include <conio.h>

using namespace std;

double tofahrenheit (double);

int main()
{
    double celsius;

    cout << "Please enter temperature in Celsius: ";
    cin  >> celsius;
    cout << "\nThat is " << tofahrenheit(celsius) << " in Fahrenheir.\n";

    getch();
    return 0;
}

double tofahrenheit(double c)
{
    return c * 1.8 + 32.0;
}
