// nested.cbp -- nested loops and 2-D array
#include <iostream>

const int CITIES = 5;
const int YEARS = 4;

using namespace std;

int main()
{
    const char* cities[CITIES] =    // array of pointers
    {                               // to 5 string
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Griblle",
        "Gribble Vista"
    };

    int maxtemps[YEARS][CITIES] =   // 2-D array
    {
        {96, 100, 87, 101, 105},    // values for maxtemps[0]
        {96, 98, 91, 107, 104},     // valyes for maxtemps[1]
        {97, 101, 93, 108, 107},    // values for maxtemps[2]
        {98, 103, 95, 109, 108}     // values for maxtemps[3]
    };

    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < CITIES; ++city)
    {
        cout << cities[city] << ":\t";

        for (int year = 0; year < YEARS; ++year)
        {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }
        // cin.get();

    return 0;
}