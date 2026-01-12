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
void deleteFirstNode ()
{
    if (head==NULL)
    {
        cout <<"List is empty, nothing to delete." <<endl;
        return;
    }
    Node *temp = head;
    head = head -> next; 
    delete temp;
}
void deleteLastNode ()
{
    if (head==NULL)
    {
        cout << "List is empty, nothing to delete" <<endl;
        return;
    }
    if (head->next==NULL)
    {
       delete head;
       head = NULL;
       return; 
    }
    Node *temp = head;
    while (temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
void deleteNodeAtPosition (int position)
{
    if (head==NULL)
    {
        cout <<"List is empty, nothing to delete" <<endl;
        return;
    }
    Node *temp = head;
    if (position==1)
    {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i=1; temp!=NULL && i<position-1; i++)
    {
        temp = temp->next;
    }
    if (temp==NULL || temp->next==NULL)
    {
        cout << "Position " <<position <<"does not exist in the list." <<endl;
    }
    Node *next = temp->next->next;
    delete temp->next;
    temp->next = next;
}
void print ()
{
    cout << "Data element in a single linked list are: ";
    Node *temp = head;
    while (temp!=NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
int main()
{
    insert (5);
    insert (4);
    insert (3);
    insert (2);
    insert (1);
    deleteFirstNode ();
    deleteLastNode ();
    deleteNodeAtPosition (2);
    print ();
    return 0;

}