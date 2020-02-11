#include <iostream>

using namespace std;

int main()
{
    int nNum, nSum = 0;

    cout << "Please enter random numbers <Enter 0 to terminate>:" << endl;

    cin >> nNum;
    while (nNum != 0)
    {
        nSum += nNum;
        cout << "The sum of numbers entered so far is: " << nSum << endl;
        cin >> nNum;
    }

    cout << "Done!\nThe sum is: " << nSum << endl;

    return 0;
}
