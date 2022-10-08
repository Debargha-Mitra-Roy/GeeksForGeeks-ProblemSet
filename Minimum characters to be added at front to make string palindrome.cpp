/*
    Minimum characters to be added at front to make string palindrome :-

    Link:   https://practice.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int minChar(string str)
    {
        int n = str.size();
        int t = 0;
        int e = n - 1;
        int temp = e;
        int count = 0;

        while (t < e)
        {
            if (str[t] == str[e])
            {
                t++;
                e--;
            }

            else
            {
                count++;
                t = 0;
                temp--;
                e = temp;
            }
        }

        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        Solution ob;

        int ans = ob.minChar(str);
        cout << ans << "\n";
    }

    return 0;
}