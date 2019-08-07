#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

float fLiczba1, fLiczba2, fLiczba3, fLiczba4, fLiczba5, fAverage;
float fDifferance1, fDifferance2, fDifferance3, fDifferance4, fDifferance5, fDifToAv, fResult;

int main()
{
    cout << "Podaj 5 liczb z przecinkiem rozdzielonych spacja: ";
    cin >> fLiczba1 >> fLiczba2 >> fLiczba3 >> fLiczba4 >> fLiczba5;

    fAverage = (fLiczba1 + fLiczba2 + fLiczba3 +fLiczba4 + fLiczba5) / 5;

    fDifferance1 = fAverage - fLiczba1;
    fDifferance2 = fAverage - fLiczba2;
    fDifferance3 = fAverage - fLiczba3;
    fDifferance4 = fAverage - fLiczba4;
    fDifferance5 = fAverage - fLiczba5;

    fDifToAv = abs(fDifferance1), fResult = fLiczba1;
    if (abs(fDifferance2) < fDifToAv) fDifToAv = fDifferance2, fResult = fLiczba2;
    if (abs(fDifferance3) < fDifToAv) fDifToAv = fDifferance3, fResult = fLiczba3;
    if (abs(fDifferance4) < fDifToAv) fDifToAv = fDifferance4, fResult = fLiczba4;
    if (abs(fDifferance5) < fDifToAv) fDifToAv = fDifferance5, fResult = fLiczba5;

    cout << "Liczba o wartosci najbardziej zblizonej do sredniej z tych 5 liczb to: "
         << fResult << endl;
    cout << "Srednia to: " << fAverage << endl;
    cout << "Roznice: " << fDifferance1 << " " << fDifferance2 << " " <<  fDifferance3 << " "
         <<  fDifferance4 << " " <<  fDifferance5 << endl;

    getch();
    return 0;
}
//  Testy
//  1.5 3.14 7.5 1.25 3.42
//  -55 -44 -33 11 22
//  3 5 3 1 3
//  6.5 3.5 0 15 0

