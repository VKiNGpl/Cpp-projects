#include <iostream>

int nX = 4;

int main()
{
    int nX = 7;

    std::cout << "Lokalna zmienna nX: " << nX << std::endl;
    std::cout << "Modulowa zmienna nX: " << ::nX << std::endl;

    return 0;
}
