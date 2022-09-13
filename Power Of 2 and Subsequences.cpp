/*
    Power Of 2 and Subsequences :-

    Link:   https://practice.geeksforgeeks.org/problems/power-of-2-and-subsequences0759/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    long long int numberOfSubsequences(int N, long long int A[])
    {
        int count = 0;
        const int mod = 1e9 + 7;

        for (int i = 0; i < N; i++)
        {
            if ((A[i] & A[i] - 1) == 0)
                count++;
        }

        long long int ans = 2;

        for (int i = 0; i < count - 1; i++)
        {
            ans = (ans * 2) % mod;
        }

        if (count == 0)
            ans = 0;

        else
            ans = (ans - 1);

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
        long long int A[N];
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        Solution ob;
        cout << ob.numberOfSubsequences(N, A) << "\n";
    }

    return 0;
}