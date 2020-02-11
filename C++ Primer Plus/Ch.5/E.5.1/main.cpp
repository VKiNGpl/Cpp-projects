#include <iostream>

using namespace std;

int main()
{
    int nNum1, nNum2, nMin, nMax, nSum = 0;

    cout << "Please enter two integers: " << endl;

    cin >> nNum1 >> nNum2;

    if (nNum1 <= nNum2)
    {
        nMin = nNum1;
        nMax = nNum2;
    }
    else
    {
        nMin = nNum2;
        nMax = nNum1;
    }

    for (int i = nMin; i <= nMax; i++)
    {
        nSum += i;
    }

    cout << nSum << endl;

    return 0;
}
