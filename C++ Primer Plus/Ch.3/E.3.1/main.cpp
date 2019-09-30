#include <iostream>

using namespace std;

int toFeet(int);
const float iToF = 0.0833333333333333;

int main()
{
    int nInches;

    cout << "Enter your height in inches:__\b\b"; cin >> nInches;
    cout << "\nThat is " << toFeet(nInches) << " feet and " << nInches % 12<< " inches!\n";
    return 0;
}
int toFeet(int i)
{
    return i * iToF;
}
