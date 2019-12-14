/*
 * File: revfile.cbp
 * -----------------
 * This program reads in a text file and then displays the lines of
 * the file in reverse order.
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// Function prototypes

void ReadTextFile(ifstream& infile, vector<string>& lines);
void AskUserForInputFile(string prompt, ifstream& infile);
void PrintReversed(vector<string>& lines);

int main()
{
    ifstream infile;
    AskUserForInputFile("Input file: ", infile);
    vector<string> lines;
    ReadTextFile(infile, lines);
    infile.close();
    PrintReversed(lines);

    return 0;
}

// Reads an entire file into the vector<string> supplied by the user.

void ReadTextFile(ifstream& infile, vector<string>& lines)
{
    while (true)
    {
        string line;
        getline(infile, line);
        if (infile.fail()) break;
        vector<string>::iterator it = lines.end();
        lines.insert(it, line);
        //lines.add(line); // moze nie dzialac - tylko Stanford libki
    }
}

/* Opens a text file whose name is entered by the user. If the file
 * does not exist, the user is given additional chances to enter a
 * valid file. The prompt string is used to tell the user what kind
 * of file is required.
 */

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

// Prints the lines from the vector<string> in reverse order.

void PrintReversed(vector<string>& lines)
{
    for (int i = lines.size() - 1; i >=0; i--)
    {
        cout << lines[i] << endl;
    }
}
