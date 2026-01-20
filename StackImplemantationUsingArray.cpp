#include <iostream>
using namespace std;

#define MAX 5   // Stack size

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Push Operation
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack" << endl;
        }
    }

    // Pop Operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << arr[top--] << " popped from stack" << endl;
        }
    }

    // Peek Operation
    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display Stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.display();
    s.pop();
    s.display();

    return 0;
}
