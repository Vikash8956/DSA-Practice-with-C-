# include <iostream>
using namespace std;
int array[5] = {9,4,7,1,5}, n=5;
void bubblesort ()
{
    for (int i=0;  i<n-1; i++)
    {
        int swap =0;
        for (int j=0; j<n-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp;
                temp = array[j];
                array[j]= array[j+1];
                array[j+1] = temp;
                swap = 1;
            }
        }
        if (swap==0)
        {
            break;

        }
    }
}
void print ()
{
    for (int i=0; i<n; i++)
    {
        cout <<array[i] <<endl;
    }
}
int main()
{
    cout <<"Before Sorting Array Elements are" <<endl;
    print ();
    bubblesort ();
    cout <<"After sorting Array Element are "<<endl;
    print ();
    return 0;
}