# include <iostream>
using namespace std;
int array [10] , n , x;
int BinarySearch (int low,int high)
{
    while (low<=high)
    {
        int mid = (low+high)/2;
        if (array[mid]==x)
        {
            return mid;
        }
        else if (array[mid]>x)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}
int main()
{
    int array [10] , n;
    cout << "Enter size of an array: ";
    cin >>n;
    cout << "Enter array elements: ";
    for (int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter a number to serach in array: ";
    int result = BinarySearch (0,n-1);
    if (result==-1)
    {
        cout << "Element not found in array";
    }
    else
    {
        cout << "Element found at index:  " <<result;
    }
    return 0;
}
