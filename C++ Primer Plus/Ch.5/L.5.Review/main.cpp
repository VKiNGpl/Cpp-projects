#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <=64; i += i)
        cout << i << " ";

    cout << endl;

    int x = (1,024);
    cout << x;

    return 0;
}
