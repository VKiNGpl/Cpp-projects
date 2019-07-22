#include <iostream>

using namespace std;

int population=1, hours=0;

int main()
{
    do
    {
        hours++;
        population=population*2;

        cout<<"Time lapsed: "<<hours<<" bacteria count: "<<population<<endl;
    } while(population<=1000000000);

    return 0;
}
