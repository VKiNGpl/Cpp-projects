#include <iostream>

using namespace std;

double RecArea(double);

int main()
{
    double r;
    cout << "Enter the radius: ";
    cin >> r;
    RecArea(r);

    return 0;
}

double RecArea(double r)
{
    int nNum;
    double w, x, h;

    cout << "Enter the number of rectangles: ";
    cin >> nNum;
    w = r/nNum;
    x = w
}
