// forstr1.cbp -- using for with a string
#include <iostream>

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main()
{
    cout << "Enter a word: ";

    string word;
    cin >> word;

    // display letters in reverse order
    for (int i = word.size() - 1; i >= 0; i--)
    {
        cout << word[i];
    }
    cout << "\nBye.\n";

    return 0;
}
