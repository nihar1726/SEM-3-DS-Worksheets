// WAP to find sum and product of two matrices of 2x2 order

// 
#include <iostream>
using namespace std;

int main()
{
int rows, cols, i, j ,k;
cout<<"Enter rows:";
cin>>rows;
cout<<"Enter columns:";
cin>>cols;

int a1[rows-1][cols-1], a2[rows-1][cols-1], sum[i][j], product[i][j];

cout<<"Enter data into first matrix:"<<endl;
for (i=0; i<=rows-1; i++)
{
    for (j=0; j<=cols-1; j++)
    {
        cin>>a1[i][j];
    }
}
cout<<"Enter data into second matrix:"<<endl;
for (i=0; i<=rows-1; i++)
{
    for (j=0; j<=cols-1; j++)
    {
        cin>>a2[i][j];
    }
}

for (i=0; i<=rows-1; i++)
{
    for (j=0; j<=cols-1; j++)
    {
        sum[i][j] = a1[i][j] + a2[i][j];
    }
}
cout<<"Addition of the two matrices:"<<endl;
for (i=0; i<=rows-1; i++)
{
    for (j=0; j<=cols-1; j++)
    {
       cout<<" "<<sum[i][j];
    }
    cout<<endl;
}

for (i=0; i<=rows-1; ++i)
{
    for (j=0; j<=cols-1; ++j)
    {
        product[i][j]=0;

        for (k=0; k<=rows-1; ++k)
        {
            product[i][j] += a1[i][k] * a2[k][j];
        }
    }

}
cout<<"Product of the two matrices:"<<endl;
for (i=0; i<=rows-1; i++)
{
    for (j=0; j<=cols-1; j++)
    {
       cout<<" "<<product[i][j];
    }
    cout<<endl;
}
return 0;
}