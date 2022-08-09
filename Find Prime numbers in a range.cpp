/*
    Find Prime numbers in a range:-

    Link:   https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1#
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n == 2)
            return true;

        if (n < 2 || n % 2 == 0)
            return false;

        for (int i = 3; i * i <= n; i = i + 2)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    vector<int> primeRange(int m, int n)
    {
        vector<int> prime;

        for (int i = m; i <= n; i++)
        {
            if (isPrime(i))
                prime.push_back(i);
        }

        return prime;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> m >> n;

        Solution ob;

        vector<int> ans = ob.primeRange(m, n);

        for (auto u : ans)
        {
            cout << u << " ";
        }
        cout << "\n";
    }

    return 0;
}