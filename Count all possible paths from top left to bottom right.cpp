/*
    Count all possible paths from top left to bottom right :-

    Link:   https://practice.geeksforgeeks.org/problems/count-all-possible-paths-from-top-left-to-bottom-right3011/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long int numberOfPaths(int m, int n)
    {
        vector<vector<long long int>> dp(m, vector<long long int>(n, 1));

        const int mod = 1e9 + 7;

        for (int i = m - 2; i >= 0; i--)
        {
            for (int j = n - 2; j >= 0; j--)
            {
                dp[i][j] = (dp[i][j + 1] + dp[i + 1][j]) % mod;
            }
        }

        return (dp[0][0] % mod);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;

        Solution ob;
        cout << ob.numberOfPaths(m, n) << "\n";
    }

    return 0;
}