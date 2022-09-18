/*
    Composite and Prime :-

    Link:   https://practice.geeksforgeeks.org/problems/composite-and-prime0359/1
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
private:
    bool isPrime(int n)
    {
        if (n == 1)
            return false;

        else
        {
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                    return false;
            }

            return true;
        }
    }

public:
    int Count(int L, int R)
    {
        int primeCount = 0, compositeCount = 0;

        for (int i = L; i <= R; i++)
        {
            if (isPrime(i) == true)
                primeCount++;

            else
            {
                if (i >= 4)
                    compositeCount++;
            }
        }

        int ans = compositeCount - primeCount;
        return ans;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int L, R;
        cin >> L >> R;

        Solution obj;

        int ans = obj.Count(L, R);
        cout << ans << "\n";
    }

    return 0;
}