#include <iostream>

using namespace std;

enum weekDayT {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int StrToNum(string);
string PrintDay(weekDayT);
weekDayT NextDay(weekDayT);
weekDayT PreviousDay(weekDayT);
weekDayT IncrementDay(weekDayT, int=0);
void AskForNum(int&);
void AskForStr(string&);
void AskForIncr(string);

int main()
{
    int nDay;
    string sDay;

    AskForNum(nDay);
    AskForStr(sDay);
    AskForIncr(sDay);

    return 0;
}

weekDayT NextDay(weekDayT day)
{
    return weekDayT((day)%7+1);
};

weekDayT PreviousDay(weekDayT day)
{
    return weekDayT((day+5)%7+1);
};

string PrintDay(weekDayT day)
{
    switch(day)
    {
    case Monday:
        return "Monday";
    case Tuesday:
        return "Tuesday";
    case Wednesday:
        return "Wednesday";
    case Thursday:
        return "Thursday";
    case Friday:
        return "Friday";
    case Saturday:
        return "Saturday";
    case Sunday:
        return "Sunday";
    default:
        return "Not a valid week day.";
    }
}
int StrToNum(string s)
{
    if(s=="Monday")
        return 1;
    else if(s=="Tuesday")
        return 2;
    else if(s=="Wednesday")
        return 3;
    else if(s=="Thursday")
        return 4;
    else if(s=="Friday")
        return 5;
    else if(s=="Saturday")
        return 6;
    else if(s=="Sunday")
        return 7;
    else
        return 0;
}
weekDayT IncrementDay(weekDayT startDay, int delta)
{
    if ((startDay+delta)%7<=0) return weekDayT((startDay+delta)%7+7);
        else
            return weekDayT((startDay+delta)%7);
        }
void AskForNum(int& n)
{
    cout << "Enter the number of a week day: ";
    cin >> n;
    cout << "The day is: ";
    cout << PrintDay(IncrementDay(weekDayT(n))) << endl;
    cout << "Next day of the week is: " << PrintDay(NextDay(weekDayT(n))) << endl;
    cout << "Previous day of the week is: " << PrintDay(PreviousDay(weekDayT(n))) << endl << endl;
}
void AskForStr(string& s)
{
    cout << "Enter the name of the week day: ";
    cin >> s;
    cout << "The number of the week day is: ";
    cout << weekDayT(StrToNum(s)) << endl;
    cout << "Next day of the week is: " << PrintDay(NextDay(weekDayT(StrToNum(s)))) << endl;
    cout << "Previous day of the week is: " << PrintDay(PreviousDay(weekDayT(StrToNum(s)))) << endl << endl;
}
void AskForIncr(string s)
{
    int nDelta;

    cout << "Enter the number of days you want to add or subtract: ";
    cin >> nDelta;
    cout << nDelta << " day(s) from " << s << " is: ";
    cout << PrintDay(IncrementDay(weekDayT(StrToNum(s)), nDelta)) << endl;
}
