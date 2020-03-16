#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void randomize();
string coinFlip();

int main()
{
    int nFlips = 0;
    string sFlip1, sFlip2, sFlip3;

    randomize();

    while (true)
    {
        sFlip1 = coinFlip();
        cout << sFlip1 << endl;
        nFlips++;
        if (sFlip1=="heads")
        {
            sFlip2 = coinFlip();
            cout << sFlip2 << endl;
            nFlips++;
            if (sFlip2=="heads")
            {
                sFlip3 = coinFlip();
                cout << sFlip3 << endl;
                nFlips++;
                if (sFlip3=="heads")
                {
                    cout << "It took " << nFlips << " flips to get 3 consecutive heads." << endl;
                    return 0;
                }
            }
        }
    }


    return 0;
}

string coinFlip()
{
    if (double(rand()) / (RAND_MAX + 1) < 0.5)
        return "heads";
    else
        return "tails";
}

void randomize()
{
    srand(time(NULL));
    rand();
}
