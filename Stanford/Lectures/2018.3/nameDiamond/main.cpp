#include <iostream>
#include <string>

using namespace std;

void nameDiamond(string);

int main()
{
    string name= "MARTY";

    nameDiamond(name);

    return 0;
}
void nameDiamond(string s)
{
    for (int i=0; i<s.length(); i++) {
        cout << s.substr(0, i+1) << endl;
    }
    for (int i=1; i<s.length(); i++) {
        for (int j=0; j<i; j++){
            cout << " ";
        }
        cout << s.substr(i) << endl;
    }
}
