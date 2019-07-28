#include <iostream>
#include <iomanip>

using namespace std;

long double fib[100000];int n;

int main()
{
    cout<<"How many Fibonacci numbers would you like to extrapolate: ";
    cin>>n;
    cout<<endl;

    fib[0]=1;
    fib[1]=1;

    for (int i=2; i<n; i++)
    {
      fib[i] = fib[i-1]+ fib[i-2];
    }

    cout<<setprecision(10000);

    //for (int i=0; i<n; i++)
    //{
    //  cout<<endl<<i+1<<" Fibonacci number: "<<fib[i];
    //}

    //cout<<endl<<n<<" Fibonacci number: "<<fib[n-1];

    cout<<"Golden ratio: "<<fib[n-1]/fib[n-2]<<endl;

    return 0;
}
