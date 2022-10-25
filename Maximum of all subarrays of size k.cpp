/*
    Maximum of all subarrays of size k :-

    Link:   https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
*/

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution
{
public:
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        deque<int> dq;

        int i = 0;

        while (i < k)
        {
            while (!dq.empty() && arr[dq.back()] <= arr[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);
            i++;
        }

        ans.push_back(arr[dq.front()]);

        while (i < n)
        {
            if (dq.front() <= i - k)
                dq.pop_front();

            while (!dq.empty() && arr[dq.back()] <= arr[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
            i++;
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
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        vector<int> ans = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}