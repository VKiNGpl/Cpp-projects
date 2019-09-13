#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomize();
double randD();
double randAverage(int);

int main()
{
    int nHowMany;

    randomize();

    cout << "Enter the number of random doubles to average: ";
    cin >> nHowMany;

    cout << randAverage(nHowMany) << endl;
}

void randomize()
{
    srand(time(NULL));
}

double randD()
{
    rand();
    return double(rand()) / (double(RAND_MAX) + 1);
}

double randAverage(int n)
{
    double nAverage = 0;
    for (int i=0; i<n; i++)
    {
        nAverage += randD();
    }

    return nAverage/n;
}
