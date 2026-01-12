# include <iostream>
using namespace std;
int array [5] = {9,4,7,1,5}, n=5;
void SelectionSort ()
{
    for (int i=0; i<n-1; i++)
    {
        int min = i;
        for (int j=i+1; j<n; j++)
        {
            min = j;
        }
    }
    if (array[j]<array[min])
    {
        min = j;
    }
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }

void print()
{
    for (int k=0; k<n; k++)
    {
        cout << array [k] <<endl;
    }
}
int main()
{
    cout<<"before sorting array Elements are" <<endl;
    print();
    SelectionSort();
    cout << "After sorting array Element are" <<endl;
    print();
    return 0;
}


