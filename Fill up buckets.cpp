/*
    Fill up buckets:-

    LINK:	https://practice.geeksforgeeks.org/problems/fill-up-buckets3500/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int totalWays(int n, vector<int> capacity)
    {
        long long int ans = 1;
        long long int mod = 1e9 + 7;

        sort(capacity.begin(), capacity.end());

        for (int i = 0; i < n; i++)
        {
            capacity[i] -= i;
            ans = (ans * capacity[i]) % mod;
        }

        return (int)ans % mod;
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
        vector<int> capacity(n);
        for (int i = 0; i < n; i++)
            cin >> capacity[i];
        Solution ob;
        int ans = ob.totalWays(n, capacity);
        cout << ans << "\n";
    }
    return 0;
}