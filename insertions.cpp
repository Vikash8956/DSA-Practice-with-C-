# include <iostream>
using namespace std;
int array[5] = {9,4,7,1,5}, n=5;
void insertionsort ()
{
    for (int i=1; i<n; i++)
    {
        int key = array[1];
        int j = i-1;
        while (key < array[i] && j>=0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
void print ()
{
    for (int i=0; i<n; i++)
    {
        cout << array[i] <<endl;
    }
}
int main()
{
    cout << "before sorting Array Element are" <<endl;
    print ();
    insertionsort ();
    cout << "After sorting Array Element are" <<endl;
    print();
    return 0;
    
}