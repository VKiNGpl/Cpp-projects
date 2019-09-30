#include <iostream>
#include <conio.h>

using namespace std;

double toau(double);

int main()
{
    double lightyears;

    cout << "Enter the number of light years: ";
    cin  >> lightyears;
    cout << lightyears << " light years = " << toau(lightyears) << " astronomical units.\n";

    getch();
    return 0;
}
double toau(double ly)
{
    return ly * 63240;
}
