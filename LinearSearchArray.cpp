# include <iostream>
using namespace std;
int main()
{
    int array [10] , n , x , i;
    cout << "Enter size of an array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter a number to search in array: "; 
    cin >> x;
    for (int i=0; i<n; i++)
    {
        if(array[i]==x)
        {
            cout << "Element found at index: " << i;
            break;
        }
    }
    if (i==n)
    {
        cout << "Element not found in array";
    }
    return 0;
}