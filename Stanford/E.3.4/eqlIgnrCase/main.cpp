#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string);
bool equalIgnoringCase(string, string);

int main()
{
    string str1, str2;
    cout << "Type in two words to compare if they are equal ignoring case:" << endl;
    getline(cin, str1);
    getline(cin, str2);
    cout << endl;
    if (equalIgnoringCase(str1, str2))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

string toLower(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}
bool equalIgnoringCase(string str1, string str2)
{
    if (toLower(str1) == toLower(str2))
        return true;
    else
        return false;
}
