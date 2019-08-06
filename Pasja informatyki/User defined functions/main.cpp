#include <iostream>

using namespace std;

float meters;                           // zmienna globalna

float howManyInches(float m)            // naglowek funkcji
    {
        return m * 39.37;               // cialo funkcji
    }

float howManyYards(float);

void howManyMiles(float);

int main()
{
    cout << "Enter the number of meters: ";
    cin >> meters;
    cout << meters << " meters is " << howManyInches(meters) << " in inches.\n";
    cout << meters << " meters is " << howManyYards(meters) << " in yards.\n";
    howManyMiles(meters);

    return 0;
}

float howManyYards(float x)
    {
        return x * 1.09;
    }

void howManyMiles(float z)
    {
        cout << meters << " meters is " << z * 0.0006213 << " in miles .\n";
    }
