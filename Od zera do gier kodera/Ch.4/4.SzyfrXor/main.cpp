#include <iostream>

using namespace std;

string SzyfrowanieXor(string a_Text, string a_Haslo)
{
    string Wynik;
    for (size_t i=0; i<a_Text.size(); i++)
    {
        Wynik += a_Text[i] ^ a_Haslo[i % a_Haslo.size()];
        return Wynik;
    }
}

int main()
{
    string strInput, strPassword;
    cout << "Enter message to encrypt: " << endl;
    cin >> strInput;
    cout << "Enter password: " << endl;
    cin >> strPassword;
    cout << SzyfrowanieXor(strInput, strPassword);

    return 0;
}
