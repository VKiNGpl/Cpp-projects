#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char fname[20], lname[20], fullname[45];

    cout << "Enter your first name: ";
    cin.getline(fname, 20);

    cout << "Enter your last name: ";
    cin.getline(lname, 20);

    strcpy(fullname, lname);
    strcat(fullname, ", ");
    strcat(fullname, fname);

    cout << "Here's the information in a single string: " << fullname << endl;

    return 0;
}
