#include <iostream>
#include "randword.h"

using namespace std;

void printInsr(void);

int main()
{
    string words[3] {foo, bar, bez};


    printInsr();

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
