#include <iostream>
#include <string>

using namespace std;

struct employeeT
{
    string name;
    string title;
    string ssnum;
    double salary;
    int withholding;
};
struct payrollT
{
    int nEmpNum;
    employeeT* empPtr;
};

payrollT* GetPayroll(payrollT);

int main()
{
    payrollT myPayroll;
    int nRecord;
    cout << "How many employees: ";
    cin >> myPayroll.nEmpNum;
    cin.ignore();

    payrollT* payPtr;
    payPtr = GetPayroll(myPayroll);
    cout << "Please enter the Employee number to display their record: ";
    cin >> nRecord;
    cin.ignore();
    if (nRecord>myPayroll.nEmpNum)
    {
        cout << endl << "Employee number does not exist!" << endl;
        return 0;
    }
    cout << "\nName: " <<  payPtr->empPtr[nRecord-1].name << endl;
    cout << "Title: " << payPtr->empPtr[nRecord-1].title << endl;
    cout << "SS Number: " << payPtr->empPtr[nRecord-1].ssnum << endl;
    cout << "Salary: " << payPtr->empPtr[nRecord-1].salary << endl;
    cout << "Number of withholdings: " << payPtr->empPtr[nRecord-1].withholding << endl;

    return 0;
}

payrollT* GetPayroll(payrollT myPayroll)
{
    payrollT *newPtr;
    newPtr = new payrollT;
    newPtr->empPtr = new employeeT[myPayroll.nEmpNum];
    for (int i=0; i<myPayroll.nEmpNum; i++)
    {
        cout << "Enter name " << i+1 << ": ";
        getline(cin, newPtr->empPtr[i].name);
        cout << "Enter title " << i+1 << ": ";
        getline(cin, newPtr->empPtr[i].title);
        cout << "Enter SS Number " << i+1 << ": ";
        getline(cin, newPtr->empPtr[i].ssnum);
        cout << "Enter salary " << i+1 << ": ";
        cin >> newPtr->empPtr[i].salary;
        cin.ignore();
        cout << "Enter number of withholdings " << i+1 << ": ";
        cin >> newPtr->empPtr[i].withholding;
        cin.ignore();
    }

    return newPtr;
}
