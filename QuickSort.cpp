# include <iostream>
using namespace std;
int array [5] = {9,4,7,1,5} , n=5;
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int low, int high)
{
    int pivot = array[high];
    int i = (low-1);
    for (int j=low; j<high; j++)
    {
        if (array[j]<=pivot)
        {
            i++;
            swap (&array[i], &array[j]);
        }
    }
    swap (&array[i+1], &array[high]);
    return (i+1);
}
void quicksort (int low, int high)
{
    if (low<high)
    {
       int pi = partition(low, high);
       quicksort (low, pi-1);
       quicksort (pi+1, high);
    }
}
void print ()
{
    for (int i=0; i<n; i++)
    {
        cout << array[i] <<endl;

    }
}
int main ()
{
    cout << "Before sorting array element are" <<endl;
    print();
    quicksort (0,n-1);
    cout <<"after sorting array element are" <<endl;
    print();
    return 0;

}