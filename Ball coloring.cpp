/*
    Ball coloring :-

    Link:   https://practice.geeksforgeeks.org/problems/ball-coloring3450/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    unsigned long long int noOfWays(unsigned long long int n)
    {
        return ((n * (n - 1)) + 2);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n;
        cin >> n;

        Solution ob;
        cout << ob.noOfWays(n) << endl;
    }

    return 0;
}