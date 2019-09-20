#include <iostream>

int nX = 10;

void Funkcja()
{
    std::cout << "Zmienna nX wewnatrz innej funkcji: " << nX << std::endl;
}

int main()
{
    std::cout << "Zmienna nX wewnatrz funkcji main(): " << nX << std::endl;
    Funkcja();

    return 0;
}
