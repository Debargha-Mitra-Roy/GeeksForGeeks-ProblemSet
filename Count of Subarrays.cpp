/*
    Count of Subarrays :-

    Link:   https://practice.geeksforgeeks.org/problems/count-of-subarrays5922/1
*/

#include <iostream>
using namespace std;

#define ll long long

class Solution
{
public:
    ll countSubarray(int arr[], int n, int k)
    {
        ll count = 0;

        int i, j = 0;

        while (j < n)
        {

            if (arr[j] > k)
                count = count + (n - j);

            else
            {
                i = j;

                while (i < n)
                {
                    if (arr[i] > k)
                    {
                        count = count + n - i;
                        break;
                    }

                    i++;
                }
            }

            j++;
        }

        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;

        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        auto ans = ob.countSubarray(arr, n, k);
        cout << ans << "\n";
    }

    return 0;
}