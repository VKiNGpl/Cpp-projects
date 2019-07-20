#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witaj w naszym bankomacie!" << endl;
    cout << "\n";
    cout << "Podaj numer PIN: ";
    cin >> PIN;
    cout << "\n";

    if(PIN=="0719")
    {
        cout<<"Poprawny PIN!";
    }
    else
        cout<<"Niepoprawny PIN!";
    cout << "\n";

    return 0;
}
