#include <iostream>
using namespace std;

int arr[5] = {9, 4, 7, 1, 5};
int n = 5;

// merge function
void merge(int l, int m, int r)
{
    int i = l, j = m + 1, k = 0;
    int temp[5];

    while (i <= m && j <= r)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= m)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (int x = l, k = 0; x <= r; x++, k++)
        arr[x] = temp[k];
}

// merge sort
void mergesort(int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(l, m);
        mergesort(m + 1, r);
        merge(l, m, r);
    }
}

int main()
{
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    mergesort(0, n - 1);

    cout << "\nAfter Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
