#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string sent = "Job done.";

    transform(sent.begin(),sent.end(),sent.begin(),::toupper);
    cout << sent << endl;
    transform(sent.begin(),sent.end(),sent.begin(),::tolower);
    cout << sent << endl;

    return 0;
}
