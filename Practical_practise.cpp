// WAP to insert an element at a specific position

#include <iostream>
using namespace std;

void insertInArr(int *array, int &size, int position, int element)
{
    // Check if position is valid
    if (position < 1 || position > size + 1)
    {
        cout << "Position out of bounds!" << endl;
        return; // Exit the function if the position is invalid
    }

    // Shift elements to the right
    for (int i = size; i >= position; i--)
    {
        array[i] = array[i - 1];
    }

    // Insert the new element
    array[position - 1] = element; // Convert to 0-based index
    size++;                        // Increase the size of the array
}

void createArr(int *array, int size)
{
    cout << "Enter elements in array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void printArr(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl; // Print a new line after the array
}

void deleteEle(int *array, int &size, int position, int element)
{
    for (int i = position - 1; i <= size - 1; i++)
    {
        array[i] = array[i + 1];
    }

    size--;
}

int main()
{
    int tot;
    cout << "Enter number of elements: ";
    cin >> tot;

    int *arr = new int[tot];

    createArr(arr, tot);

    int ele;
    cout << "Enter element you wish to insert: ";
    cin >> ele;

    int pos;
    cout << "Enter position of element you wish to insert (1-based): ";
    cin >> pos;

    insertInArr(arr, tot, pos, ele);

    printArr(arr, tot);

    cout << "Enter element you wish to delete: ";
    cin >> ele;

    cout << "Enter position of element you wish to delete (1-based): ";
    cin >> pos;

    deleteEle(arr, tot, pos, ele);

    printArr(arr, tot);

    delete[] arr;

    return 0;
}