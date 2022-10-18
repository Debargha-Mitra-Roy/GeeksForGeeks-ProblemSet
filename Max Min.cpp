/*
    Max Min :-

    Link:   https://practice.geeksforgeeks.org/problems/max-min/1
*/

#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    int findSum(int A[], int N)
    {
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int i = 0; i < N; i++)
        {

            if (A[i] > maxi)

                maxi = A[i];

            if (A[i] < mini)

                mini = A[i];
        }

        return (mini + maxi);
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
            cin >> arr[i];

        Solution ob;

        int ans = ob.findSum(arr, n);
        cout << ans;
        cout << "\n";
    }

    return 0;
}