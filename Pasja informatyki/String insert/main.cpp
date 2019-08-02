#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sent = "Job well done!";
    sent.insert(4,"very ");

    cout << sent;

    return 0;
}
