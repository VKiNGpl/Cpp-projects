#include <iostream>

using namespace std;

int population=1, hours=0;

int main()
{
    while(population<=1000000000)
    {
        hours++;
        population=population*2;

        cout<<"Time lapsed: "<<hours<<" bacteria count: "<<population<<endl;
    }

    return 0;
}
