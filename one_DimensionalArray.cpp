# include <iostream>
using namespace std;
// Method 1
int marks [5] = {15,20,18,17};
// Method 2
int marks [] = {15,20,18,10,17,22,19,14};
// Method 3 
int n;
cout << "Enter size of an array: " << endl;
cin >> n;
int a [n];
cout << "Enter values of an array: ";
for (int i = 0; i<= n-1; i++)
{
    cin >> a [i];
}
marks [0] = 15;
marks [1] = 18;
marks [2] = 14;
marks [3] = 20;
marks [4] = 25;
