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
    CandyBar choice[3];

    choice[0] = {"Mocha Munch", 2.3, 350},
    choice[1] = {"Mars", 3, 450},
    choice[2] = {"Snickers", 23, 150};

    for (int i=0; i<3; i++)
    {
    cout << choice[i].name << endl;
    cout << choice[i].weight << endl;
    cout << choice[i].cal << endl << endl;
    }

    return 0;
}
