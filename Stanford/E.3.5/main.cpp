#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string capitalize(string);


int main()
{
    string str;
    cout << "Type in a sentence to capitalize:" << endl;
    getline(cin, str);
    cout << endl;
    cout << capitalize(str);

    return 0;
}

string capitalize(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    str[0] = char(toupper(str[0]));

    return str;
}
