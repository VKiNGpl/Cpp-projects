#include <iostream>
#include <conio.h>

using namespace std;

string mice();
string run ();

int main()
{
    cout << mice() << endl;
    cout << mice() << endl;
    cout << run()  << endl;
    cout << run()  << endl;

    getch();
    return 0;
}

string mice()
{
    return "Three blind mice";
}
string run()
{
    return "See how they run";
}
