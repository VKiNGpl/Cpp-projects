#include <iostream>

using namespace std;


int RevNum(int);
void PrintNum(int);
void PrintOneDigit(int);
void PrintTeens(int);
void PrintTens(int);
void PrintOneToHundred(int);
void PrintHundredToThousand(int);
void PrintThousandToMillion(int);

int main()
{
    int nNum;

    cout << "Enter the numbers in figures; use a negative value to stop." << endl;
    while(true)         // input numbers until negative value
    {
        cout << "Number: ";
        cin >> nNum;
        if(nNum<0)
            return 0;
        if(nNum>999999)
        {
            cout << "Number out of range." << endl;
            return 0;
        }
        PrintNum(nNum);
        cout << endl;
    }

    return 0;
}
void PrintThousandToMillion(int num)
{
    if (num>=1000 && num<10000 && num%1000==0)
    {
        PrintOneDigit(num/1000);
        cout << " thousand";
    }
    else if (num>1000 && num<1100)
    {
        PrintOneDigit(num/1000);
        cout << " thousand ";
        PrintOneToHundred(num%1000);
    }

    else if (num>=1100 && num<10000 && num%1000!=0)
    {
        PrintOneDigit(num/1000);
        cout << " thousand ";
        PrintHundredToThousand(num%1000);
    }
    else if(num>=10000 && num<100000 && num%1000==0)
    {
        PrintOneToHundred(num/1000);
        cout << " thousand";
    }
    else if(num>=10000 && num<100000 && num%1000!=0)
    {
        PrintOneToHundred(num/1000);
        cout << " thousand ";
        PrintHundredToThousand(num%1000);
    }
            else if(num>100000 && num<1000000 && num%1000!=0)
            {
        PrintHundredToThousand(num/1000);
        cout << " thousand ";
        PrintOneToThousand(num%1000);
            }
    else if(num>=100000 && num<1000000 && num%1000==0)
    {
        PrintHundredToThousand(num/1000);
        cout << " thousand ";
    }
    else if(num>=100000 && num<1000000 && num%1000!=0)
    {
        PrintHundredToThousand(num/1000);
        cout << " thousand ";
        PrintHundredToThousand(num%1000);
    }
}

void PrintHundredToThousand(int num)
{
    if (num>=100 && num<1000 && num%100==0)
    {
        PrintOneDigit(num/100);
        cout << " hundred";
    }
    else if (num>=100 && num<1000 && num%100!=0)
    {
        PrintOneDigit(num/100);
        cout << " hundred ";
        PrintOneToHundred(num%100);
    }
}

void PrintOneToHundred(int num)
{
    if (num<10)
        PrintOneDigit(num);
    else if (num>10 && num<20)
        PrintTeens(num);
    else if (num<100 && num%10==0)
        PrintTens(num/10);
    else if (num<100 && num%10!=0)
    {
        PrintTens(num/10);
        cout << "-";
        PrintOneDigit(num%10);
    }
}
void PrintNum(int num)
{
    if (num<100)
        PrintOneToHundred(num);
    if (num>=100 && num<1000)
        PrintHundredToThousand(num);
    if (num>=1000 && num<1000000)
        PrintThousandToMillion(num);
}

int RevNum(int n)
{
    int nRev =0;
    while (n!=0)
    {
        nRev += n%10;
        n /= 10;
        nRev *= 10;
    }
    return nRev/10;
}

void PrintOneDigit(int d)
{
    switch (d)
    {
    case 0:
        cout << "zero";
        break;
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    default:
        cerr << "Illegal call to PrintOneDigit.";
    }
}

void PrintTeens(int teen)
{
    switch (teen)
    {
    case 11:
        cout << "eleven";
        break;
    case 12:
        cout << "twelve";
        break;
    case 13:
        cout << "thirteen";
        break;
    case 14:
        cout << "fourteen";
        break;
    case 15:
        cout << "fifteen";
        break;
    case 16:
        cout << "sixteen";
        break;
    case 17:
        cout << "seventeen";
        break;
    case 18:
        cout << "eighteen";
        break;
    case 19:
        cout << "nineteen";
        break;
    default:
        cerr << "Illegal call to PrintTeens.";
    }
}

void PrintTens(int ten)
{
    switch (ten)
    {
    case 1:
        cout << "ten";
        break;
    case 2:
        cout << "twenty";
        break;
    case 3:
        cout << "thirty";
        break;
    case 4:
        cout << "forty";
        break;
    case 5:
        cout << "fifty";
        break;
    case 6:
        cout << "sixty";
        break;
    case 7:
        cout << "seventy";
        break;
    case 8:
        cout << "eighty";
        break;
    case 9:
        cout << "ninety";
        break;
    default:
        cerr << "Illegal call to PrintTens.";
    }
}
