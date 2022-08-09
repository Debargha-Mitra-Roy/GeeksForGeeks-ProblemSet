/*
    Learning Macros:-

    Link:   https://practice.geeksforgeeks.org/problems/learning-macros/1/
*/

#include <iostream>

#define MULTI(a, b) (a * b)

using namespace std;

void macros(int a, int b);

void macros(int a, int b)
{
    cout << MULTI(a, b);
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        macros(a, b);
    }

    return 0;
}