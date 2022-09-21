/*
    IPL 2021 - Match Day 2 :-

    Link:   https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        vector<int> ans;
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < k; i++)
        {
            pq.push({arr[i], i});
        }

        ans.push_back(pq.top().first);

        for (int i = k; i < n; i++)
        {
            pq.push({arr[i], i});

            while ((pq.top().second > i - k) == false)
            {
                pq.pop();
            }

            ans.push_back(pq.top().first);
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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;

        vector<int> res = ob.max_of_subarrays(arr, n, k);

        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}