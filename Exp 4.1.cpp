//WAP to store and display name, id, age and salary of 5 emloyees
#include <iostream>
using namespace std;

struct employee 
{
    string name, id;
    double age, salary;
};

int main()
{
    struct employee e[6];

    for (int i = 1; i<6; i++)
    {
        cout<<"Enter details for Employee "<<i<<" :"<<endl;
        cout<<"Name: ";
        cin>>e[i].name;
        cout<<"ID: ";
        cin>>e[i].id;
        cout<<"Age: ";
        cin>>e[i].age;
        cout<<"Salary: ";
        cin>>e[i].salary;
    }

    cout<<"All employee details:"<<endl;
    for (int i = 1; i<6; i++)
    {
        cout<<"Employee "<<i<<endl;
        cout<<"Name:";
        cout<<e[i].name<<endl;
        cout<<"ID:";
        cout<<e[i].id<<endl;
        cout<<"Age:";
        cout<<e[i].age<<endl;
        cout<<"Salary:";
        cout<<e[i].salary<<endl;
    }
    return 0;
}