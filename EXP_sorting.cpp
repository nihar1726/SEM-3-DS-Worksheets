// WAP to implement bubble sort
#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                // swapping
                int temp = array[j];
                array[j] = array[j + 1]; // moves backword
                array[j + 1] = temp;     // moves forward
            }
        }
    }
}

int main()
{
    int total;
    cout << "Enter number of elemets: ";
    cin >> total;

    int arr[total];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < total; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, total);
    cout << "Sorted Array!" << endl;
    for (int i = 0; i < total; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}