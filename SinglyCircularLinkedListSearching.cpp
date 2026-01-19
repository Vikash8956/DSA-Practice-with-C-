#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert node at end
void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head; // circular link
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

// Search function
bool search(Node* head, int key) {
    if (head == NULL) {
        return false;
    }

    Node* temp = head;
    do {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    } while (temp != head);

    return false;
}

// Display list
void display(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(HEAD)\n";
}

int main() {
    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    display(head);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (search(head, key))
        cout << "Element found in Circular Linked List\n";
    else
        cout << "Element not found\n";

    return 0;
}
