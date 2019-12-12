#include <iostream>

using namespace std;

int main()
{
    string fname, lname;
    char grade;
    int age;

    cout << "What is your name? ";
    getline(cin, fname);
    cout << "What is your last name? ";
    cin >> lname;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << (char)(grade + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
