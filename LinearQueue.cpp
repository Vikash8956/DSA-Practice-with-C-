#include <iostream>
using namespace std;

#define n 5

int queue[n];
int front = -1, rear = -1;

void Insert() {
    int x;
    if (rear == n - 1) {
        cout << "Queue is Full\n";
        return;
    }

    if (front == -1)
        front = 0;

    cout << "Enter element: ";
    cin >> x;

    rear++;
    queue[rear] = x;
}

void Delete() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Deleted element: " << queue[front] << endl;
    front++;

    // Reset queue when empty
    if (front > rear) {
        front = rear = -1;
    }
}

void Peek() {
    if (front == -1)
        cout << "Queue is Empty\n";
    else
        cout << "Front element: " << queue[front] << endl;
}

void Display() {
    if (front == -1) {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice;
    do {
        cout << "\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 0: Insert(); break;
        case 1: Delete(); break;
        case 2: Display(); break;
        case 3: Peek(); break;
        case 4: cout << "Exit\n"; break;
        default: cout << "Invalid choice\n";
        }
    } while (choice != 5);

    return 0;
}
