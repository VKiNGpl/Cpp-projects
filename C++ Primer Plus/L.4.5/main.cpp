// insert3.cpp -- reading more than one word with get() &
#include <iostream>

using namespace std;

int main()
{
const int ArSize = 20;
char name[ArSize];
char dessert [ArSize];

cout << "Enter your name:\n";
cin.get(name, ArSize).get();                  //read string, newline
cout << "Enter your favorite dessert:\n";
cin.get(dessert, ArSize).get();
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ".\n";

return 0;
}
