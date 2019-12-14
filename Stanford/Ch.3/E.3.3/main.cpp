#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void randomize();
double randChance();
string spinWheel();
void playRound(string&, string&, string&);
void checkResult(int&, string, string, string);
bool promptToPlay(int);
void promptForIns();

int main()
{
    string sRes1, sRes2, sRes3;
    int nBank = 50;

    randomize();

    promptForIns();
    while (promptToPlay(nBank))
    {
        playRound(sRes1, sRes2, sRes3);
        checkResult(nBank, sRes1, sRes2, sRes3);
    }

    return 0;
}

void randomize()
{
    srand(time(NULL));
    rand();
}

double randChance()
{
    return double(rand()) / (double(RAND_MAX) +1);
}
string spinWheel()
{
    double dSpin = randChance();

    if (dSpin > 0 && dSpin < 0.16666)
        return "CHERRY";
    else if (dSpin > 0.16666 && dSpin < 0.33332)
        return "LEMON";
    else if (dSpin > 0.33332 && dSpin < 0.49998)
        return "ORANGE";
    else if (dSpin > 0.49998 && dSpin < 0.66664)
        return "PLUM";
    else if (dSpin > 0.66664 && dSpin < 0.83333)
        return "BELL";
    else if (dSpin > 0.83333 && dSpin < 1)
        return "BAR";
}

void playRound(string& r1, string& r2, string& r3)
{
    r1 = spinWheel();
    r2 = spinWheel();
    r3 = spinWheel();
    cout << left << setw(7) << r1;
    cout << left << setw(7) <<  r2;
    cout << left << setw(7) <<  r3;
}

void checkResult(int& m, string r1, string r2, string r3)
{
    if (r1=="BAR" && r2=="BAR" && r3=="BAR")
    {
        cout << "-- You win $250";
        m += 250;
    }
    else if (r1=="BELL" && r2=="BELL" && r3=="BELL" || r3=="BAR")
    {
        cout << "-- You win $20";
        m += 20;
    }
    else if (r1=="PLUM" && r2=="PLUM" && r3=="PLUM" || r3=="BAR")
    {
        cout << "-- You win $14";
        m += 14;
    }
    else if (r1=="ORANGE" && r2=="ORANGE" && r3=="ORANGE" || r3=="BAR")
    {
        cout << "-- You win $10";
        m += 10;
    }
    else if (r1=="CHERRY" && r2=="CHERRY" && r3=="CHERRY")
    {
        cout << "-- You win $7";
        m += 7;
    }
    else if (r1=="CHERRY" && r2=="CHERRY" && r3!="CHERRY")
    {
        cout << "-- You win $5";
        m += 7;
    }
    else if (r1=="CHERRY" && r2!="CHERRY" && r3!="CHERRY")
    {
        cout << "-- You win $2";
        m += 2;
    }
    else
    {
        cout << "You lose";
        m -= 1;
    }
    cout << endl;
}

void promptForIns()
{
    string sAns;
    cout << "Would you like instructions? ";
    cin >> sAns;
    if (sAns=="yes")
    {
        cout << "Same as regular one-armed bandit." << endl;
    }
}

bool promptToPlay(int m)
{
    string sAns;
    cout << "You have $"<< m << ". Would you like to play? ";
    cin >> sAns;
    if (sAns == "yes")
        return true;
    else
        return false;
}
