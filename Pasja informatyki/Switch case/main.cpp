#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char selection;

int main()
{
for(;;)                                 //or while (true), while (selection!=5)
{
    cout<< "Input first number: ";
    cin >> x;
    cout<< "Input second number: ";
    cin >> y;

    cout<< endl;
    cout<< "   MAIN MENU"       << endl;
    cout<< "------------------" << endl;
    cout<< "1. Addition"        << endl;
    cout<< "2. Subtraction"     << endl;
    cout<< "3. Multiplication"  << endl;
    cout<< "4. Division"        << endl;
    cout<< "5. Terminate"       << endl;

    cout<< "\nSelect operation: ";
   selection=getch();

    switch(selection)
    {
        case '1':
            {
            cout<< "\nSum = "         <<x+y<< endl;
            }
        break;
        case '2':
            {
            cout<< "\nDifference = "  <<x-y<< endl;
            }
        break;
        case '3':
            {
            cout<< "\nProduct = "     <<x*y<< endl;
            }
        break;
        case '4':
            {
            if (y==0)
                 cout<<"\nCannot divide by 0\n";
            else cout<<"\nQuotient = "<<x/y<< endl;
            }
        break;
        case '5':
            {
            exit(0);
            }
        default:
            cout<< "\nSelection not valid."<< endl;
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
