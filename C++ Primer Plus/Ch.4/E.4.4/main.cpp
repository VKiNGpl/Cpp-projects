#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string fname, lname, fullname;

    cout << "Enter your first name: ";
    getline(cin, fname);

    cout << "Enter your last name: ";
    getline(cin, lname);

    fullname = lname + ", " + fname;

    cout << "Here's the information in a single string: " << fullname << endl;

    return 0;
}
