#include <iostream>

void Funkcja1()
{
    int nX = 7;
    std::cout << "Zmienna lokalna nX funkcji Funkcja1(): " << nX << std::endl;
}
void Funkcja2()
{
    int nX = 5;
    std::cout << "Zmienna lokalna nX funkcji Funkcja2(): " << nX << std:: endl;
}

int main()
{
    int nX = 3;
    Funkcja1();
    Funkcja2();
    std::cout << "Zmienna lokalna nX funkcji main(): " << nX << std::endl;

    return 0;
}
