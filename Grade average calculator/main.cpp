#include <iostream>

using namespace std;

float grades[5]; float sum=0, average;

int main()
{
    for (int i=0;i<5; i++)
    {
        cout<<"Enter "<<i+1<<" grade: ";
        cin>>grades[i];
        sum += grades[i];
    }

    average=sum/5;
    cout<<endl<<"Average = "<<average<<"\n";
    return 0;
}
