/*
    GP Term :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/gp-term/0/
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
private:
    bool isprime(int n)
    {
        if (n <= 1)
            return false;

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }

public:
    int NthTerm(int N)
    {
        if (N == 1)
            return 1;

        if (isprime(N))
            return 0;

        int val = 0;

        for (int i = N - 1; i > 2; i--)
        {
            if (isprime(i))
            {
                val = N - i;
                break;
            }
        }

        int start = N + 1;
        int count = 0;

        for (int i = start; i < 2 * N; i++)
        {
            if (isprime(i))
            {
                count = i - N;
                break;
            }
        }

        return min(val, count);
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;

        Solution obj;

        int ans = obj.NthTerm(N);
        cout << ans << "\n";
    }

    return 0;
}