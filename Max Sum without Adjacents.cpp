/*
    Max Sum without Adjacents:-

    Link:   https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int findMaxSum(int *arr, int n)
    {
        int prev1 = arr[0];
        int prev2 = 0;

        for (int i = 0; i < n; i++)
        {
            int pick = arr[i];

            if (i > 1)
                pick += prev2;

            int nonPick = prev1;
            int curr = max(pick, nonPick);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;

        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }

    return 0;
}