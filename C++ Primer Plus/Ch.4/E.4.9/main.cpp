#include <iostream>

using namespace std;

struct CandyBar
{
    string name;
    float weight;
    int cal;
};

int main()
{
    CandyBar* cp = new CandyBar[3];

    cp[0] = {"Mocha Munch", 2.3, 350},
    cp[1] = {"Mars", 3, 450},
    cp[2] = {"Snickers", 23, 150};

    for (int i=0; i<3; i++)
    {
    cout << cp[i].name << endl;
    cout << cp[i].weight << endl;
    cout << cp[i].cal << endl << endl;
    }
    delete [] cp;

    return 0;
}
