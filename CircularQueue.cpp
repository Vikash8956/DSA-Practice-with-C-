#include <iostream>
using namespace std;

#define n 5

int cq[n];
int front = -1, rear = -1;

void Insert() {
    int x;
    if ((rear + 1) % n == front) {
        cout << "Queue is Full\n";
        return;
    }

    if (front == -1)
        front = 0;

    cout << "Enter element: ";
    cin >> x;

    rear = (rear + 1) % n;
    cq[rear] = x;
}

void Delete() {
    if (front == -1) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Deleted element: " << cq[front] << endl;

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % n;
    }
}

void Display() {
    if (front == -1) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Queue elements: ";
    int i = front;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % n;
    }
    cout << endl;
}

void Peek() {
    if (front == -1)
        cout << "Queue is Empty\n";
    else
        cout << "Front element: " << cq[front] << endl;
}

int main() {
    int choice;
    do {
        cout << "\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: Insert(); break;
        case 2: Delete(); break;
        case 3: Display(); break;
        case 4: Peek(); break;
        case 5: cout << "Exit\n"; break;
        default: cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
