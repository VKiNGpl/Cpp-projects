#include <iostream>

using namespace std;

int* getDynamicIntegerArray(int, int&);

int main()
{
    int nHowMany = 1, nSentinel;
    int* ArrPtr;

    cout << "Enter the sentinel: ";
    cin >> nSentinel; cin.ignore();
    ArrPtr = getDynamicIntegerArray(nSentinel, nHowMany);

    for (int i=0; i<nHowMany; i++)
    {
    cout << ArrPtr[i] << endl;
    }

    return 0;
}
int* getDynamicIntegerArray(int sentinel, int& n)
{
   int* nPtr;
   int dynamicArray[n];
   nPtr = new int[n];

   for (int i=0; i<n; i++)
   {
        cin >> nPtr[i];
        n++;
        if (nPtr[i] == sentinel)
        {
            n = i;
        }
   }

   return nPtr;
}
