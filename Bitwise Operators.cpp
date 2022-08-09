/*
    Bitwise Operators :-

    Link:   https://practice.geeksforgeeks.org/problems/bitwise-operators/1/
*/

#include <iostream>
using namespace std;

void bitWiseOperation(int, int, int);

void bitWiseOperation(int a, int b, int c)
{

    // Your code here
    int d = (a ^ a);
    int e = (c ^ b);
    int f = (a & b);
    int g = (c | (a ^ a));
    int h = (~e);

    cout << d << "\n";
    cout << e << "\n";
    cout << f << "\n";
    cout << g << "\n";
    cout << h << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}