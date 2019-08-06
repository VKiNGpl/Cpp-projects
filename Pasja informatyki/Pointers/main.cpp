#include <iostream>

using namespace std;

int ile;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin >> ile;

    int *tablica;               // wskaznik typu int o nazwie tablica
    tablica = new int [ile];    // rezerwacja ilosci int'ow oraz okreslenie typu zarezerwowanej komorki

    for(int i=0; i<ile; i++)
    {
        cout << int(tablica) << endl;
        tablica ++;
    }

    delete [] tablica;

    return 0;
}
