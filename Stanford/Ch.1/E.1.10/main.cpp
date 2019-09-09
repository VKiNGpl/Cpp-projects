#include <iostream>

using namespace std;

double LeibnizSeries();

int main()
{
    cout << LeibnizSeries()*4 << endl;

    return 0;
}

double LeibnizSeries()
{
    double dSum =0;
    for(double i=1; i<20000; i += 4)
    {
        dSum += 1/i - 1/(i+2);

    }
    return dSum;
}
