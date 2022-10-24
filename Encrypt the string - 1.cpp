/*
    Encrypt the string - 1 :-

    Link:   https://practice.geeksforgeeks.org/problems/encrypt-the-string-10337/1
*/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string encryptString(string s)
    {
        string temp = "";

        int count = 1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
                count++;

            else
            {
                temp += s[i] + to_string(count);
                count = 1;
            }
        }

        reverse(temp.begin(), temp.end());

        return temp;
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

        string ans = obj.encryptString(s);
        cout << ans << "\n";
    }

    return 0;
}