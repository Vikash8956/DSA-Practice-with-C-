# include <iostream>
using namespace std;
int factorial (int n)
{
    int result = 1;
    for (int i=2; i<=n; i++)
    {
        result *= i; // result = result * i
    }
    return result;
}

int main()
{
    int n=5;
    cout <<"Factorial of " << n << " is: " << factorial (n);
    return 0;
}