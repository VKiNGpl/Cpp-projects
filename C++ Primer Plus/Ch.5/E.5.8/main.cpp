#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cWord[20];
    int nHowMany = 0;

    cout << "Enter words (to stop, type the word done):" << endl;

    cin >> cWord;
    while(strcmp(cWord, "done"))
    {
        nHowMany++;
        cin >> cWord;
    }

    cout << "You entered a total of " << nHowMany << " words.\n";

    return 0;
}
