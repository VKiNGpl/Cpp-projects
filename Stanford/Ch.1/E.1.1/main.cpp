#include <iostream>
#include <iomanip>

using namespace std;

double CToF(double);

int main()
{
    double dTemp;
    cin >> dTemp;
    cout << CToF(dTemp);

    return 0;
}
double CToF(double c)
{
    cout << fixed << setprecision(1);

    return 9*c / 5 + 32;
}
