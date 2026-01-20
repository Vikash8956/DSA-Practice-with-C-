#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// top pointer
Node* top = NULL;

// Push operation
void push(int x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    cout << x << " pushed to stack" << endl;
}

// Pop operation
void pop()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    Node* temp = top;
    cout << "The popped element is: " << top->data << endl;
    top = top->next;
    delete temp;
}

// Display stack
void display()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }

    Node* temp = top;
    cout << "Stack elements: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main()
{
    push(1);
    push(2);
    push(3);
    display();

    pop();
    display();

    return 0;
}
