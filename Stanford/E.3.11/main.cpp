#include <iostream>
#include <ctime>
#include <cstdlib>
#include "randword.h"

using namespace std;

static string dicArr[100];

void printInsr();
void randomize();
int getRandInt(int, int);

int main()
{
    string dictSrc = "animals.txt";
    int nWords = 0;

    InitDictionary(dictSrc, dicArr, nWords);
    printInsr();
    randomize();
    ChooseRandomWord(dicArr, nWords);
    cout << ChooseRandomWord(dicArr, getRandInt(1, nWords));

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
void randomize()
{
    srand(time(NULL));
    rand();
}
int getRandInt(int low, int high)
{
    double d = double(rand()) / (double(RAND_MAX) + 1);
    int k = int(d * (high - low + 1));
    return low + k;
}
