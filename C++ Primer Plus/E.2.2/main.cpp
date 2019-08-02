#include <iostream>
#include <conio.h>

using namespace std;

int num_yards(int);

int main()
{
    int furlongs;

    cout << "Please input distance in furlongs: ";
    cin >> furlongs;

    cout << "\nThat is " << num_yards(furlongs) << " yards!\n";

    getch();
    return 0;
}

int num_yards(int f)
    {
        return 220 * f;
    }
