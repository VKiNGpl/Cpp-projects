#include <iostream>

using namespace std;

void InitArray(int[], int);
void PrintPrimes(int[], int);

int main()
{
    int nArray[998];
    int nSize = sizeof nArray/4;
    InitArray(nArray, nSize);
    PrintPrimes(nArray, nSize);

    return 0;
}
void InitArray(int arr[], int s)
{
    for (int i=0; i<=s; i++)
    {
        arr[i]=i+2;
    }
}
void PrintPrimes(int arr[], int s)
{
    for(int i=0; i<s-1; i++)
        if(arr[i]!=1)
        {
            cout << arr[i] << " ";
            for (int j=i+1; j<s-1; j++)
            {
                if (arr[j]%arr[i]==0)
                {
                    arr[j]=1;
                }
            }
        }
}
