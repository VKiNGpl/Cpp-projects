#include <iostream>
#include <cstdlib>

using namespace std;

int month_nr;

int main()
{
    cout<< "Enter month number: ";
    if (!(cin >> month_nr))
        {
        cerr<< "This is not a month number!";
        exit(0);
        }
        cout<< endl;
    switch(month_nr)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout<< "This moth has 31 days!";
    break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout<< "This month has 30 days!";
    break;

    case 2:
        {
            int year;
            cout<< "Enter year: ";
            cin >> year;
            cout<< endl;
        if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
                cout<< "This month has 29 days!";
        else    cout<< "This month has 28 days!";
        }
    break;
    default:    cout<< "Invalid month number!";
    }
    return 0;
}
