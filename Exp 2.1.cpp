//WAP a program to insert an element at a specified position in an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[50], i, ele, size, pos;

    cout<<"Enter the size of array you want to work with:";
    cin>>size;

    cout<<"Enter the elements:"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element you wish to insert:";
    cin>>ele;
    cout<<"Enter the position where you want to insert it:";
    cin>>pos;

    for(i=size; i>=pos-1; i--)
    {
        arr[i] = arr[i-1];
    }
    //now we have our space!
    arr[i] = ele;
    size++;
    
    cout<<"Here is your updated array!"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
