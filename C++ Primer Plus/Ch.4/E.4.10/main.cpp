#include <iostream>

using namespace std;

int main()
{
    double dash[3], dAverage;

    for (int i=0; i<3; i++)
    {
    cout << "Enter dash time: ";
    cin >> dash[i];
    }

    for (int i=0; i<3; i++)
    {
    cout << dash[i] << endl;
    }

    dAverage = (dash[0] + dash[1] + dash[2]) / 3;
    cout << "The average time is: " << dAverage << endl;

    return 0;
}
