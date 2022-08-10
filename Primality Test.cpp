/*
    Primality Test :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/primality-test/0/
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
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

        if (ob.isPrime(N))
            cout << "Yes";

        else
            cout << "No";

        cout << "\n";
    }

    return 0;
}