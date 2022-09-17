/*
    Minimum Swaps :-

    Link:   https://practice.geeksforgeeks.org/problems/minimum-swaps-1649134975/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int minimumSwaps(int c[], int v[], int n, int k, int b, int T)
    {
        int swap = 0, count = 0;

        for (int i = n - 1; i >= 0; i--)

        {
            // position + speed * time;
            int val = c[i] + (v[i] * T);

            // If sheep not reaching so it is slow sheep
            if (val < b)
                count++; // slow sheeps

            else
            {
                k--;

                // Add slow sheeps count into swap
                swap = swap + count;

                if (k == 0)
                    return swap;
            }
        }

        return -1;
    }
};

int main()
{
    int t = 1, testcases = 1;
    cin >> t;
    while (t--)
    {
        int n, k, b, T;
        cin >> n >> k >> b >> T;

        int c[n], v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        Solution obj;

        int ans = obj.minimumSwaps(c, v, n, k, b, T);
        cout << ans << "\n";
    }

    return 0;
}