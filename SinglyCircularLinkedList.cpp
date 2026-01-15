#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at Beginning
void InsertAtBeginning(int n)
{
    Node* newNode = new Node;
    newNode->data = n;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}

// Insert at End
void InsertAtEnd(int n)
{
    Node* newNode = new Node;
    newNode->data = n;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
    }
}

// Insert at Position (1-based index)
void InsertAtPosition(int pos, int n)
{
    if (pos == 1)
    {
        InsertAtBeginning(n);
        return;
    }

    Node* newNode = new Node;
    newNode->data = n;

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
}

// Print Circular Linked List
void print()
{
    if (head == NULL)
        return;

    Node* temp = head;
    cout << "Data elements in circular linked list: ";

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main()
{
    InsertAtBeginning(1);
    InsertAtEnd(5);
    InsertAtPosition(2, 8);

    print();
    return 0;
}
