#include <iostream>
#include <string>
#include "randword.h"

using namespace std;

static string dicArr[100];

void printInsr();
void randomize();
int getRandInt(int, int);
void printGuess(string);

int main()
{
    string dictSrc = "animals.txt", sWord;
    int nWords = 0;

    InitDictionary(dictSrc, dicArr, nWords);
    printInsr();
    sWord = ChooseRandomWord(dicArr, nWords);
    printGuess(sWord);

    return 0;
}
void printInsr(void)
{
    cout << "Welcome to hangman!\n"
         << "I will guess a secret word. On each turn, you guess\n"
         << "a letter. If the letter is in the secret word, I\n"
         << "will show you where it appears; if not, a part of\n"
         << "your body gets strung up on the scaffold. The\n"
         << "object is to guess the word before you are hung.\n";
}
void printGuess(string w)
{
    int n = w.length(), lives = 8;
    char puzzle[n], guess;
    for (int i=0; i<n; i++)
    {
        puzzle[i] = '-';
    }
    puzzle[n] = '\0';

    guess = char(toupper(guess));
    while (w != puzzle && lives != 0)
    {
        cout << "The word now looks like this: " << puzzle;
        cout << "\nYou have " << lives << " guesses left." << endl;
        cout << "Guess a letter: ";
        cin >> guess; guess = char(toupper(guess));

        for (int i=0; i<n; i++)
        {
            if(w[i] == guess)
            {
                puzzle[i] = w[i];
            }
            if(i == n-1 && w.find(guess)!=w.npos)
            {
                cout << "That guess is correct.\n";
            }
            else if (w.find(guess)==w.npos)
            {
                cout << "There are no " << guess << "'s in the word.\n";
                lives--;
                break;
            }
        }
    }

    if (w==puzzle)
    {
        cout << "You guessed the word: " << w << "\nYou win.\n";
    }
    else
    {
        cout << "You did not guess the word: " << w
             << "\nYou run out of guesses.\nYou lose.\n";
    }
}
