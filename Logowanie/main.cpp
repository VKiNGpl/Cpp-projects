#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Login: ";
    cin>>login;
    cout << "Haslo: ";
    cin>>haslo;
    cout << "\n";

    if((login=="admin")&&(haslo=="dziewanna"))
    {
        cout<<"Logowanie udane!";    }
    else
        cout<<"Logowanie nieudane!";
    cout << "\n";

    return 0;
}
