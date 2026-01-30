# include <iostream>
using namespace std;

int nestedRecursion (int n)
{
    if (n > 100)
    {
        return n-10;
    }
    return nestedRecursion (nestedRecursion (n+11));
}

int main()
{
    cout << "Result: " << nestedRecursion (95);
    return 0;
}