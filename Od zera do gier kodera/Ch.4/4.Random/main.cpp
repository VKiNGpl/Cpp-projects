#include <iostream>
#include <ctime>
#include <cstdlib>

int random(int nMin, int nMax) { return rand()%nMax + nMin; }

int main()
{
    srand(time(NULL));
    std::cout << random(1, 6) << std::endl;

    return 0;
}
