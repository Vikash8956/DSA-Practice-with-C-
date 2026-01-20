#include <iostream>
using namespace std;

#define MAX 5   // Queue size

class Queue {
private:
    int arr[MAX];
    int front, rear;

public:
    // Constructor
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue Operation
    void enqueue(int value) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow" << endl;
        } else {
            if (front == -1)
                front = 0;
            arr[++rear] = value;
            cout << value << " enqueued into queue" << endl;
        }
    }

    // Dequeue Operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
        } else {
            cout << arr[front] << " dequeued from queue" << endl;
            front++;

            if (front > rear) {
                front = rear = -1;  // Reset queue
            }
        }
    }

    // Display Queue
    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}
