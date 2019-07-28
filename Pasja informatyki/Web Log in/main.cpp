#include <iostream>

using namespace std;

string login, password;

int main()
{
    cout<<"Welcome to our website!\nPlease log in.\n\nLogin:";
    cin>>login;
    cout<<"Password:";
    cin>>password;
    cout<<endl;

    if ((login=="admin")&&(password=="redrum"))
    {
        cout<<"Login successful!\n";
    }
    else
    {
        cout<<"Login or password incorrect.\n";
    }
    return 0;
}
