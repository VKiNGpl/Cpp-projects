// equal.cbp -- equality vs assignment
#include <iostream>

using namespace std;

int main()
{
    int quizscores[20] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "Doint it right:\n";
    for (int i = 0; quizscores[i] == 20; i++)
    {
        cout << "quiz " << i << " is a 20\n";
    }
    // Warning: you may prefer reading about this program
    // to actually running it.

    cout << "Doing it dangerously wrong:\n";
    for (int i = 0; quizscores[i] = 20; i++)
    {
        cout << "quiz " << i << " is a 20\n";
    }

    return 0;
}
