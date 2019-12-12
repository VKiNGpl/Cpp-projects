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
    pizza* ppizza = new pizza;

    cout << "Enter diamater: ";
    cin >> ppizza->diam;
    cout << "Enter the brand name: ";
    cin >> ppizza->brand;
    cout << "Enter weight: ";
    cin >> ppizza->weight;

    cout << endl;
    cout << ppizza->brand << endl;
    cout << ppizza->diam << endl;
    cout << ppizza->weight << endl;

    return 0;
}
