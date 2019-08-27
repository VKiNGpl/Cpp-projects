#include <iostream>
#include <cmath>

using namespace std;

double RecArea(double);

int main()
{
    double r = 2;

    cout << "PI = " << RecArea(r) << endl;

    return 0;
}

double RecArea(double r)
{
    int nNum;
    double w, x, h;
    double dArea = 0;

    cout << "Enter the number of rectangles: ";
    cin >> nNum;

    w = r/nNum;
    x = w/2;

    for(int i=0; i<nNum; i++)
    {
        h = sqrt((r*r)-(x*x));
        dArea += h*w;
        x += w;
    }
    return dArea;
}
