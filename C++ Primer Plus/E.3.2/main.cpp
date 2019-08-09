#include <iostream>
#include <conio.h>

using namespace std;

int feetToInches(int, int);         // converts height in feet and inches to inches
float inchesToMeters(int);          // converts inches to meters
float poundsToKilograms(int);       // converts pounds to kilograms
float BMI(float, float);            // calculates BMI

const float fToI = 12;
const float iToM = 0.0254;
const float pToKg = 0.4545454545454545;

int main()
{
    int nFeet, nInches, nPounds;

    cout << "Enter your height in feet and inches:_ __\b\b\b\b"; cin >> nFeet >> nInches;
    cout << "Enter your weight in pounds:___\b\b\b"; cin >> nPounds;
    cout << "\nYour height is " << feetToInches(nFeet, nInches) << " in inches, that is the same as "
         << inchesToMeters(feetToInches(nFeet, nInches)) << " in meters!\n\n";
    cout << "Your weight is " << poundsToKilograms(nPounds) << " in kilograms!\n\n";
    cout << "Your BMI is " << BMI(poundsToKilograms(nPounds), inchesToMeters(feetToInches(nFeet, nInches))) << " !\n";


    getch();
    return 0;
}
int feetToInches(int f, int i)
{
    return f * fToI + i;
}
float inchesToMeters(int i)
{
    return i * iToM;
}
float poundsToKilograms(int p)
{
    return p * pToKg;
}
float BMI(float kg, float m)
{
    return kg / (m*m);
}
