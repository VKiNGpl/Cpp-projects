#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int nLiczb = 0;
    double dSuma = 0;
    double* dArrPt = new double[100];
    for (int i = 0;; i++)
    {
        cout << "Podaj liczby do wyliczenia sredniej.\nWpisz \"0\" aby zakonczyc wpisywanie i wyliczyc srednia.\n";
        cout << "Podaj liczbe numer " << i + 1 << ": ";
        cin >> dArrPt[i];
        if (dArrPt[i] == 0) break;
        dSuma += dArrPt[i];
        nLiczb++;
        system("cls");

    }
    cout << "Srednia tych liczb to: " << dSuma / nLiczb << endl;

    return 0;
}
