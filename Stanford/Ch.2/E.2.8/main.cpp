#include <iostream>

using namespace std;

void removeZeroElements(int[], int&);
void countElements(int[], int&);
void printArray(int[], int);

int main()
{
    int nArray[] = {65, 0, 95, 0, 0, 79, 82, 0, 84, 94, 86, 90, 0};
    int nScores = sizeof nArray / sizeof nArray[0];

    removeZeroElements(nArray, nScores);
    printArray(nArray, nScores);

    return 0;
}
void removeZeroElements(int arr[], int& s)
{
    int buffArr[s];

    for (int i=0; i<s; i++)
    {
        for (int j=0; j<s; j++)
        {
            if (arr[j] != 0)
            {
                buffArr[i] = arr[j];
                i++;
            }
            if (j == s-1)
                i=s;
        }
    }
    countElements(arr, s);

    for (int i=0; i<s; i++)
    {
        arr[i] = buffArr[i];
    }
}
void countElements(int arr[], int& s)
{
    int n = s;
    s = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] != 0)
        {
            s++;
        }
    }
}
void printArray(int arr[], int s)
{
    for (int i=0; i<s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
