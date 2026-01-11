#include <iostream>
using namespace std;

int main()
{
    // -------- Method 1: 
    int marks1[5] = {15, 20, 18, 17, 25};

    cout << "Method 1 Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << marks1[i] << " ";
    }
    cout << endl;

    // -------- Method 2: 
    int marks2[] = {15, 20, 18, 10, 17, 22, 19, 14};
    int size2 = sizeof(marks2) / sizeof(marks2[0]);

    cout << "Method 2 Array: ";
    for (int i = 0; i < size2; i++)
    {
        cout << marks2[i] << " ";
    }
    cout << endl;

    // Method 3: 
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[100];   // safe fixed size (important)

    cout << "Enter values of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Method 3 Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
