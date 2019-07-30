#include <iostream>
#include <fstream>

using namespace std;

string f_name, l_name;
long long int ph_number;

int main()
{
    cout << "Enter first name: ";    cin >> f_name;
    cout << "Enter last name: ";     cin >> l_name;
    cout << "Enter phone number: ";   cin >> ph_number;

    fstream file;

    file.open("directory.txt", ios::out | ios::app);

        file<<f_name<<endl;
        file<<l_name<<endl;
        file<<ph_number<<endl;

    file.close();

    return 0;
}
