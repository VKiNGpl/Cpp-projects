#include <iostream>
#include <array>
#include <iomanip>

const int ArSize = 101;      // example of external declaration

using namespace std;

int main()
{
    array<long double, ArSize> factorials;

    factorials[1] = factorials[0] = 1.00;

    for (int i = 2; i < ArSize; i++)
    {
        factorials[i] = i* factorials[i-1];
    }
    for (int i = 0; i < ArSize; i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }

    cout << fixed << "100! = " << factorials[100] << endl;

    return 0;
}
