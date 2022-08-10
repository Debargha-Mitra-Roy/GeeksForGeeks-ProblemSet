/*
    Exactly 3 Divisors :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/exactly-3-divisors/0/
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
private:
    bool isPrime(int N)
    {
        if (N == 1)
            return false;

        int count = 0;

        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
                count++;
        }

        if (count == 0)
            return true;

        else
            return false;
    }

public:
    int exactly3Divisors(int N)
    {
        int count = 0;

        for (int i = 2; i <= sqrt(N); i++)
        {
            if (isPrime(i))
                count++;
        }

        return count;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.exactly3Divisors(N) << "\n";
    }

    return 0;
}