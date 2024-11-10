#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int data, node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

class stack
{
    node *top = nullptr;

public:
    void push(int value)
    {
        node *newnode = new node(value);

        newnode->next = top;
        top = newnode;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow";
            return -1;
        }

        int poppedValue = top->data;

        node *temp = top;
        top = top->next;
        delete temp;

        return poppedValue;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow";
            return -1;
        }

        return top->data;
    }

    int sizeOfStack()
    {
        int count = 0;

        node *dummy = top;
        while (dummy != nullptr)
        {
            count++;
            dummy = dummy->next;
        }
        return count;
    }
};

int main()
{
    stack s1;

    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(13);
    s1.push(14);

    cout << s1.peek() << endl;
    cout << s1.sizeOfStack() << endl;

    s1.pop();
    cout << s1.peek() << endl;
    cout << s1.sizeOfStack() << endl;
    return 0;
}