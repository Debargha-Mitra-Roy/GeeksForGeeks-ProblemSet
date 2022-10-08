/*
    Number of Distinct Islands :-

    Link:   https://practice.geeksforgeeks.org/problems/number-of-distinct-islands/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int safePos(int n, int k)
    {
        int res = 1;

        for (int i = 2; i <= n; i++)
        {
            res = ((res + k - 1) % i) + 1;
        }

        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        Solution ob;
        cout << ob.safePos(n, k) << "\n";
    }

    return 0;
}