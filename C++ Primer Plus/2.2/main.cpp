//carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

using namespace std;

int carrots;            //declare an integer variable

int main()
{
    cout << "I have ";
    carrots = 25;               //assign a value to the variable
    cout << carrots;            //display the value of variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;      //modify the variable
    cout << "Crunch, crunch. Now I have " << carrots <<" carrots." << endl;

    return 0;
}
