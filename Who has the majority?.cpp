/*
    Array insert at index :-

    Link:   https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/who-has-the-majority
*/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int majorityWins(int arr[], int n, int x, int y)
    {
        int ans = 0, count1 = 0, count2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
                count1++;

            if (arr[i] == y)
                count2++;
        }

        if (count1 > count2)
            ans = x;

        else if (count1 < count2)
            ans = y;

        else
            ans = min(x, y);

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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x, y;
        cin >> x >> y;

        Solution obj;
        cout << obj.majorityWins(arr, n, x, y) << "\n";
    }

    return 0;
}