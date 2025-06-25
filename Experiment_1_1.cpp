// WAP to find the average of 5 elements entered by user in an array
 
#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"How many number of elements do you wish to work on?"<<endl;
cin>>n;
int a1[n-1], i;

cout<<"Enter the elements:"<<endl;
for (i=0; i<=(n-1); i++)
{
    cin>>a1[i];
}

int sum = 0;
for(i=0; i<=(n-1); i++)
{
    sum = sum + a1[i];
}

double avg = sum/n;
cout<<"Average of elements in array: "<<avg<<endl;

return 0;
}

