// textin2.cbp -- using cin.get(char)
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);        // use the cin.get(ch) function

    while (ch != '#')   // test the character
    {
        cout << ch;     // echo the character
        ++count;        // count the character
        cin.get(ch);     // use it again
    }

    cout << endl << count << " characters read\n";

    return 0;
}
