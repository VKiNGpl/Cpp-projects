#include <iostream>

using namespace std;

int main()
{
string word = "blablabla";
int length = word.length();
    string sPalindrom;
string *tablica;
tablica = new string [length];
            for (int i=length-1; i>=0; i--)
            {
            cout << word[i];
            tablica[i] = word[i];
            }
            cout << endl;

            for (int i=length-1; i>=0; i--)
            {
            cout << tablica[i];
            }
            string oo
            cout << endl << tablica;
    return 0;
}

