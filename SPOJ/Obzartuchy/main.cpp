#include <iostream>
#include <cmath>

using namespace std;

const int nSEC_PER_DAY = 86400;

int main()
{
    int nHowManyTests, nTimePerCookie, nCookiesPerDay, N, M;

    cin >> nHowManyTests;

    for (int i=0; i<nHowManyTests; i++)
    {
        cin >> N >> M;              // N - liczba obzartuchow; M - liczba ciastek w pudelku
        float nTotalCookies = 0;
        for (int i=0; i<N; i++)
        {
            cin >> nTimePerCookie;
            nCookiesPerDay = nSEC_PER_DAY / nTimePerCookie;
            nTotalCookies += nCookiesPerDay;
        }
        cout << ceil(nTotalCookies / M) << endl;
    }


    return 0;
}
