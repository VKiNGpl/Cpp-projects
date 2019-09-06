#include <iostream>

using namespace std;

void askForElements(double []);

int main()
{
    int howMany = 1;
    double *dArray;
    dArray = new double [howMany];

    cout << *dArray;

    delete [] dArray;

    return 0;
}
void askForElements(double [])
{

}
