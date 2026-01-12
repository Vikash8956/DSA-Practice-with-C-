# include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void insert(int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void traverse ()
{
    Node *temp = head;
    cout << "Element in a single linked list are";
    while (temp != NULL)
    {
       cout << temp->data <<" ";
       temp = temp->next;
       
    }
}
int main()
{
    insert (5);
    insert (4);
    insert (3);
    insert (2);
    insert (1);
    traverse ();
    return 0;


}
