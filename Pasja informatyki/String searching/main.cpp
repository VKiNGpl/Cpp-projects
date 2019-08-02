#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sent="Job done.";
    string lookup="done";

    size_t position=sent.find(lookup);

    if (position!=string::npos)
        cout << "Found in position: " << position;
    else
        cout << "Unable to find!";

    return 0;
}
