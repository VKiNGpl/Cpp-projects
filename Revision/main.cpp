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

int FindFirstVowel(string word)
{
    for (unsigned i=0; i < word.length(); i++)
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
