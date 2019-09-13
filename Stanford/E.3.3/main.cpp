#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void randomize();
double randChance();
string spinWheel();
void playRound();

int main()
{
    randomize();

    playRound();

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

void playRound()
{
    cout << left << setw(7) << spinWheel();
    cout << left << setw(7) <<  spinWheel();
    cout << left << setw(7) <<  spinWheel() << endl;
}
