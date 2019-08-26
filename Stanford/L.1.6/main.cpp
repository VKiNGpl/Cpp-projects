#include <iostream>

using namespace std;

long long RevNum(long long);

int main()
{
    long long nNum;

    cin >> nNum;
    cout << RevNum(nNum) << endl;

    return 0;
}

long long RevNum(long long n)
{
    long long nRev = 0;

    while (n!=0)
    {
        nRev += n%10;
        n /= 10;
        nRev *= 10;
    }
    return nRev/10;
}
