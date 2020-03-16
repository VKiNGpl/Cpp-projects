#include <iostream>

using namespace std;

string isPalindrome(string);

int main()
{
    string str;
    cout << "Input a word or sentence to check if it's a palindrome:" << endl;
    getline(cin, str);
    cout << isPalindrome(str) << endl;

    return 0;
}
string isPalindrome(string str)
{
    for (int i=0; i < str.length()/2; i++)
    {
        if (str[i] != str[str.length()-1-i])
            return "false";
    }
    return "true";
}
