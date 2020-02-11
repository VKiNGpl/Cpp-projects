#include <iostream>

using namespace std;

int main()
{
    string sWord;
    int nHowMany = 0;

    cout << "Enter words (to stop, type the word \"done\"):\n";

    cin >> sWord;
    while (sWord != "done")
    {
        nHowMany++;
        cin >> sWord;
    }

    cout << "You entered a total of " << nHowMany << " words.\n";


    return 0;
}
