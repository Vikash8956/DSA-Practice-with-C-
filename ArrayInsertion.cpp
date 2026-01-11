#include <iostream>
using namespace std;

int main()
{
    int array[10], n, x;

    cout << "Enter size of array: ";
    cin >> n;

    // Size check
    if (n >= 10)
    {
        cout << "Array is full!" << endl;
        return 0;
    }

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter element to insert at beginning: ";
    cin >> x;

    // Shift elements to right
    for (int i = n; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = x;
    n++;

    cout << "Array elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}
