#include <iostream>

using namespace std;

int main()
{
    int nRows;

    cout << "Please enter the number of rows: ";
    cin >> nRows;

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 1; j < nRows - i; j++)
        {
            cout << ".";
        }

        for (int k = nRows; k <= nRows + i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
