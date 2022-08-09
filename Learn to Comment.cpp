/*
    Learn to Comment:-

    Link:   https://practice.geeksforgeeks.org/problems/learn-to-comment/1/
*/

#include <iostream>
using namespace std;

void comment(int, int, int);

void comment(int a, int b, int c)
{
    cout << a << "\n";
    // cout<<b<<"\n";
    cout << c << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        comment(a, b, c);
    }

    return 0;
}