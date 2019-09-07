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
    employeeT empList[];
};

payrollT* GetPayroll(int);

int main()
{
    payrollT payRec;
    int nHowMany;

    cout << "How many employees: ";
    cin >> nHowMany;

    cout << GetPayroll(nHowMany)->empList << endl;

    return 0;
}
payrollT* GetPayroll(int n)
{
    payrollT* empArray;
    empArray = new payrollT[n];

    for (int i=0; i<n; i++)
    {
        cout << "Name: ";
        cin.ignore();
        getline(cin, empArray->empList.name[i]);
    }
    return empArray;
}
