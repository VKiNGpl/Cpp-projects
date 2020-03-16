#include <iostream>
#include <vector>

using namespace std;

int main()
{
/* 1
    char actors[30];
    short betsie[100];
    float chuck[13];
    long double dipsea[64];
*//* 3

    int arr[5] = {1, 3, 5, 7, 9};
    for (int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }
*//* 4

    int arr[5] = {1, 3, 5, 7, 9};
    int even = arr[0] + arr[4];
    cout << even;
*//* 5

    float ideas[2];
    cout << ideas[1];
*//* 6

    char* arr[20] = {"cheeseburger"};
    cout << *arr;
*//* 7

    string str = "Waldorf Salad";
    cout << str;
*//* 8, 9

    struct fish
    {
        string kind;
        int weight;
        double length;
    };

    fish trout = {"trout", 21, 8.5};
    cout << trout.kind << endl << trout.weight << endl << trout.length << endl;
*//* 10

    enum Response
    {
        Yes,
        No,
        Maybe
    };
    Response aff = Maybe;

    cout << aff;
*//* 11

    double ted = 3.14159263654;
    double* pted = &ted;

    cout << *pted << endl;
*//* 12

    float treacle[10] = {1.2, 3.432, 312.32, 21.2, 1.32, 123.3, 13.54, 534.3, 12.3, 89.78};
    float* pf = &treacle[0];

    cout << *pf << endl;
    cout << *(pf+9);
*//* 13

    int num;
    cout << "Please enter a positive integer: ";
    cin >> num;

    int* parr = new int[num];

    for (int i=0; i<num; i++)
    {
        cout << (int) parr + i << endl;
        cout << *parr + i << endl;
    }

    vector<int> varr(num);

    for (int i=0; i<num; i++)
    {
        cout << (int) &varr[i] << endl;
        cout << varr[i] << endl;
    }
*//* 14

    cout << (int*) "Home of the jolly bytes";
*//* 15

    struct fish
    {
        string kind = "jellyfish";
        int weight;
        double length;
    };

    fish* pfish = new fish;
    cout << (*pfish).kind;              // same as pfish->kind
*//*

    vector<string> svec(10);
    svec[0] = "ham";
    svec[8] = "string";

    for (int i=0; i<10; i++)
    {
        cout << svec[i] << endl;
    }
*/

    return 0;
}
