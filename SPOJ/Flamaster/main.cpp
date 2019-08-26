#include <iostream>

using namespace std;

int main()
{
    int nTestow;

    cin >> nTestow;

    for(int i=0; i<nTestow; i++)
    {
        string sWyraz;
        cin >> sWyraz;

        int nLength = sWyraz.length();

        for(int j=0; j<nLength; j++)
        {
            int nLicznik = 1;
            cout << sWyraz[j];
            while(sWyraz[j+1] == sWyraz[j])
            {
                nLicznik++;
                j++;
                if(sWyraz[j+1] != sWyraz[j] && nLicznik == 2)
                    cout << sWyraz[j];
                else if(sWyraz[j+1] != sWyraz[j])
                    cout << nLicznik;
            }
        }
        cout << endl;
    }
    return 0;
}
