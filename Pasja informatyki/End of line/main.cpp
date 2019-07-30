#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

float numbers[100];

int main()
{
    string line;
    int line_nr=1;

    fstream file;
    file.open("pomiary.txt", ios::in);

    if(file.good()==false)
        cout<<"Cannot locate file!";

    int counter=0;

    while(!file.eof())
    {
        getline(file, line);
        numbers[counter]=atof(line.c_str());
        counter++;
    }
    file.close();

    cout<<"Number of readouts: "<<counter<<endl<<endl;

    for (int i=0; i<counter; i++)
    {
        cout<<numbers[i]<<endl;
    }
    return 0;
}
