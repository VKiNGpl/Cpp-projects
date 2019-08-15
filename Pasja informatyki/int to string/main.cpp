// C++ code to demonstrate string stream method
// to convert number to string.
#include<iostream>
#include <sstream> // for string streams
#include <string> // for string
using namespace std;
int main()
{
	int num = 2016;

	// declaring output string stream
	ostringstream str1;

	// Sending a number as a stream into output
	// string
	str1 << num;

	// the str() converts number into string
	string geek = str1.str();

	// Displaying the string
	cout << "The newly formed string from number is : ";
	cout << geek << endl;

	return 0;
}
/*
#include <sstream>
#include <string>
#include <iostream>

using namespace std;
int main() {

    ostringstream sss;

    string sliczba;
    int num = 123456;
    sss << num;
    sliczba = sss.str();
    cout << sss.str() << endl;
    cout << sliczba[4] << endl;

return 0;
}
*/

