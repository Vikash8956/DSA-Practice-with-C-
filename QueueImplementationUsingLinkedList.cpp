#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // Enqueue Operation
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (rear == NULL) {   // Queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued into queue" << endl;
    }

    // Dequeue Operation
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow (Queue is empty)" << endl;
        } else {
            Node* temp = front;
            cout << temp->data << " dequeued from queue" << endl;
            front = front->next;

            if (front == NULL) { // Queue becomes empty
                rear = NULL;
            }
            delete temp;
        }
    }

    // Display Queue
    void display() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
        } else {
            Node* temp = front;
            cout << "Queue elements: ";
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}
