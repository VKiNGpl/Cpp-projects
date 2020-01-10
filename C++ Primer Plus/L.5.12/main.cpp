// compstr2.cbp -- comaring strings using arrays
#include <iostream>

using namespace std;

int main()
{
    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;

    return 0;
}
