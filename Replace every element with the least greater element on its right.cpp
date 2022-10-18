/*
    Replace every element with the least greater element on its right :-

    Link:   https://practice.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    vector<int> findLeastGreater(vector<int> &arr, int n)
    {
        set<int> s;
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            auto it = s.upper_bound(arr[i]);

            if (it == s.end())
                ans[i] = -1;

            else
                ans[i] = *it;

            s.insert(arr[i]);
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
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;

        vector<int> ans = ob.findLeastGreater(arr, n);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}