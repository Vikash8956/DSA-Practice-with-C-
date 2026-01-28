# include <iostream>
using namespace std;
void tailRecursion (int n)
{
    if (n==0)
    {
        return;
    }
    cout << n << " ";
    tailRecursion (n-1); // recursive call is the statement
}
int main()
{
    tailRecursion (5);
    return 0;
}