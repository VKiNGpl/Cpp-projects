#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    ifstream carroll, buff;
    ofstream buffer;
    string sFilename, animal, pNoun, subst, veg, bdyOfWtr, pAnml, line;
    size_t pos1, pos2, pos3, pos4, pos5, pos6;

    cout << "Input file: ";
    cin >> sFilename;
    cin.ignore();
    cout << "  animal: ";
    getline(cin, animal);
    cout << "  plural noun: ";
    getline(cin, pNoun);
    cout << "  sticky substance: ";
    getline(cin, subst);
    cout << "  plural vegetable name: ";
    getline(cin, veg);
    cout << "  body of water: ";
    getline(cin, bdyOfWtr);
    cout << "  plural animal name: ";
    getline(cin, pAnml); cout << endl;

    carroll.open(sFilename.c_str());
    buffer.open("buffer.txt");

    if (carroll.good()==false)
    {
        cout << "File does not exist." << endl;
    }

    while (carroll.good())
    {
        getline(carroll, line);
        pos1 = line.find("<animal>");
        pos2 = line.find("<plural noun>");
        pos3 = line.find("<sticky substance>");
        pos4 = line.find("<plural vegetable name>");
        pos5 = line.find("<body of water>");
        pos6 = line.find("<plural animal name>");
        if(pos1!=string::npos)
        {
            line.replace(pos1, 8, animal);
        }
        if(pos2!=string::npos)
        {
            line.replace(pos2, 13, pNoun);
            pos3 = line.find("<sticky substance>");
        }
        if(pos3!=string::npos)
        {
            line.replace(pos3, 18, subst);
        }
        if(pos4!=string::npos)
        {
            line.replace(pos4, 23, veg);
        }
        if(pos5!=string::npos)
        {
            line.replace(pos5, 15, bdyOfWtr);
        }
        if(pos6!=string::npos)
        {
            line.replace(pos6, 20, pAnml);
        }
        buffer << line << endl;
    }
    buffer.close();
    buff.open("buffer.txt");
    while (buff.good())
    {
        getline(buff, line);
        cout <<  line << endl;
    }
    buff.close();
    carroll.close();

    return 0;
}
