#include <iostream>

using namespace std;

int Round(double);

int main()
{
    double dNum;
    cin >> dNum;
    cout << Round(dNum) << endl;

    return 0;
}

int Round(double d)
{
    if(d<0)
        return d-0.5;
    else
        return d+0.5;
}
