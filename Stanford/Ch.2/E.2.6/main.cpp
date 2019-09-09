#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void SortHist(int[], int[], int);
void PrintHist(int[]);
void PrintStar(int);

int main()
{
    int nScores[] {100, 95, 47, 88, 86, 92, 75, 89, 81, 70, 55, 80};
    int nRanges[] {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nSize = sizeof nScores / sizeof nScores[0];

    SortHist(nScores, nRanges, nSize);
    PrintHist(nRanges);

    return 0;
}
void SortHist(int arr[], int range[], int s)
{
    for (int i=0; i<s; i++)
    {
        if(arr[i]>=0 && arr[i]<10)
            range[0] +=1;
        else if(arr[i]>=10 && arr[i]<20)
            range[1] +=1;
        else if(arr[i]>=20 && arr[i]<30)
            range[2] +=1;
        else if(arr[i]>=30 && arr[i]<40)
            range[3] +=1;
        else if(arr[i]>=40 && arr[i]<50)
            range[4] +=1;
        else if(arr[i]>=50 && arr[i]<60)
            range[5] +=1;
        else if(arr[i]>=60 && arr[i]<70)
            range[6] +=1;
        else if(arr[i]>=70 && arr[i]<80)
            range[7] +=1;
        else if(arr[i]>=80 && arr[i]<90)
            range[8] +=1;
        else if(arr[i]>=90 && arr[i]<100)
            range[9] +=1;
        else if(arr[i]==100)
            range[10] +=1;
    }
}
void PrintHist(int r[])
{
    cout << setw(5) << "0: ";
    PrintStar(r[0]);
    cout << endl;
    cout << setw(5) << "10: ";
    PrintStar(r[1]);
    cout << endl;
    cout << setw(5) << "20: ";
    PrintStar(r[2]);
    cout << endl;
    cout << setw(5) << "30: ";
    PrintStar(r[3]);
    cout << endl;
    cout << setw(5) << "40: ";
    PrintStar(r[4]);
    cout << endl;
    cout << setw(5) << "50: ";
    PrintStar(r[5]);
    cout << endl;
    cout << setw(5) << "60: ";
    PrintStar(r[6]);
    cout << endl;
    cout << setw(5) << "70: ";
    PrintStar(r[7]);
    cout << endl;
    cout << setw(5) << "80: ";
    PrintStar(r[8]);
    cout << endl;
    cout << setw(5) << "90: ";
    PrintStar(r[9]);
    cout << endl;
    cout << setw(5) << "100: ";
    PrintStar(r[10]);
    cout << endl;
}
void PrintStar(int r)
{
    for (int i=1; i<=r; i++)
    {
        cout << "*";
    }
}
