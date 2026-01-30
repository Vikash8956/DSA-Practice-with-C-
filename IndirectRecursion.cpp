# include <iostream>
using namespace std;

void functionA (int n);
void functionB (int n);

void function (int n)
{
    if (n > 0)
    {
        cout << "A: " << n << endl;
        function (n-1);
    }
}
void functionB (int n)
{
    if (n > 0)
    {
        cout << "B: " << n << endl;
        functionA (n / 2);
    }
}

int main()
{
    functionA (5);
    return 0;

}