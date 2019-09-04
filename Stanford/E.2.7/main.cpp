#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void SortHist(int[], int[], int);
void PrintHist(int[]);
void MaxHeight(int[], int&);
void PrintStar(int[], int);

int main()
{
    int nScores[] {100, 95, 47, 88, 86, 92, 75, 89, 81, 70, 55, 80};
    int nRanges[] {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int nSize = sizeof nScores / sizeof nScores[0];
    int nMaxHist = 0;
    string sScoreTab[nMaxHist][nSize];

    SortHist(nScores, nRanges, nSize);
    MaxHeight(nRanges, nMaxHist);
    PrintStar(nRanges, nMaxHist);
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
    cout << setw(4) << "0 ";
    cout << setw(4) << "10 ";
    cout << setw(4) << "20 ";
    cout << setw(4) << "30 ";
    cout << setw(4) << "40 ";
    cout << setw(4) << "50 ";
    cout << setw(4) << "60 ";
    cout << setw(4) << "70 ";
    cout << setw(4) << "80 ";
    cout << setw(4) << "90 ";
    cout << setw(5) << "100 ";
    cout << endl;
}
void MaxHeight(int range[], int& m)
{
    for (int i=0; i<=10; i++)
    {
        if (range[i]>m)
            m = range[i];
    }
}
void PrintStar(int arr[], int n)
{
    for (int i=n; i>0; i--)
    {
        for (int j=0; j<=10; j++)
        {
            if (arr[j]>=i)
                cout << "  * ";
            else
                cout << "    ";
        }
        cout << endl;
    }
}
