/*
    Minimum sum partition :-

    Link:   https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{

public:
    int minDifference(int arr[], int n)
    {
        int ans = INT_MAX;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        bool t[n + 1][sum + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (i == 0)
                    t[i][j] = false;

                if (j == 0)
                    t[i][j] = true;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (arr[i - 1] <= j)
                    t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];

                else
                    t[i][j] = t[i - 1][j];
            }
        }

        vector<int> s1;

        for (int i = 0; i < sum / 2 + 1; i++)
        {
            if (t[n][i])
                s1.push_back(i);
        }

        for (int it : s1)
        {
            ans = min(ans, sum - (2 * it));
        }

        return ans;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        cout << ob.minDifference(a, n) << "\n";
    }

    return 0;
}