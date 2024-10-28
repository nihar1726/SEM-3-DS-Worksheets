// BST

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

    friend void InsertRecursively(node *newnode, int value);
    friend void PreOrder(node *newnode);
    friend void PostOrder(node *newnode);
    friend void InOrder(node *newnode);
};

void InsertRecursively(node *newnode, int value)
{
    if (value < newnode->data)
    {
        if (newnode->left == nullptr)
        {
            newnode->left = new node(value);
        }
        else
        {
            InsertRecursively(newnode->left, value);
        }
    }
    else
    {
        if (newnode->right == nullptr)
        {
            newnode->right = new node(value);
        }
        else
        {
            InsertRecursively(newnode->right, value);
        }
    }
}

void PreOrder(node *newnode)
{
    if (newnode == nullptr)
        return;

    cout << newnode->data << " ";
    PreOrder(newnode->left);
    PreOrder(newnode->right);
}

void PostOrder(node *newnode)
{
    if (newnode == nullptr)
        return;

    PostOrder(newnode->left);
    PostOrder(newnode->right);
    cout << newnode->data << " ";
}

void InOrder(node *newnode)
{
    if (newnode == nullptr)
        return;

    InOrder(newnode->left);
    cout << newnode->data << " ";
    InOrder(newnode->right);
}

int main()
{
    node *root = new node(5);

    InsertRecursively(root, 6);
    InsertRecursively(root, 3);
    InsertRecursively(root, 45);
    InsertRecursively(root, 55);
    InsertRecursively(root, 1);
    InsertRecursively(root, 8);

    cout << "POST ORDER TRAVERSAL: " << endl;
    PreOrder(root);
    cout << endl;

    cout << "PreORDER TRAVERSAL: " << endl;
    PostOrder(root);
    cout << endl;

    cout << "InORDER TRAVERSAL: " << endl;
    InOrder(root);
    cout << endl;

    return 0;
}