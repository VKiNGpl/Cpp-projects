// forstr2.cbp -- reversing an array
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a word: ";
    string word;
    cin >> word;

    char temp;

    // physically modify string object
    for (int j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                       // start block
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }                       // end block
    cout << word << "\nDone\n";

    return 0;
}
