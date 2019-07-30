#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

string subject, author;
string question[5];
string ansA [5], ansB [5], ansC [5], ansD [5];
string correct [5];
string answer;
int points=0;

int main()
{
    int line_nr=1;
    string line;
    int question_nr=0;

    fstream file;

    file.open("quiz.txt", ios::in);
    if (file.good()==false)
    {
        cout<<"File does not exist!";
        exit(0);
    }
    while(getline(file,line))
    {
        switch(line_nr)
        {
            case 1: subject=line;               break;
            case 2: author=line;                  break;
            case 3: question[question_nr]=line; break;
            case 4: ansA[question_nr]=line;     break;
            case 5: ansB[question_nr]=line;     break;
            case 6: ansC[question_nr]=line;     break;
            case 7: ansD[question_nr]=line;     break;
            case 8: correct[question_nr]=line;  break;
        }
        if (line_nr==8) {line_nr=2; question_nr++;}
        line_nr++;
    }
    file.close();

    for (int i=0; i<4; i++)
        {
            cout<<subject<<endl;
            cout<<author <<endl;
            cout<<endl <<question[i]<<endl;
            cout<<"A. "<<ansA[i]<<endl;
            cout<<"B. "<<ansB[i]<<endl;
            cout<<"C. "<<ansC[i]<<endl;
            cout<<"D. "<<ansD[i]<<endl;

            cout<<"Your answer: ";
            cin>>answer;

            transform(answer.begin(),answer.end(),answer.begin(), ::tolower);

            if(answer==correct[i])
            {
                cout<<"Correct! You gain a point!"<<endl;
                points++;
            }
            else
                cout<<"Incorrect! The correct answer is: "<<correct[i]<<endl;
        }
        cout<<endl<<"Thats the end of the Quiz! You scored "<<points<<" point(s)!";

    return 0;
}
