//searching an element in an array using LINEAR SEARCH
#include <iostream>
using namespace std;

int linear_search(int array[], int size, int element) //we're creating a function!
{
    int found = 0;
    int pos; //this will store the position of our element!
    for (int i = 0; i < size; i++) //traverses array
    {
        if (array[i] == element) //checks
        {
            found = 1;
            pos = i;
            break; //compiler exits loop when element found!
        }
    }
    if (found == 1)
    {
        cout<<"Position of your element: "<<++pos<<endl;
    }
    else
    {
        cout<<"Element not present in array!"<<endl;
    }
    return 0;
}

int main()
{
    int n, arr[n]; //user decides the size of array making it dyanamic!
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter your elements: "<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;

    int position = linear_search(arr, n, x); //function call
    return 0;
}