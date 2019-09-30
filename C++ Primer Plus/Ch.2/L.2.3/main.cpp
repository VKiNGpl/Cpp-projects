#include <iostream>

using namespace std;

int carrots;

int main()
{
    cout << "How many carrots do you have? ";
    cin >> carrots;
    cout << "Here are two more! ";
    carrots = carrots + 2;
    //the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}
