/*
    Count ways to N'th Stair(Order does not matter) :-

    Link:   https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int nthStair(int n)
    {
        return (n / 2 + 1);
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        Solution ob;

        int ans = ob.nthStair(n);
        cout << ans << "\n";
    }

    return 0;
}