#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sent = "Job well done!";
    string newsent = sent.substr(9,5);

    cout << newsent;

    return 0;
}
