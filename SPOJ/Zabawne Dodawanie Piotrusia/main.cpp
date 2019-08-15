#include <sstream>
#include <string>
#include <iostream>

using namespace std;

string getPalindrom (string);

int main() {

    ostringstream ss;

    int t;

    cin >> t;
    for (int i=0; i<t; i++)
    {
        string sLiczba, sPalindrom;
        int nLiczba = 0;
        int nIle = 1;
        cin >> nLiczba;
        ss << nLiczba;
        sLiczba = ss.str();

        if (sLiczba = getPalindrom(sLiczba))
        {
            cout << sLiczba << " " << nIle;
        }
      cout << sLiczba << endl;
    }

return 0;
}

string getPalindrom (word);
{
    int length = word.length();
    string sPalindrom;
            for (int i=length-1; i>=0; i--)
            {
            sPalindrom[i] = word[i];
            }
    cout << sPalindrom;
}
