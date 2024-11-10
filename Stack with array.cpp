#include <iostream>
using namespace std;

class stack
{
    int *array;
    int capacity;
    int top;

public:
    stack(int size)
    {
        array = new int[size];
        capacity = size;
        top = -1;
    }
    ~stack()
    {
        delete[] array;
    }

    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow";
            return;
        }

        array[++top] = value;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return -1;
        }

        return array[top--];
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return -1;
        }

        return array[top];
    }
};

int main()
{
    stack s1(5);

    s1.push(10);
    s1.push(11);
    s1.push(12);
    s1.push(13);
    s1.push(14);
    cout << s1.peek() << endl;

    s1.pop();
    cout << s1.peek();

    return 0;
}
