#include <iostream>
#include <cstring>

using namespace std;

string subString(string, int, int);

int main()
{
    string str;
    int pos, nLen;
    cout << "Enter a string:" << endl;
    getline(cin, str);
    cout << "Enter substring starting position: ";
    cin >> pos;
    cout << "Enter substring length: ";
    cin >> nLen;
    cout << subString(str, pos, nLen);

    return 0;
}
string subString(string s, int p, int l)
{
    string sub;
    int slen = s.length();

    if(p < 0)
    {
        p=0;
    }
    if(l > slen-p)
    {
        l = slen-p;
    }
    if(p > slen-1)
    {
        return sub;
    }
    for (int i=p; i<l+p; i++)
    {
        sub += s[i];
    }
    return sub;
}
