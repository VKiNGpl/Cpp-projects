#include <iostream>

int main()
{
    std::cout << "Typy liczb calkiwitych:" << std::endl;
    std::cout << "- int: " << sizeof(int) << std::endl;
    std::cout << "- short int: " << sizeof(short int) << std::endl;
    std::cout << "- long int: " << sizeof(long int) << std::endl;
    std::cout << "- char: " << sizeof(char) << std::endl;
    std::cout << std::endl;

    std::cout << "Typy liczb zmiennoprzecinkowych:" << std::endl;
    std::cout << "- float: " << sizeof(float) << std::endl;
    std::cout << "- double: " << sizeof(double) << std::endl;

    return 0;
}
