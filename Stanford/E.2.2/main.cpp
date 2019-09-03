#include <iostream>

using namespace std;

const double PI = 3.141592654;

void ReadData(double&, double&);
void CalcResult(double&, double&, double&, double&);
void PrintResult(double, double);

int main()
{
    double dh, dr, dA, dV;

    ReadData(dh, dr);
    CalcResult(dh, dr, dA, dV);
    PrintResult(dA, dV);

    return 0;
}
void ReadData(double& h, double& r)
{
    cout << "Enter the cylinder height: ";
    cin >> h;
    cout << "Enter the cylinder radius: ";
    cin >> r;
    cout << endl;
}
void CalcResult(double& r, double& h, double& A, double& V)
{
   A = 2*PI*h*r;
   V = PI*h*r*r;
}
void PrintResult(double A, double V)
{
    cout << "The cylinder area is: " << A << endl;
    cout << "The cylinder volume is: " << V << endl;
}
