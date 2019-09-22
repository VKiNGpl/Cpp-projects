#include <iostream>
#include <cmath>

using namespace std;

void GetCoefficients(double&, double&, double&);
void SolveQuadratic(double, double, double, double&, double&);
void DisplayRoots(double, double);

double a, b, c, r1, r2, disc;

int main()
{


    GetCoefficients(a, b, c);
        if (a==0)
    {
        cerr << "The coefficient a must be nonzero";
        return 0;
    }
    if (disc <0)
    {
        cerr << "The solutions are complex numbers";
        return 0;
    }
    SolveQuadratic(a, b, c, r1, r2);
    DisplayRoots(r1, r2);

    return 0;
}
void GetCoefficients(double& a, double& b, double& c)
{
    cout << "Enter coefficients for the quadratic equation:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    disc = b*b - 4*a*c;
}

void SolveQuadratic(double a, double b, double c, double& x1, double& x2)
{

    double sqrtDisc = sqrt(disc);
    x1 = (-b + sqrtDisc) / (2*a);
    x2 = (-b - sqrtDisc) / (2*a);
}

void DisplayRoots(double x1, double x2)
{
    if (x1==x2)
    {
        cout << "There is a double root at " << x1 << endl;
    }
    else
    {
        cout << "The roots are " << x1 << " and " << x2 << endl;
    }
}
