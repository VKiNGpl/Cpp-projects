// num_test.cbp -- use numeric test in for loop
#include <iostream>

using namespace std;

int main()
{
    int limit, i;
    cout << "Enter the starting countdown value: ";
    cin >> limit;

    for (i = limit; i; i--)     // quits when i is 0
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;

    return 0;
}
