/*
 * File: twoletters.cbp
 * --------------------
 * This program generates a list of the two-letter words.
 */

#include <iostream>
#include "genlib.h"     // Stanford lib
#include "lexicon.h"    // Stanford lib

int main ()
{
    Lexicon english("EnglishWords.dat");
    string word = "xx";

    for (char c0 = 'a'; c0 <= 'z'; c0++)
    {
        word[0] = c0;

        for (char c1 = 'a'; c1 <= 'z'; c1++)
        {
            word[1] = c1;

            if (english.containsWord(word))
            {
                cout << word << endl;
            }
        }
    }
    return 0;
}
