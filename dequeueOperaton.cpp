# include <iostream>
using namespace std;
int Queue [5] , n = 5 , x , front = - 1 , rear = -1;
void Insert ( )
{
    if (rear==n-1)
    {
        cout <<"Queue is full";
    }
    else
    {
        if (front==-1)
        {
            front = 0;
        }
        cout << "Insert the element in Queue: ";
        cin >> x;
        rear++;
        Queue [rear] = x;
    }
}
void Delete ()
{
    if (front==-1)
    {
        cout << "Queue is empty" <<endl;
    }
    else
    {
        cout << "Element deleted from queue is: " << Queue[front] <<endl;
        if (front==rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front ++;
        }
    }
}
int main()
{
    Insert ();
    Insert();
    Insert();
    Insert();
    Insert();
    Insert();
    delete();
    delete();



}