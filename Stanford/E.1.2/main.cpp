#include <iostream>

using namespace std;

int MToInch(double);

int main()
{
    double dMeters;
    cout << "Enter the distance in meters: ";
    cin >> dMeters;
    cout << "That is " << MToInch(dMeters)/12 << " feet and " << MToInch(dMeters)%12 << " inches.";

    return 0;
}
int MToInch(double m)
{
    return m/0.0254;
}
