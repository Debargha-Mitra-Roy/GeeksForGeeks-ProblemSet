/*
    Maximum number of 2X2 squares :-

    Link:   https://practice.geeksforgeeks.org/problems/maximum-number-of-22-squares/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    long long int numberOfSquares(long long int base)
    {
        long long int n = (base - 2) / 2;
        long long int ans = (n * (n + 1)) / 2;
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int base;
        cin >> base;

        Solution ob;
        cout << ob.numberOfSquares(base) << "\n";
    }

    return 0;
}