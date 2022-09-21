/*
    License Key Formatting :-

    Link:   https://practice.geeksforgeeks.org/problems/license-key-formatting/1
*/

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string ReFormatString(string S, int K)
    {
        stack<char> st;
        
        int size = 0;

        for (auto chars : S)
        {
            if (chars == '-')
                continue;

            else if (chars >= 97 and chars <= 122)
                chars = chars - 32;

            size++;
            st.push(chars);
        }

        S = "";
        int j = 0;

        for (int i = 0; i < size; i++)
        {
            if (j == K)
            {
                S += '-';
                j = 0;
            }

            j++;

            char p = st.top();
            S += p;
            st.pop();
        }
        
        reverse(S.begin(), S.end());
        
        return S;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        int K;
        cin >> K;

        Solution ob;

        string ans = ob.ReFormatString(S, K);
        cout << ans << "\n";
    }

    return 0;
}