#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data, node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

class queue
{
    node *front;
    node *rear;

public:
    queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(int value)
    {
        node *newnode = new node(value);

        if (isEmpty())
        {
            front = rear = newnode;
        }
        else
        {
            rear->next = newnode;
            rear = newnode;
        }
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }

        int dequeued_value = front->data;
        node *temp = front;
        front = front->next;

        if (front == nullptr) // in case queue becomes empty after dequeuing
        {
            rear = nullptr;
        }

        delete temp;
        return dequeued_value;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }

        return front->data;
    }

    ~queue()
    {
        while (!isEmpty())
        {
            dequeue(); // Dequeue all elements
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Here's your queue." << endl;
        node *temp = front;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    queue q1;

    q1.enqueue(10);
    q1.enqueue(11);
    q1.enqueue(12);
    q1.enqueue(13);
    q1.enqueue(14);
    q1.display();

    q1.dequeue();
    q1.display();
    return 0;
}