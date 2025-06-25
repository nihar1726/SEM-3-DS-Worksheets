//WAP perform insertion and deletion on linked list

#include <iostream>
using namespace std;

class node
{
    public:
    int value;
    node* next;

    public:
    node(int value, node* next = nullptr) //called whenever a node is created
    {
        this -> value = value;
        this -> next = next;
    }
};

class linked_list
{
    node* head;

    public:
    linked_list()
    {
        head = nullptr;
    }

    void insert(int value);
    void print_ll();
    void insert_at_begining(int value);
    void insertAtPosition(int value, int position);
    void deleteAtBeginning();
    void deleteAtEnd();
    void deleteAtPosition(int position);

};

void linked_list::insert(int value) //this is a member funtion to class linked_list
{
    node* newnode = new node(value); //calls constructor from node class

    if(head == nullptr)
    {
        head = newnode;
    }
    else
    {
        node* current = head;
        while(current -> next != nullptr) //loop would find the last node
        {
            current = current -> next; //that node is set as current
        }
        current -> next = newnode; //next pointer in that node stores address of new node that we created at the end
    }
}

void linked_list::insert_at_begining(int value)
{
    node* newnode = new node(value); //value is initialised and next pointer is set to null becuase of constructor

    if(head == nullptr)
    {
        head = newnode;
    }
    else
    {
        newnode -> next = head; //meaning the address head was stroring is given to this node which will be at the begining
        head = newnode; //as this is the first node now
    }
}

void linked_list::insertAtPosition(int value, int position) 
{
    node* newNode = new node(value); // create a new node

    if (position == 0 || head == nullptr) 
    {
        newNode ->  next = head;
        head = newNode;
    } 
    else 
    {
        node* current = head;
        for (int i = 0; i < position - 1; i++) //loop runs until the position is found
        {
            if (current->next == nullptr) 
            {
                cerr << "Position out of range. List has fewer elements than the specified position." <<endl;
                delete newNode; // free the memory to prevent memory leak
                return;
            }
            current = current -> next; //current finally at the end points to that position
        }
        newNode -> next = current -> next; //new node stores address of next node
        current -> next = newNode; //the position node now stores address of new node
    }
}

void linked_list::deleteAtBeginning() 
{
    if (head == nullptr) 
    {
        cerr << "List is empty. Cannot delete from an empty list." << std::endl;
        return;
    }

    node* temp = head;
    head = head -> next;
    delete temp;
}

void linked_list::deleteAtEnd() 
{
    if (head == nullptr) 
    {
        cerr << "List is empty. Cannot delete from an empty list." << std::endl;
        return;
    }

    if (head -> next == nullptr) 
    {
        delete head;
        head = nullptr;
        return;
    }

    node* current = head;
    while (current -> next -> next != nullptr) 
    {
        current = current->next;
    }

    delete current -> next;
    current -> next = nullptr;
}

void linked_list::deleteAtPosition(int position) 
{
    if (head == nullptr) 
    {
        cerr << "List is empty. Cannot delete from an empty list." <<endl;
        return;
    }

    if (position < 0) 
    {
        cerr << "Invalid position. Position should be a non-negative integer." <<endl;
        return;
    }

    if (position == 0) 
    {
        deleteAtBeginning();
        return;
    }

    node* current = head;
    int currentIndex = 0;
    while (current -> next != nullptr && currentIndex < position - 1) 
    {
        current = current -> next;
        currentIndex++;
    }

    if (current -> next == nullptr) 
    {
        cerr << "Position out of range. Cannot delete node at position " << position <<endl;
        return;
    }

    node* temp = current->next;
    current -> next = current -> next -> next;
    delete temp;
}

void linked_list::print_ll() //this is a member function to class linked_list
{
    node* current = head;

    while(current != nullptr)
    {
        cout<<current -> value<<endl;
        current = current -> next;
    }
    cout<<endl;
}

int main()
{
    linked_list list1; //this object would access the insert function to created node that will be linked to eachother hence creating a linked list

    list1.insert(10);
    list1.insert(11);
    list1.insert(12);
    cout<<"CREATION on linked list by INSERTION AT THE END"<<endl;
    list1.print_ll();

    cout<<"INSERTION AT BEGINING"<<endl;
    list1.insert_at_begining(13);
    list1.print_ll();

    cout<<"INSERTION AT SPECIFIC POSITION"<<endl;
    list1.insertAtPosition(14, 2);
    list1.print_ll();

    cout<<"DELETION AT BEGINING"<<endl;
    list1.deleteAtBeginning();
    list1.print_ll();

    cout<<"DELETION AT END"<<endl;
    list1.deleteAtEnd();
    list1.print_ll();

    cout<<"DELETION AT SPECIFIC POSITION"<<endl;
    list1.deleteAtPosition(1);
    list1.print_ll();
    return 0;
    
}