#include <iostream>

using namespace std;

#define T_SIZE 1001
char* string_merge(char *, char *);

int main()
{
    int t,n;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin >> t; /* wczytaj liczbe testow */
    cin.getline(S1,T_SIZE);

    while(t)
    {
        cin.getline(S1,T_SIZE,' ');
        cin.getline(S2,T_SIZE);
        S=string_merge(S1,S2);
        cout << S << endl;

        t--;
    }

    return 0;
}

char* string_merge(char * s1, char *s2)
{
    int sSize = 0;

    for (int i=0; (s1[i] != '\0') && (s2[i] != '\0'); i++)
    {
        sSize += 1;
    }

    char* chPtr = new char[sSize*2];

    for (int i=0; i < sSize * 2; i++)
    {
        if (i%2 == 0) chPtr[i] = s1[i/2];
        else chPtr[i] = s2[i/2];
    }
    chPtr[sSize*2] = '\0';

    return chPtr;
}
