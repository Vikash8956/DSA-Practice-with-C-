# include <iostream>
using namespace std;
int array [5] = {9,4,7,1,5,}, n=5;
void mergesort (int l, int r)
{
    if (l<r)
    {
        int m = (l+r)/2;
        mergesort(l,m);
        mergesort(m+1,r);
        mergesort(l,m,r);
    }
}