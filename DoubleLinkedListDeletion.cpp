# include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;
void insert (int n)
{
    Node *newNode = new Node;
    newNode -> data = n;
    newNode -> next = head;
    newNode -> prev = NULL;
    if (head!=NULL)
    {
        head -> prev = newNode;
    }
    head = newNode;
}
void print ()
{
    cout << "Data element in a double linked list are: ";
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp->data <<" ";
        temp = temp -> next;
    }
}
void deleteAtBeginning ()
{
    if (head == NULL)
    {
        cout << "The list is empty, nothing to delete." <<endl;
        return;

    }
    Node * temp = head;
    head = head -> next;
    if (head != NULL)
    {
        head -> prev = NULL;
    }
}
int main ()
{
    insert (5);
    insert (4);
    insert (3);
    insert (2);
    insert (1);
    deleteAtBeginning ();
    print ();
    return 0;

}
