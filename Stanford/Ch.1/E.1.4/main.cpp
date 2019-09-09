#include <iostream>

using namespace std;

int Sum(int);

int main()
{
    int N;

    cin >> N;
    cout << Sum(N) << endl;

    return 0;
}
int Sum(int n)
{
    int nSum = 0;

    for (int i=0; i<n; i++)
    {
        if (i%2 != 0)
        nSum += i;
    }
    return nSum;
}
