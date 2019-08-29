#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    /*   ifstream input;
       input.open("data.txt");

       string word;
       input >> word;
       input >> word;l
       int age;
       input >> age;
       input >> word;
       input >> word;

       if (input >> word) {
           cout << "successful!" << endl;
       }

       input.close();

       return 0;
    }
    */
    ifstream input;
    input.open("poem.txt");
    string token;
    int lines = 0;
    if (input.fail())
    {
        cout << "womp womp" << endl;
    }
    else
    {
        while (input >> token)
        {
            cout << token << endl;
            lines++;
        }
    }
    cout << "Here is a word " << lines << " total word." << endl;
    input.close();
    return 0;
}
