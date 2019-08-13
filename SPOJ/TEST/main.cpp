#include <iostream>

using namespace std;

int main()
{
    int nNum;


    while (nNum != 42)
    {
            cin >> nNum;
            if (nNum == 42)
            {
                break;
            }
            cout << nNum << endl;
    }

    return 0;
}
