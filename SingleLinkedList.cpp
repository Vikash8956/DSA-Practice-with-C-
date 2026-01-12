# include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void insert (int n)
{
    Node *newNode = new Node;
    newNode -> data = n;
    newNode -> next = head;
    head = newNode;
}
void print ()
{
    cout <<"Data elements in a single list are: ";
    Node *temp = head;
    while (temp! =NULL)
    {
        cout << temp ->data <<" ";
        temp = temp->next;
    }
}
int main ()
{
    insert (1);
    insert (2);
    insert (5);
    return 0;
}