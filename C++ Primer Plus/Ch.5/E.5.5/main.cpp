#include <iostream>

using namespace std;

int main()
{
    int nMonthlySales[3][12], nYearlySales = 0, nTotalSales = 0;
    string sMonth[12] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"
                        };

    for (int year = 1; year <= 3; year++)
    {
        for (int i = 0; i < 12; i++)
        {
            cout << "Please enter the number of monthly sales for "
                 << sMonth[i] << " of year " << year << ": ";
            cin >> nMonthlySales[year-1][i];
            system("cls");
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            nYearlySales += nMonthlySales[i][j];
        }
        cout << "Total sales for year " << i + 1 << ": " << nYearlySales << endl;

        nTotalSales += nYearlySales;
        nYearlySales = 0;
    }

    cout << "Total sales for the 3 years: " << nTotalSales << endl;

    return 0;
}
