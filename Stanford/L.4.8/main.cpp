/*
 * File: spellcheck.cbp
 * --------------------
 * This program checks the spelling of words in an input file.
 */

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include "genlib.h"     // Stanford lib
#include "simpio.h"     // Stanford lib
#include "lexicon.h"    // Stanford lib
#include "scanner.h"    // Stanford lib

// Function prototypes

bool IsAllAlpha(string& str);
void AskUserForInputFile(string prompt, ifstream& infile);

int main()
{
    ifstream infile;
    Lexicon english("EnglishWords.dat");
    Scanner scanner;
    AskUserForInputFile("Input file: ", infile);
    scanner.setInput(infile);
    while (scanner.hasMoreTokens())
    {
        string word = scanner.nextToken();
        if (IsAllAlpha(word) && !english.containsWord(word))
        {
            cout << word << " is not in the dictionary" << endl;
        }
    }
    infile.close();

    return 0;
}

// Returns true if a string contains only alphabetic characters.

bool IsAllAlpha(string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!isalpha(str[i])) return false;
    }
    return true;
}

void AskUserForInputFile(string prompt, ifstream& infile)
{
    while (true)
    {
        cout << prompt;
        string filename;
        getline(cin, filename);
        infile.open(filename.c_str());
        if (!infile.fail()) break;
        cout << "Unable to open " << filename << endl;
        infile.clear();
    }
}
