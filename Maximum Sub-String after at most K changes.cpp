/*
    Maximum Sub-String after at most K changes :-

    Link:   https://practice.geeksforgeeks.org/problems/maximum-sub-string-after-at-most-k-changes3220/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int mx = 1;

        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            int count = 0;
            int left = 0, right = 0;

            while (right < s.size())
            {
                if (s[right] == ch)
                {
                    mx = max(mx, right - left + 1);
                    right++;
                }

                else
                {
                    if (count < k)
                    {
                        count++;
                        mx = max(mx, right - left + 1);
                        right++;
                    }

                    else
                    {
                        while (left < s.size() && s[left] == ch)
                        {
                            left++;
                        }

                        left++;
                        count--;
                    }
                }
            }
        }

        return mx;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;

        int k;
        cin >> k;

        Solution obj;
        int ans = obj.characterReplacement(s, k);
        cout << ans << "\n";
    }

    return 0;
}