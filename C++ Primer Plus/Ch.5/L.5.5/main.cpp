// bigstep.cbp -- count as directed
#include <iostream>

using std::cout;    // a using declaration
using std::cin;
using std::endl;

int main()
{
    cout << "Enter an integer: ";

    int by;
    cin >> by;

    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i< 100; i = i + by)
    {
        cout << i << endl;
    }

    return 0;
}
