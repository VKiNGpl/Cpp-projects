#include <iostream>

using namespace std;

int students, candies, x, y;

int main()
{
    cout<<"How many students are in your class: ";
    cin>>students;
    cout<<"How many candies do you have?: ";
    cin>>candies;
    cout<<"\n";
    x=candies/(students-1);
    y=candies-x*(students-1);
    cout<<"Each student will get: "<<x<<"\n";
    cout<<"For the evening Jack will have: "<<y<<"\n";
    return 0;
}
