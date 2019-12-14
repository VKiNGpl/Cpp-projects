#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "unicalc.h"

using namespace std;

int main()
{
    char chMultiple;
    long double ldDataSize;

    for (int i = 0; ; i++)
    {
        cout << "Enter the byte multiple format used to enter data size for conversion." << endl;
        cout << "Enter 'b' for bit, 'B' for byte, 'k' for kilobyte, 'm' for megabyte, \n'g' for gigabyte, or 't' for terabyte: ";
        cin >> chMultiple;
        if (chMultiple == 'b' || chMultiple == 'B' || chMultiple == 'k' || chMultiple == 'm'
                              || chMultiple == 'g' || chMultiple == 't')    break;
        system("cls");
    }

    cout << "Enter data size: ";
    cin >> ldDataSize;

    CCompUnitsCalc DataSizeCalc;
    DataSizeCalc.SetUnits((UNITS)chMultiple, ldDataSize);

    cout << endl;
    cout << "-" << setw(13) << fixed << setprecision(2) << "bits: " << DataSizeCalc.GetUnits(U_BIT) << endl;
    cout << "-" << setw(13) << fixed << setprecision(2) << "bytes: " << DataSizeCalc.GetUnits(U_BYTE) << endl;
    cout << "-" << setw(13) << fixed << setprecision(2) << "kilobytes: " << DataSizeCalc.GetUnits(U_KBYTE) << endl;
    cout << "-" << setw(13) << fixed << setprecision(2) << "megabytes: " << DataSizeCalc.GetUnits(U_MBYTE) << endl;
    cout << "-" << setw(13) << fixed << setprecision(2) << "gigabytes: " << DataSizeCalc.GetUnits(U_GBYTE) << endl;
    cout << "-" << setw(13) << fixed << setprecision(2) << "terabytes: " << DataSizeCalc.GetUnits(U_TBYTE) << endl;
    cout << endl;

    return 0;
}
