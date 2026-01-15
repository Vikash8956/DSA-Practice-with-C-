# include <iostream>
using namespace std;
int stack [5] , n = 5 , top = -1;
void push (int x)
{
    if (top==n-1)
    cout << "Stack is full";
else
{
    top++;
    stack [top] = x;
}

}
void pop()
{
    if (top == -1)
    cout << "stack is empty" <<endl;
else
{
    cout << "the popped is: " << stack[top] <<endl;
    top--;
}

}
void display()
{
    if (top>=0)
    {
        cout << "Stact element are" <<endl;
        for (int i=top; i>=0; i--)
         cout << stack[i] <<endl;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();

}
