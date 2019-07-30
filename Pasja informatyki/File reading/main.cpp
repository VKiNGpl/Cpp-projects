#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string f_name, l_name;
long long int phone_nr;

int main()
{
    fstream file;

    file.open("directory.txt", ios::in);

    if(file.good()==false)
    {
        cout<<"File does not exist!";
        exit(0);
    }

    string line;
    int line_nr=1;

    while(getline(file,line))
    {
        switch(line_nr)
        {
            case 1: f_name = line; break;
            case 2: l_name = line; break;
            case 3: phone_nr = atoll(line.c_str()); break;
        }
        line_nr++;
    }
    file.close();

    cout << f_name <<endl;
    cout << l_name <<endl;
    cout << phone_nr <<endl;

    return 0;
}
