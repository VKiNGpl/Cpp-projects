#include <iostream>

using namespace std;

struct employeeRecordT
{
    string name = "blank";
    string title = "blank";
    string ssnum = "blank";
    double salary = 0;
    int withholding = 0;
};

int main()
{
    employeeRecordT empRec;
    empRec.name = "Dan Brown";
    empRec.title = "Professor";
    empRec.ssnum = "932-698-1866";
    empRec.salary = 92500;
    empRec.withholding = 4;

    cout << empRec.name << endl << empRec.title << endl << empRec.ssnum
             << endl << empRec.salary << endl << empRec.withholding << endl;

    employeeRecordT *empPtr;
    empPtr = &empRec;
    cout << empPtr->title  << endl;

    enum directionT {North, East, South, West};

    directionT dir = North;
    cout << (dir+3)%4 << endl;
    cout << sizeof(empRec.withholding) << endl << endl;

    int arr[11];
    for (int i=0; i<=10; i++) {
        arr[i] = i*i;
        cout << arr[i] << endl;
    }

    return 0;
}
