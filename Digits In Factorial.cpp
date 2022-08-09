/*
    Digits In Factorial :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/digits-in-factorial/0/
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    int digitsInFactorial(int N)
    {
        // Base Case
        if (N <= 2)
            return 1;

        else
        {
            double digitCount = 1;

            for (int i = N; i >= 1; i--)
            {
                digitCount = digitCount + log10(i);
            }

            return floor(digitCount);
        }
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
        cout << ob.digitsInFactorial(N) << "\n";
    }

    return 0;
}