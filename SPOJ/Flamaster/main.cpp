#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int nTestow;

    cin >> nTestow;

    for(int i=0; i<nTestow; i++)
    {
        string sWyraz;
        ostringstream str1;
        cin >> sWyraz;

        int nLength = sWyraz.length();
        string sKopia[nLength];

        for(int j=0; j<nLength; j++)
        {
            int nLicznik = 0;

            if(sWyraz[j] == sWyraz[j-1])
            {
                for (int k=j; k<nLength-j; k++)
                {
                    if(sWyraz[k] == sWyraz[k-1])
                    {
                        nLicznik++;
                        sWyraz.erase(k,0);
                        str1 << nLicznik;
                string sLiczba = str1.str();
                cout <<sLiczba;
                sWyraz[k] = sLiczba[0];
                    }

                }

            }
            sKopia[j] = sWyraz[j];
            //cout << sWyraz[j] << endl;
        }
    }


    return 0;
}
