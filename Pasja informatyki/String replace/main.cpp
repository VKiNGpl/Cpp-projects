#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sent = "Job well done!";
    sent.replace(4,4,"nicely");

    cout << sent;

    return 0;
}
