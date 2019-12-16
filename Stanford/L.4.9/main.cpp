/*
 * File: wordfreq.cpp
 * ------------------
 * This program computes the frequency of words in a text file.
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cctype>
#include "genlib.h"     // Stanford lib
#include "simpio.h"     // Stanford lib
#include "map.h"        // Stanford lib
#include "scanner.h"    // Stanford lib

// Private function prototypes

void CreateFrequencyTable(ifstream& infile, Map<int>& wordCounts);
void DisplayWordCount(Map<int>& wordCounts);
void AskUserForInputFile(string prompt, ifstream& infile);
bool IsAllAlpha(string& str);

int main()
{
    ifstream infile;
    Map<int> wordCounts;

    AskUserForInputFile(infile);
    CreateFrequencyTable(infile, wordCounts);
    infile.close();

    DisplayWordCount(wordCounts);

    return 0;
}

/*
 * Creates a frequency table that reads through the input file
 * and counts how often each word appears. The client supplies
 * both the input file stream and the map used to keep track of
 * the word count.
 */

void CreateFrequencyTable(ifstream& infile, Map<int>& wordCounts)
{
    Scanner scanner;
    scanner.setInput(infile);
    scanner.setSpaceOption(Scanner::IgnoreSpaces);

    while (scanner.hasMoreTokens())
    {
        string word = ConvertToLowerCase(scanner.nextToken());

        if (IsAllAlpha(word))
        {
            if (wordCounts.containsKey(word))
                wordCounts[word]++;
            else
                wordCounts[word] = 1;
        }
    }
}

/*
 * Displays the count for each word in the frequency table.
 */

void DisplayWordCount(Map<int>& wordCounts)
{
    foreach (string word in wordCounts)
    {
        cout << left << setw(15) << word
             << right << setw(5) << wordCounts[word] << endl;
    }
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

bool IsAllAlpha(string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (!isalpha(str[i])) return false;
    }
    return true;
}
