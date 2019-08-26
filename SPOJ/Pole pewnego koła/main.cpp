#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.141592654;

double SideA(double, double);

int main()
{
    double r, d, a;

    cin >> r >> d;
    a = SideA(r, d/2);
    cout << fixed << setprecision(2);
    cout << PI*(a*a);

    return 0;
}

double SideA(double c, double b)
{
    return sqrt(c*c-b*b);
}
