#include <iostream>
#include <conio.h>

using namespace std;

long long llWPop;
long double ldCPop;

int main()
{
    cout << "Enter the world's population: ";   cin >> llWPop;
    cout << "Enter the population of the US: "; cin >> ldCPop;
    float fPercOfTot = ldCPop * 100 / llWPop;
    cout << "The population of the US is " << fPercOfTot << "% of the world population.";

    getch();
    return 0;
}
