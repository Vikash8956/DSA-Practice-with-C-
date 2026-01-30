# include <iostream>
using namespace std;
int factorial (int n)
{
    if (n==0 || n==1) // Base case
    {
        return 1;
    }
    else
    {
        return n * factorial (n-1); // Recursive Call
    }
}

int main ()
{
    int n=5;
    cout <<"Factorial of " << n << " is: " << factorial (n);
    return 0;
}