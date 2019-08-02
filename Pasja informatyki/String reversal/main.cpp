#include <iostream>

using namespace std;

int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int length = word.length();

    for (int i=length-1; i>=0; i--)
    {
        cout << word[i];
    }

    return 0;
}
