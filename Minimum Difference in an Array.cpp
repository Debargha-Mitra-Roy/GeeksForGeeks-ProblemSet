/*
    Minimum Difference in an Array :-

    Link:   https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Sorting/problem/minimum-difference-in-an-array
*/

#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    int MinimumDifference(int arr[], int n)
    {
        int minimum = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            minimum = min(minimum, abs(arr[i] - arr[i + 1]));
        }

        return minimum;
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
        int diff = ob.MinimumDifference(arr, n);
        cout << diff << endl;
    }
    return 0;
}