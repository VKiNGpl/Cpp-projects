#include <iostream>
#include "unicalc.h"

long double CCompUnitsCalc::GetUnits(UNITS Unit)
{
    switch (Unit)
    {
        case U_BIT:     return m_ldBits;
        case U_BYTE:    return m_ldBits / 8;
        case U_KBYTE:   return m_ldBits / 8192;
        case U_MBYTE:   return m_ldBits / 8388608;
        case U_GBYTE:   return m_ldBits / 8589934592;
        case U_TBYTE:   return m_ldBits / 8796093022208;
        default:        return 0;
    }
}

void CCompUnitsCalc::SetUnits(UNITS Unit, long double ldDataSize)
{
    switch (Unit)
    {
        case U_BIT:     m_ldBits = ldDataSize;                  break;
        case U_BYTE:    m_ldBits = ldDataSize * 8;              break;
        case U_KBYTE:   m_ldBits = ldDataSize * 8192;           break;
        case U_MBYTE:   m_ldBits = ldDataSize * 8388608;        break;
        case U_GBYTE:   m_ldBits = ldDataSize * 8589934592;     break;
        case U_TBYTE:   m_ldBits = ldDataSize * 8796093022208;  break;
    }
}
