/*
    Chicks in a Zoo :-

    Link:   https://practice.geeksforgeeks.org/problems/chicks-in-a-zoo1159/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    long long int NoOfChicks(int n)
    {
        long long int dp[n + 1];

        dp[0] = 0, dp[1] = 1;

        int preDay = 0;
        long long int sum = 1;

        for (int i = 2; i <= n; i++)
        {
            if (i >= 6)
                sum -= dp[preDay++];

            dp[i] = sum * 2;
            sum += dp[i];
        }

        return sum;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;

        Solution obj;

        long long int ans = obj.NoOfChicks(N);
        cout << ans << "\n";
    }

    return 0;
}