//searching an element using binary search
#include <iostream>
using namespace std;

int binary_search(int array[], int low, int high, int element)
{
    int mid = (low + high)/2;

    while (low <= high)
    {
        if (array[mid] == element)
            return mid;
        if (array[mid] > element)
            high = mid - 1;
        else 
            low = mid + 1;
    }
    return -1;
}

int main (void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int n = sizeof (arr) / sizeof (arr[0]);

    int ele = 5;
    int result = binary_search(arr, 0, n - 1, ele);

    if (result == -1)
    {
        cout<<"Element not present in array!";
    }
    else
    {
        cout<<"Position of element: "<<++result<<endl;
    return 0;
    }
}