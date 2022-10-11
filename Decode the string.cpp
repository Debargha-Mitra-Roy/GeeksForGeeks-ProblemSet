/*
    Decode the string :-

    LINK:	https://practice.geeksforgeeks.org/problems/decode-the-string2444/1
*/

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string decodedString(string s)
    {
        stack<char> st;
        string res = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ']')
            {
                string temp;

                while (!st.empty() && st.top() != '[')
                {
                    temp += st.top();
                    st.pop();
                }

                st.pop(); // remove '['

                reverse(temp.begin(), temp.end());

                string num; // num to store the number of times we have to repeat

                while (!st.empty() && isdigit(st.top()))
                {
                    num += st.top();
                    st.pop();
                }

                reverse(num.begin(), num.end());

                int n = stoi(num); // string to int

                for (int i = 0; i < n; i++)
                {
                    for (auto it : temp)
                    {
                        st.push(it);
                    }
                }
            }

            else

                st.push(s[i]);
        }

        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";
    }

    return 0;
}