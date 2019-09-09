#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

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
double calcTaxes(double, int);
void printPayroll(payrollT*, int n);

int main()
{
    payrollT myPayroll;
    int nRecord;
    cout << "How many employees: ";
    cin >> myPayroll.nEmpNum;
    cin.ignore();

    payrollT* payPtr;
    payPtr = GetPayroll(myPayroll);
    printPayroll(payPtr, myPayroll.nEmpNum);

    return 0;
}

payrollT* GetPayroll(payrollT myPayroll)
{
    payrollT *newPtr;
    newPtr = new payrollT;
    newPtr->empPtr = new employeeT[myPayroll.nEmpNum];
    for (int i=0; i<myPayroll.nEmpNum; i++)
    {
        cout << "Employee #" << i+1 << ":" << endl;
        cout << "Name: ";
        getline(cin, newPtr->empPtr[i].name);
        cout << "Title: ";
        getline(cin, newPtr->empPtr[i].title);
        cout << "SSNum: ";
        getline(cin, newPtr->empPtr[i].ssnum);
        cout << "Salary: ";
        cin >> newPtr->empPtr[i].salary;
        cin.ignore();
        cout << "Withholding exemptions: ";
        cin >> newPtr->empPtr[i].withholding;
        cin.ignore();
    }

    return newPtr;
}
double calcTaxes(double dSal, int nW)
{
    int aIncome = dSal - (1*nW);
    if (aIncome<0)
        aIncome = 0;
    return aIncome * 0.25;
}
void printPayroll(payrollT* P, int n)
{
    system("cls");
    string sLine = "------";
    cout << left << setw(31) << "Name" << right << setw(6) << "Gross" << setw(3) << ""
         << setw(5) << "Tax " << right << setw(8) << "Net" << endl;
    for (int i=0; i<9; i++)
    {
        cout << sLine;
    }
    for (int i=0; i<n; i++)
    {
        double dTax = calcTaxes(P->empPtr[i].salary, P->empPtr[i].withholding);
        cout << endl << left << setw(31) << P->empPtr[i].name;
        cout << fixed << right << setprecision(2) << setw(6) << P->empPtr[i].salary << setw(3) << "- ";
        cout << setw(5) << dTax << setw(3) << "= ";
        cout << right << setw(6) << P->empPtr[i].salary - dTax;
    }
    cout << endl;
}
