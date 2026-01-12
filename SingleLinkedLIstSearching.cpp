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
int search (int key)
{
    Node *temp = head;
    int pos = 1;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1;
}
int main()
{
    insert (9);
    insert (8);
    insert (7);
    insert (5);
    insert (2);
    int position = search (7);
    if (position == -1)
    {
        cout << "Element not found in the list." <<endl;
    }
    else
    {
        cout << "Element fount at position " << position <<" in the list." <<endl;
    }
    
    return 0;


}
