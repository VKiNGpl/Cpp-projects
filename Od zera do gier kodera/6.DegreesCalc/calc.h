#ifndef CALC_H_INCLUDED
#define CALC_H_INCLUDED

// Plik naglowkowy z klasa kalkulatora stopni

// typ wyliczeniowy okreslajacy skale temperatur
enum SCALE { SCL_CELSIUS = 'c', SCL_FAHRENHEIT = 'f', SCL_KELVIN = 'k' };

class CDegreesCalc
{
	private:
		// temperatura w stopniach Celsjusza
		double m_fStopnieC;
	public:
		// ustawienie i pobranie temperatury
		void UstawTemperature(double, SCALE);
		double PobierzTemperature(SCALE);
};


#endif // CALC_H_INCLUDED
