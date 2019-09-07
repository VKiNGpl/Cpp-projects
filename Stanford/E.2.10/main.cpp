#include <iostream>

using namespace std;

void askForElements(double [], int);
void findLowHigh(double&, double&, double);

double dLow, dHigh;

int main()
{
    int howMany = 0;
    double *dArray;
    dArray = new double [howMany];

    askForElements(dArray, howMany);

    cout << "The range of values is " << dLow << "-" << dHigh << endl;

    return 0;
}
void askForElements(double arr[], int nCount)
{
    double dNum;

    cout << "Enter the elements of the array, one per line." << endl
         << "Use -1 to signal the end of the list." << endl;
        while (dNum != -1)
        {
            arr[nCount-1] = dNum;
            cout << " ? ";
            cin >> dNum;
            if (nCount == 0)
                dLow = dNum;
            if (dNum != -1)
            {
            findLowHigh(dLow, dHigh, dNum);
            nCount++;
            }
        }
}
void findLowHigh(double& dLow, double& dHigh, double num)
{
    if (num>dHigh)
        dHigh = num;
    if (num<dHigh && num<dLow)
        dLow = num;
}
