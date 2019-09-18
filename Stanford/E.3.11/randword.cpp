#include <iostream>
#include <fstream>
#include "randword.h"

void InitDictionary(std::string src, std::string sArr[], int& n)
{
    std::string line;

    std::ifstream dict;
    dict.open(src.c_str());

    for (int i=0; dict.good(); i++)
    {
        std::getline(dict, sArr[i]);
        n++;
    }

    dict.close();
}

std::string ChooseRandomWord(std::string sArr[], int n)
{
    return sArr[n];
}
