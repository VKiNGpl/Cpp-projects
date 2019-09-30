// hexoct1.cpp -- shows hex and octal literals
#include <iostream>

using namespace std;

int main()
{
    int chest = 42;     // decimal integer literal
    int waist = 42;   // hexadecimal integer literal
    int inseam = 42;   // octal integer literal

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex;        // manipulator for changing number base
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << oct;        // manipulator for changing number base
    cout << "inseam = " << inseam << " (042 in octal)\n";

    return 0;
}
