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
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << snack.name << endl;
    cout << snack.weight << endl;
    cout << snack.cal << endl;

    return 0;
}
