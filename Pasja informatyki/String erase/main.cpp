#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sent = "Job well done!";
    sent.erase(4,5);

    cout << sent;

    return 0;
}
