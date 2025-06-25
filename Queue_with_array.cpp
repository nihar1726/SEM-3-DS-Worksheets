#include <iostream>
using namespace std;

class queue
{
    int *array;
    int front;
    int rear;
    int capacity;
    int size;

public:
    queue(int capacity)
    {
        this->capacity = capacity;
        front = 0;
        rear = -1;
        size = 0;
        array = new int[capacity];
    }

    ~queue()
    {
        delete[] array;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
        }

        rear++;
        array[rear] = value;
        size++;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }

        int dequeued_value = array[front];
        front++;
        size--;
        return dequeued_value;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return array[front];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Here's your Queue!" << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << array[i] << endl;
        }
    }
};

int main()
{
    queue q1(5);

    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);

    q1.display();

    q1.dequeue();
    q1.display();

    return 0;
}