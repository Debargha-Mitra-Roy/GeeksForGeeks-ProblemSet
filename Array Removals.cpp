/*
    Array Removals :-

    Link:   https://practice.geeksforgeeks.org/problems/array-removals/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

class Solution
{
public:
    int dp[101][101];

    // Function to check all possible combinations of removal and return the minimum one
    int countRemovals(vector<int> arr, int i, int j, int k)
    {
        // Base case when all elements are removed
        if (i >= j)
            return 0;

        // If condition is satisfied, no more removals are required
        else if ((arr[j] - arr[i]) <= k)
            return 0;

        // If the state has already been visited
        else if (dp[i][j] != -1)
            return dp[i][j];

        // When Amax - Amin > k
        else if ((arr[j] - arr[i]) > k)
        {

            // Minimum is taken of the removal of minimum element or removal of the maximum element
            dp[i][j] = min(countRemovals(arr, i + 1, j, k), countRemovals(arr, i, j - 1, k)) + 1;
        }

        return dp[i][j];
    }

    int removals(vector<int> &arr, int k)
    {
        int n = arr.size();

        // Sort the array
        sort(arr.begin(), arr.end());

        // Fill all stated with -1 when only one element
        memset(dp, -1, sizeof(dp));

        if (n == 1)
            return 0;

        else
            return countRemovals(arr, 0, n - 1, k);
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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        int ans = ob.removals(arr, k);
        cout << ans << "\n";
    }

    return 0;
}