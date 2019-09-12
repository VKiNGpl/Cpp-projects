#include <iostream>
#include <string>

using namespace std;

string PigLatin(string word);
int FindFirstVowel(string word);
bool isVowel(char word);

int main()
{
    string sLine;
    cin >> sLine;
    cout << PigLatin(sLine);

    return 0;
}

/*
Function: PigLatin
Usage: translation = pigLatin(word);
------------------------------------
This function translates a word from English to Pig Latin using
the rules specified in Chapter 3. The translated word is
returned as the value of the function.
*/

string PigLatin(string word)
{
    int vp = FindFirstVowel(word);
    if (vp == -1)
    {
        return word;
    }
    else if (vp == 0)
    {
        return word + "way";
    }
    else
    {
        string head = word.substr(0, vp);
        string tail = word.substr(vp);
        return tail + head + "ay";
    }
}

/*
Function: FindFirstVowel
Usage: k = FindFistVowel(word);
-------------------------------
This function returns the index position of the first vowel
in word. If word does not contain a vowel, FindFirstVowel
returns -1. The code for IsVowel appears in Chapter 1.
*/

int FindFirstVowel(string word)
{
    for (int i=0; i < word.length(); i++)
    {
        if (isVowel(word[i])) return i;
    }
    return -1;
}

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    else
        return false;
}
