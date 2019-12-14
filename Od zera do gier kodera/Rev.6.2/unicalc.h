#ifndef UNICALC_H_INCLUDED
#define UNICALC_H_INCLUDED

enum UNITS {U_BIT = 'b', U_BYTE = 'B', U_KBYTE = 'k', U_MBYTE = 'm', U_GBYTE = 'g', U_TBYTE = 't'};

class CCompUnitsCalc
{
private:
    long double m_ldBits;

public:
    long double GetUnits(UNITS);
    void SetUnits(UNITS, long double);
};

#endif // UNICALC_H_INCLUDED
