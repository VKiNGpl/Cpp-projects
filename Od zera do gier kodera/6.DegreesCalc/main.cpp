// DegreesCalc -- kalkulator temperatur
#include <iostream>
#include <cstdlib>
#include "calc.h"

using namespace std;

/*typ wyliczeniowy okreslajacy skale temperatur
enum SCALE {SCL_CELSIUS = 'c', SCL_FAHRENHEIT = 'f', SCL_KELVIN = 'k'};

class CDegreesCalc
{
private:
    // temperatura w stopniach Celsjusza
    double m_dStopnieC;
public:
    // ustawienie i pobranie temperatury
    void UstawTemperature(double fTemperatura, SCALE Skala);
    double PobierzTemperature(SCALE Skala);
};
*/
// ------------------ funkcja main() ----------------------------------

int main()
{
    // zapytujemy o skale, w ktorej bedzie wprowadzona wartosc
    char chSkala;
    for (int i = 0; i < 1; i++)
    {
        cout << "Wybierz wyjsciowa skale temperatur" << endl;
        cout << "(c - Celsjusza, f - Fahrenheita, k - Kelwina): ";
        cin >> chSkala;
        if (chSkala != 'c' && chSkala != 'f' && chSkala != 'k')
        {
            system("cls");
            i--;
        }
    }

    // zapytujemy o rzeczona temperature
    float fTemperatura;
    cout << "Podaj temperature: ";
    cin >> fTemperatura;

    // deklarujemy obiekt kalkulatora i przekazujemy don temperature
    CDegreesCalc Kalkulator;
    Kalkulator.UstawTemperature(fTemperatura, (SCALE)chSkala);

    // pokazujemy wynik - czyli temperature we wszystkich skalach
    cout << endl;
    cout << "- stopnie Celsjusza: " << Kalkulator.PobierzTemperature(SCL_CELSIUS) << endl;
    cout << "- stopnie Fahrenheita: " << Kalkulator.PobierzTemperature(SCL_FAHRENHEIT) << endl;
    cout << "- kelwiny: " << Kalkulator.PobierzTemperature(SCL_KELVIN) << endl;

    return 0;
}
