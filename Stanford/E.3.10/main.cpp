#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream carroll;
    ofstream buffer;
    string sFilename;
    char cLetter;

    cout << "Input file: "; cin >> sFilename;
    carroll.open(sFilename.c_str());
    buffer.open("buffer.txt");

    if (carroll.good()==false)
    {
        cout << "File does not exist." << endl;
    }

    while(cLetter != EOF)
    {
        cLetter = carroll.get();
        if (cLetter != '<' && cLetter != EOF)
        {
        buffer << cLetter;
        }
    }

    buffer.close();
    carroll.close();

    return 0;
}
