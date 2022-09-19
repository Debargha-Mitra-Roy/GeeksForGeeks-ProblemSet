/*
    Smallest number on left :-

    Link:   https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> leftSmaller(int n, int a[])
    {
        vector<int> ans(n);
        stack<int> st;
        
        st.push(-1);

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && st.top() >= a[i])
            {
                st.pop();
            }

            ans[i] = st.top();
            st.push(a[i]);
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

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}