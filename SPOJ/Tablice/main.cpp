#include <iostream>

using namespace std;

int main()
{
    int nTestow, nLiczb;

    cin >> nTestow;

    for(int i=0; i<nTestow; i++)
    {
        cin >> nLiczb;      if(nLiczb>100) return 0;
        int tab1[nLiczb], tab2[nLiczb];
        for(int j=0; j<nLiczb; j++)
        {
            cin >> tab1[j];
        }
        for(int j=nLiczb-1; j>=0; j--)
        {
        for(int k=0; k<nLiczb; k++)
            {
                tab2[k] = tab1[j];
            }
        cout << tab2[j] << endl;
        }
    }

return 0;
}
