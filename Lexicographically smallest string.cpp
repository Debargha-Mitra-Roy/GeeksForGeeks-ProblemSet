/*
    Lexicographically smallest string :-

    Link:   https://practice.geeksforgeeks.org/problems/mila-and-strings0435/1
*/

#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    string lexicographicallySmallest(string S, int k)
    {
        int n = S.size();

        if ((n != 0) and (n & (n - 1)) == 0)
        {
            if (n * 2 < k)
                return "-1";

            k /= 2;
        }

        else
        {
            if (n < 2 * k)
                return "-1";

            k *= 2;
        }

        k = n - k;

        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() and st.top() > S[i] and (n - i - 1) >= (k - st.size()))
            {
                st.pop();
            }

            if (st.size() < k)
                st.push(S[i]);
        }

        string res = "";

        while (!st.empty())
        {
            res = (char)st.top() + res;
            st.pop();
        }

        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        int k;
        cin >> S >> k;

        Solution ob;
        cout << ob.lexicographicallySmallest(S, k) << "\n";
    }

    return 0;
}