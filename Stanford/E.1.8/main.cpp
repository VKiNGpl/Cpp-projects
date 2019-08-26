#include <iostream>

using namespace std;

void PrimeFactors(int);

int main()
{
    int N;

    cin >> N;

    PrimeFactors(N);

    return 0;
}

void PrimeFactors(int n)
{
    for(int i=2; i<n; i++)
    {
        if (n%i==0)
        {
        cout << " * " << i;
        n /= i;
        }
    }
}
