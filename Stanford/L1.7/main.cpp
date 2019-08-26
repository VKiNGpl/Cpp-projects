#include <iostream>

using namespace std;

bool IsPerfect(int);

int main()
{
    for (int i=1; i<10000; i++)
        if (IsPerfect(i))
            cout << i << endl;

    return 0;
}
bool IsPerfect(int N)
{
    int nSum = 0;
    for (int i=1; i<N; i++)
    {
        if (N%i == 0)
            nSum += i;
    }
    return (nSum == N);
}
