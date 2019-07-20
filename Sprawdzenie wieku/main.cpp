#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Podaj wiek: ";
    cin>>wiek;
    cout << "\n";

    if ((wiek>=1) && (wiek<18))
    {
        cout<<"Nie jestes pelnoletni i nie mozesz kandydowac na prezydenta!";
    }
    else if ((wiek>=18) && (wiek<35))
    {
        cout<<"Jestes pelnoletni, ale nie mozesz kandydowac na prezydenta!";
    }
        else if ((wiek>=35) && (wiek<=120))
    {
        cout<<"Jestes pelnoletni i mozesz kandydowac na prezydenta!";
    }
else
    {
        cout<<"Niepoprawny wpis";
    }
    cout << "\n";

    return 0;
}
