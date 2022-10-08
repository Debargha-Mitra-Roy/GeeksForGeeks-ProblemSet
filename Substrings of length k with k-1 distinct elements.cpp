/*
    Substrings of length k with k-1 distinct elements :-

    Link:   https://practice.geeksforgeeks.org/problems/substrings-of-length-k-with-k-1-distinct-elements/1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int countOfSubstrings(string S, int K)
    {
        unordered_map<char, int> mpp;

        int i = 0, j = 0, count = 0;
        int n = S.size();

        while (j < n)
        {
            mpp[S[j]]++;

            if (j == i + K - 1)
            {
                if (mpp.size() == K - 1)
                    count++;

                mpp[S[i]]--;

                if (mpp[S[i]] == 0)
                    mpp.erase(S[i]);

                i++;
            }

            j++;
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
        string S;
        int K;
        cin >> S;
        cin >> K;

        Solution ob;
        cout << ob.countOfSubstrings(S, K) << "\n";
    }

    return 0;
}