#include <iostream>

using namespace std;

struct car
{
    string sMake;
    int nYearMade;
};
int main()
{
    int nHowMany;

    cout << "How many cars do you wish to catalog? ";
    cin >> nHowMany;

    car* cars = new car[nHowMany];

    for (int i = 0; i < nHowMany; i++)
    {
        cin.ignore();
        cout << "Car #" << i + 1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].sMake);
        cout << "Please enter the year of production: ";
        cin >> cars[i].nYearMade;
    }
    cout << "Here is your collection:" << endl;

    for (int i = 0; i < nHowMany; i++)
    {
        cout << cars[i].nYearMade << " " << cars[i].sMake << endl;
    }

    return 0;
}
