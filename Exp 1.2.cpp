// WAP to find sum and product of two matrices of 2x2 order

#include <iostream>
using namespace std;

int main()
{
   int rows, cols, i, j;
   cout<<"Enter the number of rows:";
   cin>>rows;
   cout<<"Enter the number of columns:";
   cin>>cols;

   int a1[rows-1][cols-1], a2[rows-1][cols-1], a3[rows-1][cols-1], a4[rows-1][cols-1];

   cout<<"Enter Elements in first 2D array:"<<endl;
   for (i=0; i<=rows-1; i++)
   {
    for(j=0; j<=cols-1; j++)
    {
        cin>>a1[i][j];
    }
    cout<<endl;
   }

   cout<<"Enter Elements in second 2D array:"<<endl;
   for (i=0; i<=rows-1; i++)
   {
    for(j=0; j<=cols-1; j++)
    {
        cin>>a2[i][j];
    }
    cout<<endl;
   }

   for(i=0; i<=rows-1; i++)
   {
    for (j=0; j<=cols-1; j++)
    {
        a3[i][j] = a1[i][j] + a2[i][j];
    }
   }

   cout<<"Sum of two 2D arrays:"<<endl;
   for (i=0; i<=rows-1; i++)
   {
    for(j=0; j<=cols-1; j++)
    {
        cout<<" "<<a3[i][j];
    }
    cout<<endl;
   }

    for(i=0; i<=rows-1; i++)
   {
    for (j=0; j<=cols-1; j++)
    {
        a4[i][j] = a1[i][j] * a2[i][j];
    }
   }

   cout<<"Product of two 2D arrays:"<<endl;
   for (i=0; i<=rows-1; i++)
   {
    for(j=0; j<=cols-1; j++)
    {
        cout<<' '<<a4[i][j];
    }
    cout<<endl;
   }

return 0;
   

}
