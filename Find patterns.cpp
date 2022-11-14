/*
    Find patterns :-

    Link:   https://practice.geeksforgeeks.org/problems/find-patterns0606/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int numberOfSubsequences(string S, string W)
    {
        int ans = 0;

        while (true)
        {
            // Untill no such subsequence exist
            int i = 0, j = 0, flag = 0;

            while (i < S.size())
            {
                if (S[i] == W[j])
                {
                    j++;
                    S[i] = '*';

                    if (j == W.size())
                    {
                        ans++;
                        flag = 1; // A subsequence found
                        break;
                    }
                }
                i++;
            }

            if (flag == 0) // No subsequence found in this iteration
                break;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, W;
        cin >> S >> W;

        Solution ob;
        cout << ob.numberOfSubsequences(S, W) << "\n";
    }

    return 0;
}