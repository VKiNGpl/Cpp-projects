#include <iostream>
#include <iostream>
#include <conio.h>

unsigned ZliczZnaki(std::string strTekst, char chZnak)
{
    unsigned uIlosc = 0;

    for (unsigned i=0; i <= strTekst.length(); ++i)
    {
        if (strTekst[i] == chZnak) ++uIlosc;
    }
    return uIlosc;
}

int main()
{
    std::string strNapis;
    std::cout << "Podaj tekst, w ktorym maja byc zliczane znaki: ";
    std::cin >> strNapis;

    char chSzukanyZnak;
    std::cout << "Podaj znak, ktory bedzie zliczany: ";
    std::cin >> chSzukanyZnak;

    std::cout << "Znak " << chSzukanyZnak << " wystepuje w tekscie " << ZliczZnaki(strNapis, chSzukanyZnak)
              << " raz(y)." << std::endl;

    return 0;
}
