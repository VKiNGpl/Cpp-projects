#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    int flag_num = 0;
    file.open("data.dat");

    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            int zero_num = 0;
            int one_num = 0;

            for (int i = 0, n = line.length(); i < n; i++)
            {
                if (line[i] == '0')
                {
                    zero_num++;
                }
                else if (line[i] == '1')
                {
                    one_num++;
                }
            }
            if (zero_num % 3 == 0 || one_num % 2 == 0)
            {
                flag_num++;
            }
        }
    }

    cout << flag_num << endl;
    file.close();

    return 0;
}
