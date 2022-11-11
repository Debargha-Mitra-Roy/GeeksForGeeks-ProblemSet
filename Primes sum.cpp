/*
    Primes sum :-

    Link:   https://practice.geeksforgeeks.org/problems/primes-sum5827/1
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
private:
    bool isPrime(int N)
    {
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
                return 0;
        }

        return 1;
    }

public:
    string isSumOfTwo(int N)
    {
        for (int i = 2; i < N; i++)
        {
            if (isPrime(N - i) && isPrime(i))
                return "Yes";
        }

        return "No";
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

        Solution ob;
        cout << ob.isSumOfTwo(N) << "\n";
    }

    return 0;
}