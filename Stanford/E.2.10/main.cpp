#include <iostream>

using namespace std;

void askForElements(double [], int);
void findLowHigh(int&, int&);

int main()
{
    int howMany = 0;
    double *dArray;
    dArray = new double [howMany];

    askForElements(dArray, howMany);

    cout << sizeof dArray;

    delete [] dArray;

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
            nCount++;
        }
}
