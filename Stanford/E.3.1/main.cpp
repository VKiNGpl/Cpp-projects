#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomize();
double randD();

int main()
{
    int nHowMany;
    double nAverage = 0;

    randomize();
    cout << "Enter the number of random doubles to average: ";
    cin >> nHowMany;

    for (int i=0; i<nHowMany; i++)
    {
        nAverage += randD();
    }

    cout << nAverage/nHowMany << endl;
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
