#include <iostream>
#include <iomanip>

using namespace std;

double const SIMPLE_RATE = 0.1;
double const COMPOUND_RATE = 0.05;

double CalcSimpleInterest(double);
double CalcCompoundInterest(double);

int main()
{
    double dInvestment1, dInvestment2, dBalance1, dBalance2;
    int nYears = 0;

    cout << "Please enter Daphne's investment amount: $";
    cin >> dInvestment1;
    dBalance1 = dInvestment1;

    cout << "Please enter Cleo's investment amount: $";
    cin >> dInvestment2;
    dBalance2 = dInvestment2;

    while (dBalance1 >= dBalance2)
    {
        dBalance1 += CalcSimpleInterest(dInvestment1);
        dBalance2 += CalcCompoundInterest(dBalance2);
        nYears++;
    }
    cout << "Cleo's investment value is greater than Daphne's after " << nYears << " years.\n";
    cout << "Cleo's balance is: $" << fixed << setprecision(2) << dBalance2 << endl;
    cout << "Daphne's balance is $" << fixed << setprecision(2) << dBalance1 << endl;

    return 0;
}

double CalcSimpleInterest(double dInvestment)
{
    return dInvestment * SIMPLE_RATE;
}

double CalcCompoundInterest(double dInvestment)
{
    return dInvestment * COMPOUND_RATE;
}
