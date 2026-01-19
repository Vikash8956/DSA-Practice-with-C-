#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at end (helper function)
void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
}

// Delete from beginning
void deleteBeginning() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    Node* last = head;

    while (last->next != head) {
        last = last->next;
    }

    head = head->next;
    last->next = head;
    delete temp;
}

// Delete from end
void deleteEnd() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    delete temp;
}

// Delete at specific position
void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    if (pos == 1) {
        deleteBeginning();
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    for (int i = 1; i < pos; i++) {
        prev = temp;
        temp = temp->next;
        if (temp == head) {
            cout << "Invalid position\n";
            return;
        }
    }

    prev->next = temp->next;
    delete temp;
}

// Display list
void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(head)\n";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    cout << "Original List:\n";
    display();

    deleteBeginning();
    cout << "After deleting beginning:\n";
    display();

    deleteEnd();
    cout << "After deleting end:\n";
    display();

    deleteAtPosition(2);
    cout << "After deleting position 2:\n";
    display();

    return 0;
}
