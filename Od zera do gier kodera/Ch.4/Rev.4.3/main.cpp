#include <iostream>
#include <conio.h>

int main()
{
    for (int i = 32; i < 256; i +=4)
    {
        std::cout << "| ";
        for (int j=0; j<4; ++j)
        {
    std::cout << static_cast<char>(i + j) << " == " << i + j << " | ";
        }
    std::cout << std::endl;
    if (i==96 || i==180) getch();
    }

    return 0;
}
