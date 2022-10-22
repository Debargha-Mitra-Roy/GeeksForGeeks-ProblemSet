/*
    Filling Bucket :-

    LINK:	https://practice.geeksforgeeks.org/problems/filling-bucket0529/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    const int mod = 1e8;

private:
    int climbStair(int i, vector<int> &dp)
    {
        if (i <= 2)
            return i;

        if (dp[i] != -1)
            return dp[i];

        int a = climbStair(i - 1, dp);
        int b = climbStair(i - 2, dp);

        return dp[i] = (a + b) % mod;
    }

public:
    int fillingBucket(int N)
    {
        vector<int> dp(N + 1, -1);

        return climbStair(N, dp) % mod;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.fillingBucket(N) << "\n";
    }

    return 0;
}