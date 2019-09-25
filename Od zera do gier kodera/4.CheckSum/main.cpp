#include <iostream>

using namespace std;

char SumaKontrolna(void* a_Dane, size_t a_Rozmiar)
{
    char Suma = 0;
    for (size_t i=0; i < a_Rozmiar; i++)
    {
        Suma = Suma ^ static_cast<char*>(a_Dane)[i];
        return Suma;
    }
}

int main()
{

    return 0;
}
