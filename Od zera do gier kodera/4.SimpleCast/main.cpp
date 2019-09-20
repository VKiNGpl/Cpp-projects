#include <iostream>

int main()
{
    for (int i = 32; i < 256; i +=4)
    {
    std::cout << "| " << (char) (i) << " == " << i << " | ";
    std::cout << (char) (i + 1) << " == " << i + 1 << " | ";
    std::cout << (char) (i + 2) << " == " << i + 2 << " | ";
    std::cout << (char) (i + 3) << " == " << i + 3 << " | ";
    std::cout << std::endl;
    }

    return 0;
}
