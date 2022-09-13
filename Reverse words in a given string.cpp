/*
    Reverse words in a given string :-

    Link:   https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string reverseWords(string S)
    {
        string ans = "", temp = "";

        int n = S.length();

        for (int i = n - 1; i >= 0; i--)
        {
            if (S[i] == '.')
            {
                reverse(temp.begin(), temp.end());
                ans = ans + temp;
                ans.push_back('.');
                temp = "";
            }

            else
                temp.push_back(S[i]);
        }

        reverse(temp.begin(), temp.end());

        ans = ans + temp;
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