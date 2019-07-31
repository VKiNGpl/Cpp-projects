// convert.cpp -- converts stone to pounds

#include <iostream>

using namespace std;

int stonetolb(int);     // function prototype
int stone;

int main()
{

    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds.\n";

    return 0;
}
int stonetolb(int sts)
{
    return 14 * sts;
}
