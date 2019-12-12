#include <iostream>

using namespace std;

struct pizza
{
    string brand;
    int diam;
    float weight;
};

int main()
{
    pizza roma;

    cout << "Enter the brand name: ";
    cin >> roma.brand;
    cout << "Enter diamater: ";
    cin >> roma.diam;
    cout << "Enter weight: ";
    cin >> roma.weight;

    cout << endl;
    cout << roma.brand << endl;
    cout << roma.diam << endl;
    cout << roma.weight << endl;

    return 0;
}
