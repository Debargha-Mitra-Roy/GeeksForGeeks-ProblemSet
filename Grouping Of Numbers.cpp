/*
    Grouping Of Numbers :-

    Link:   https://practice.geeksforgeeks.org/problems/grouping-of-numbers0015/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int maxGroupSize(int arr[], int N, int K)
    {
        int temp[K] = {0};

        for (int i = 0; i < N; i++)
        {
            temp[arr[i] % K]++;
        }

        int ans = 0;

        for (int i = 1; i <= K / 2; i++)
        {
            if (i != K - i)
                ans += max(temp[i], temp[K - i]);

            else
            {
                if (temp[i] != 0)
                    ans++;
            }
        }

        if (temp[0] != 0)
            ans++;

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.maxGroupSize(arr, N, K) << "\n";
    }

    return 0;
}