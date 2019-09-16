#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    char str;
    int words = 0, chars = 0, lines = 0;
    string sFilename;
    ifstream twinkle;

    cout << "File: ";
    cin >> sFilename;
    twinkle.open(sFilename.c_str());

    if(twinkle.good()==false)
    {
        cout << "File does not exist!";
        exit(0);
    }

    while (str != EOF)
    {
    str = twinkle.get();
    if (str == '\n' || str == EOF) lines++;
    if (str == ' ' || str == '\n' || str == EOF) words++;
    chars++;
    }

    cout << "Lines:" << setw(5) << lines << endl;
    cout << "Words:" << setw(5) << words << endl;
    cout << "Chars:" << setw(5) << chars << endl;

    twinkle.close();

    return 0;
}
