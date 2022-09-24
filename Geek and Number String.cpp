/*
    Geek and Number String :-

    Link:   https://practice.geeksforgeeks.org/problems/904237fa926d79126d42c437802b04287ea9d1c8/1
*/

#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int minLength(string s, int n)
    {
        int ans = s.size();

        stack<char> st;

        int i = 0;

        while (i < n)
        {
            if (!st.empty() && abs(s[i] - st.top()) == 1 && abs(s[i] / 2 - st.top() / 2) == 1)
            {
                i++;
                ans = ans - 2;
                st.pop();
            }

            else if (!st.empty() && abs(s[i] - st.top()) == 9)
            {
                i++;
                ans = ans - 2;
                st.pop();
            }

            else
            {
                st.push(s[i]);
                i++;
            }
        }

        return ans;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}