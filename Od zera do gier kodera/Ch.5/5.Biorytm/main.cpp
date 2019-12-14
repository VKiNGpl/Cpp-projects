// Biorytm -- pobieranie aktualne czasu w postaci struktury
//            i uzycie go do obliczenia biorytmu
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

// typ wyliczeniowy, okreslajacy rodzaj biorytmu
enum BIORHYTM { BIO_PHYSICAL = 23,
                BIO_EMOTIONAL = 28,
                BIO_INTELECTUAL = 33};
// pi
const double PI = 3.1415926535;

double Biorytm (double fDni, BIORHYTM Cykl);

int main()
{
    // trzy struktury, przechowujace date urodzenia delikwenta, aktualny czas oraz roznice pomiedzy nimi
    tm DataUrodzenia = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    tm AktualnyCzas = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    tm RoznicaCzasu = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    // pytamy uzytkownica o date urodzenia

    cout << "Podaj date urodzenia " << endl;

    // dzien
    cout << "- dzien: ";
    cin >> DataUrodzenia.tm_mday;

    // miesiac - musimy odjac 1, bo uzytkownik poda go w systemie 1...12
    cout << "- miesiac: ";
    cin >> DataUrodzenia.tm_mon;
    DataUrodzenia.tm_mon--;

    // rok - tutaj natomiast musimy odjac 1900
    cout << "- rok: ";
    cin >> DataUrodzenia.tm_year;
    DataUrodzenia.tm_year -= 1900;

    // obliczamy liczbe przezytych dni
    // pobieramy aktualny czas w postaci struktury
    time_t Czas = time(NULL);
    AktualnyCzas = *localtime(&Czas);

    // obliczamy roznice miedzy nim a data urodzenia
    RoznicaCzasu.tm_mday = AktualnyCzas.tm_mday - DataUrodzenia.tm_mday;
    RoznicaCzasu.tm_mon = AktualnyCzas.tm_mon - DataUrodzenia.tm_mon;
    RoznicaCzasu.tm_year = AktualnyCzas.tm_year - DataUrodzenia.tm_year;

    // przeliczamy to na dni
    double fPrzezyteDni = RoznicaCzasu.tm_year * 365.25
                        + RoznicaCzasu.tm_mon * 30.4375
                        + RoznicaCzasu.tm_mday;

    // obliczamy biorytm i wyswietlamy go

    // otoz i on
    cout << endl;
    cout << "Twoj biorytm" << endl;
    cout << "- fizyczny: " << Biorytm(fPrzezyteDni, BIO_PHYSICAL) << endl;
    cout << "- emocjonalny: " << Biorytm(fPrzezyteDni, BIO_EMOTIONAL) << endl;
    cout << "- intelektualny: " << Biorytm(fPrzezyteDni, BIO_INTELECTUAL) << endl;

    return 0;
}

// funkcja wyliczajaca dany rodzaj biorytmu
double Biorytm (double fDni, BIORHYTM Cykl)
{
    return 100 * sin((2 * PI / Cykl) * fDni);
}
