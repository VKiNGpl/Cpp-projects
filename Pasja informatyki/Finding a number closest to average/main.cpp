#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{

    float fDifferance[4];
    float fNum1, fNum2, fNum3, fNum4, fNum5, fDevFromAv, fAverage, fResult, fSum;

    cout << "Enter 5 numbers divided by space: ";
    cin >> fNum1 >> fNum2 >> fNum3 >> fNum4 >> fNum5;

    float fNum[5] = {fNum1, fNum2, fNum3, fNum4, fNum5};

    for (int i=0; i<=4; i++)
    {
        fSum += fNum[i];
    }
    fAverage = fSum / 5;

    cout << "\nAverage is: " << fAverage << endl;

    for (int i=0; i<=4; i++)
    {
        fDifferance[i] = fAverage - fNum[i];
    }

    cout << "\nDeviation from average: \n";
    for (int i=0; i<=4; i++)
    {
        cout << fDifferance[i] << endl;
    }

    fDevFromAv = abs(fDifferance[0]), fResult = fNum[0];

    for (int i=1; i<=4; i++)
    {
        if (abs(fDifferance[i]) < fDevFromAv)
            fDevFromAv = fDifferance[i], fResult = fNum[i];
    }

    cout << "\nThe number(s) with the value closest to the average: " << fResult;

    for (int i=0; i<=4; i++)
    {
        if (fDevFromAv == abs(fDifferance[i]) && (fResult != fNum[i]))
            cout << " and " << fNum[i];
    }
    cout << endl;

    /*
        float liczba[5];
        float suma = 0;
        float srednia;
        float naj;

        for (int i=0; i<=4 ; i++)
        {
            cout << "Podaj " << i+1 << " liczbe: ";
            cin >> liczba[i];
            suma += liczba[i];
            srednia = suma / (i+1);
        }
        cout << "Srednia liczb to: " << srednia << endl;
        naj = fabs(srednia-liczba[0]);
        for (int i=0; i<=4; i++)
        {
            if (fabs(srednia - liczba[i])<fabs(naj))
                naj = fabs(srednia-liczba[i]);
        }
        for (int i=0; i<=4; i++)
        {
            if (fabs(srednia - liczba[i]) == naj)
                cout << "Liczba najblizsza sredniej to: " << liczba[i] << endl;
        }
    */
    /*
            float fLiczba1, fLiczba2, fLiczba3, fLiczba4, fLiczba5, fAverage;
            float fDifferance1, fDifferance2, fDifferance3, fDifferance4, fDifferance5, fDifToAv, fResult;

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

            cout << "Srednia to: " << fAverage << endl;

            cout << "Odchylenie od sredniej: " << fDifferance1 << " " << fDifferance2 << " " <<  fDifferance3 << " "
                 <<  fDifferance4 << " " <<  fDifferance5 << endl;

            cout << "Liczba o wartosci najbardziej zblizonej do sredniej z tych 5 liczb to: " << fResult;

            if (fDifToAv == abs(fDifferance1) && (fResult != fLiczba1)) cout << " oraz " << fLiczba1;
            if (fDifToAv == abs(fDifferance2) && (fResult != fLiczba2)) cout << " oraz " << fLiczba2;
            if (fDifToAv == abs(fDifferance3) && (fResult != fLiczba3)) cout << " oraz " << fLiczba3;
            if (fDifToAv == abs(fDifferance4) && (fResult != fLiczba4)) cout << " oraz " << fLiczba4;
            if (fDifToAv == abs(fDifferance5) && (fResult != fLiczba5)) cout << " oraz " << fLiczba5;
            cout << endl;
    */
    getch();
    return 0;
}
//  Testy
//  1.5 3.14 7.5 1.25 3.42
//  -55 -44 -33 11 22
//  3 5 3 1 3
//  6.5 3.5 0 15 0

