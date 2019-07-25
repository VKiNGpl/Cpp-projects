#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int number, guess, tries=0;

int main()
{
    cout<<"Welcome, I have just thought of a number between 1 and 100.\n";
    srand(time(NULL));
    number=rand()%100+1;

    while(guess!=number)
    {
        tries++;
        cout<<"Guess which number: ";
        cin>>guess; cout<<endl;

        if(guess==number)
            cout<<"That is the correct number! You win in "<<tries<<" attempts! \n";
        else if(guess<number)
            cout<<"That is too low, try again!(This is the attempt number: "<<tries<<").\n";
        else if(guess>number)
            cout<<"That is too high, try again!(This is the attempt number: "<<tries<<").\n";
    }

    getchar();getchar();
    system("pause");

    return 0;
}
