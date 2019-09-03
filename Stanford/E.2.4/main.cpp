#include <iostream>

using namespace std;

bool isSorted(int [], int n);

int main()
{
    int intArr[] {1, 3, 3, 5, 6, 7, 8, 8};
    int nSize = sizeof intArr / sizeof intArr[0];

    cout << "Array is sorted in nondecreasing order?: ";
    if((isSorted(intArr, nSize))==1)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

bool isSorted(int arr[], int n)
{
    for (int i=1; i<n; i++)
    {
        if (arr[i]<arr[i-1])
            return false;
    }
    return true;
}
