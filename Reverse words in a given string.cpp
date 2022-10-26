/*
    Reverse words in a given string :-

    Link:   https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    string reverseWords(string S)
    {
        stack<string> st;

        for (int i = 0; i < S.length(); i++)
        {
            string word = "";

            while (S[i] != '.' && i < S.length())
            {
                word += S[i];
                i++;
            }

            st.push(word);
        }

        string ans = "";

        while (!st.empty())
        {
            ans = ans + st.top() + '.';
            st.pop();
        }

        ans.pop_back();

        return ans;
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

        Solution obj;
        cout << obj.reverseWords(s) << "\n";
    }

    return 0;
}