/*
    Two numbers with odd occurrences :-

    Link:   https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1
*/

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution
{
public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)
    {
        long long int x = accumulate(Arr, Arr + N, 0ll, bit_xor<void>()), ans1 = 0, ans2 = 0;
        for (int i = 0; i < N; i++)
        {
            ((Arr[i] & x & (-x)) ? ans1 ^= Arr[i] : ans2 ^= Arr[i]);
        }

        return {max(ans1, ans2), min(ans1, ans2)};
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int N;
        cin >> N;

        long long int Arr[N];
        for (long int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }

        Solution ob;

        vector<long long int> ans = ob.twoOddNum(Arr, N);
        for (long long int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}