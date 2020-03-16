#include <iostream>

using namespace std;

string encodeString(string, int);
void askForData();

int main()
{
    cout << "This program encodes messages using a cyclic cipher.\n"
         << "To stop, enter 0 as the key.\n";
    askForData();

    return 0;
}

void askForData()
{
    string sBase;
    int nKey;

    while (true)
    {
        cout << "Enter the key: ";
        cin >> nKey;
        if (nKey == 0)
            break;
        cin.ignore();
        cout << "Enter a message: ";
        getline(cin, sBase);
        cout << "Encoded message: ";
        cout << encodeString(sBase, nKey) << endl;
    }
}

string encodeString(string m, int k)
{
    k %= 25;
    for (int i=0, n=m.length(); i<n; i++)
    {
        if (m[i] >= 'A' && m[i] <= 'Z')
        {
            m[i] += k;
            if (m[i] > 'Z')
                m[i] -= 26;
            else if (m[i] < 'A')
                m[i] += 26;
        }
        else if ((m[i] >= 'a') && (m[i] <= 'z'))
        {
            m[i] += k;
            if(m[i]<0)
                m[i] -=26;
            if (m[i] > 'z')
            {
                m[i] -= 26;
            }
            else if (m[i] < 'a')
            {
                m[i] += 26;
            }
        }
    }
    return m;
}
