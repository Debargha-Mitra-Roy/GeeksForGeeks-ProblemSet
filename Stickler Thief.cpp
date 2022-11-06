/*
    Stickler Thief:-

    Link:   https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1
*/

#include <iostream>
using namespace std;
typedef long long int ll;

class Solution
{
public:
    int FindMaxSum(int arr[], int n)
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
    // Taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // Taking number of houses
        int n;
        cin >> n;

        // Inserting money of each house in the array
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // Calling function FindMaxSum()
        Solution ob;
        cout << ob.FindMaxSum(a, n) << endl;
    }

    return 0;
}