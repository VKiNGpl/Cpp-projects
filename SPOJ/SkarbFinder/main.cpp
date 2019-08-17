#include <iostream>

using namespace std;

int nMapa(int, int);

int nTab [4];
int *wskaznik = nTab;

int main()
{

    int nTestow, nInstrukcji, nKierunek, nKrokow;

    cin >> nTestow;

    for (int i=0; i < nTestow; i++)
    {
        cin >> nInstrukcji;
        for (int j=0; j<nInstrukcji; j++)
        {
            cin >> nKierunek >> nKrokow;
            nMapa(nKierunek, nKrokow);
        }
        int n, s, w, e;
        n = wskaznik[0];
        s = wskaznik[1];
        w = wskaznik[2];
        e = wskaznik[3];

        if (n-s > 0)
            cout << 0 << " " << (n-s) << endl;
        else if (n-s<0)
            cout << 1 << " " << (n-s)*(-1) << endl;
        if (w-e > 0)
            cout << 2 << " " << (w-e) << endl;
        else if (w-e < 0)
            cout << 3 << " " << (w-e)*(-1) << endl;
        else if (n-s==0 && w-e==0)
            cout << "studnia" << endl;

        for (int k=0; k<4; k++)
            wskaznik[k] = 0;
    }
    return 0;
}

int nMapa(int a, int b)
{
    wskaznik[a] += b;

    return wskaznik[0];
}
