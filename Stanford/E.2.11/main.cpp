#include <iostream>

using namespace std;

int* indexArray(int);

int main()
{
    int nHowMany;

    cout << "How many elements in the Array?: ";
    cin >> nHowMany;

    for (int i=0; i<nHowMany; i++)
    {
    cout << indexArray(nHowMany)[i] << endl;
    }

    return 0;
}
int* indexArray(int n)
{
    int* nArray = new int[n];
    for (int i=0; i<n; i++)
    {
        nArray[i] = i;
    }

    return nArray;
}
