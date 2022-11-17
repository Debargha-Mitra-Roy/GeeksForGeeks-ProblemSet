/*
    Longest Perfect Piece :-

    LINK:	https://practice.geeksforgeeks.org/problems/close-to-perfection1525/1
*/

#include <iostream>
#include <set>
using namespace std;

class Solution
{
public:
    int longestPerfectPiece(int arr[], int N)
    {
        multiset<int> s;
        int ans = 0;

        for (int i = 0, j = 0; i < N; i++)
        {
            s.insert(arr[i]);
            while (*s.rbegin() - *s.begin() > 1)
            {
                s.erase(s.find(arr[j++]));
            }
            ans = max(ans, (int)s.size());
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
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.longestPerfectPiece(arr, N) << "\n";
    }

    return 0;
}