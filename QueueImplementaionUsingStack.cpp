#include <iostream>
#include <stack>
using namespace std;

stack<int> stack1, stack2;

// Enqueue operation
void enqueue(int x)
{
    stack1.push(x);
    cout << x << " inserted into the queue" << endl;
}

// Dequeue operation
void dequeue()
{
    if (stack1.empty() && stack2.empty())
    {
        cout << "Queue is empty" << endl;
        return;
    }

    if (stack2.empty())
    {
        while (!stack1.empty())   // ✅ semicolon removed
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

    cout << "Element dequeued from the queue is: " << stack2.top() << endl;
    stack2.pop();
}

// Peek (Front element)
int peak()
{
    if (stack1.empty() && stack2.empty())
    {
        cout << "Queue is empty" << endl;
        return -1;
    }

    if (stack2.empty())
    {
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    return stack2.top();
}

// Display queue
void display()
{
    if (stack1.empty() && stack2.empty())
    {
        cout << "Queue is empty" << endl;
        return;
    }

    stack<int> temp = stack2;
    stack<int> reverseStack1 = stack1;

    cout << "Queue elements are: ";

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    stack<int> tempStack;
    while (!reverseStack1.empty())
    {
        tempStack.push(reverseStack1.top());
        reverseStack1.pop();
    }

    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    cout << "Front element of the queue is: " << peak() << endl; // ✅ fixed
    display();

    dequeue();
    dequeue();
    dequeue();

    display();
    return 0;
}
