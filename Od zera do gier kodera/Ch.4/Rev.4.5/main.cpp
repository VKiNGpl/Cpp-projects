#include <iostream>
#include <cmath>

bool LiczbaPierwsza(unsigned uLiczba)
{
    if (uLiczba == 2)
        return true;

    for (unsigned i = 2; i <= sqrt(uLiczba); ++i)
    {
        if (uLiczba%i == 0)
            return false;
    }
    return true;
}

int main()
{
    unsigned uWartosc;
    std::cout << "Podaj liczbe: ";
    std::cin >> uWartosc;

    (LiczbaPierwsza(uWartosc) ?
        std::cout << "Liczba " << uWartosc << " jest pierwsza."
    :
        std::cout << "Liczba " << uWartosc << " nie jest pierwsza.");

    return 0;
}
