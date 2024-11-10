
#include <iostream>
using namespace std;

class node
{
    int data;
    node *next;

public:
    node(int data, node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }

    friend void insertAtBegining(int value);
    friend void insertAtEnd(int value);
    friend void insertAtPosition(int value, int position);
    friend void deleteAtBegining();
    friend void deleteAtEnd();
    friend void deleteAtPosition(int position);
    friend void display();
};

node *head = nullptr;

void insertAtBegining(int value)
{
    node *newnode = new node(value);
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(int value)
{
    node *newnode = new node(value);
    newnode->next = nullptr;

    if (head == nullptr)
    {
        head = newnode;
        return;
    }

    node *ptr = head;

    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }

    ptr->next = newnode;
}

void insertAtPosition(int value, int position)
{
    if (position < 1)
    {
        cout << "Invalid position.";
    }

    if (position == 1)
    {
        insertAtBegining(value);
        return;
    }

    node *newnode = new node(value);

    node *ptr = head;
    int i = 2;
    while (ptr->next != nullptr && i < position - 1)
    {
        ptr = ptr->next;
        i++;
    }
    if (ptr == nullptr)
    {
        cout << "Given position was out of bounds.";
    }
    else
    {
        newnode->next = ptr->next; // now our node points to the node whose position we take.
        ptr->next = newnode;       // now our node takes position as previous node stores our node.
    }
}

void deleteAtBegining()
{
    if (head == nullptr)
    {
        cout << "List is empty";
    }

    node *temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd()
{
    if (head == nullptr)
    {
        cout << "List is empty.";
    }

    if (head->next == nullptr) // if there was only one node
    {
        delete head;
        head = nullptr;
    }

    node *ptr = head;
    while (ptr->next->next != nullptr)
    {
        ptr = ptr->next;
    }
    delete ptr->next;
    ptr->next = nullptr;
}

void deleteAtPosition(int position)
{
    if (position < 1)
    {
        cout << "Invalid Position";
    }

    if (position == 1)
    {
        deleteAtBegining();
    }

    node *ptr = head;
    int i = 2;
    while (ptr->next == nullptr && i < position - 1)
    {
        ptr = ptr->next;
    }
    if (ptr == nullptr || ptr->next == nullptr)
    {
        cout << "Position is out of bounds";
    }
    else
    {
        node *temp = ptr->next;
        ptr->next = temp->next; // our node would point to next node of the one we are to delete
        delete temp;
    }
}

void display()
{
    node *ptr = head;
    cout << "Your Linked List:\n";
    while (ptr != nullptr)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    insertAtEnd(10);
    insertAtEnd(11);
    insertAtEnd(12);
    insertAtEnd(13);
    insertAtEnd(14);
    display();

    cout << "Insert at begining:\n";
    insertAtBegining(15);
    display();

    cout << "Insert at position = 2\n";
    insertAtPosition(16, 2);
    display();

    cout << "Delete at begining\n";
    deleteAtBegining();
    display();

    cout << "Delete at end\n";
    deleteAtEnd();
    display();

    cout << "Delete at position = 2\n";
    deleteAtPosition(2);
    display();

    return 0;
}