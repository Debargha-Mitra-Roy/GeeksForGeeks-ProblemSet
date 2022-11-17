/*
    Sum of Beauty of All Substrings :-

    Link:   https://practice.geeksforgeeks.org/problems/sum-of-beauty-of-all-substrings-1662962118/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int beautySum(string s)
    {
        int n = s.length();

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int cnt[26] = {};

            for (int j = i; j < n; j++)
            {
                cnt[s[j] - 'a']++;

                int max = 0;
                int min = 600;

                for (int k = 0; k < 26; k++)
                {
                    if (cnt[k] > max)
                        max = cnt[k];

                    if (cnt[k] < min && cnt[k] != 0)
                        min = cnt[k];
                }

                if (min != 600)
                    count += (max - min);
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << "\n";
    }
    return 0;
}