/*
    Multiplication Under Modulo :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/multiplication-under-modulo/0/
*/

#include <iostream>
using namespace std;

#define mod (int)(1e9 + 7)

class Solution
{
public:
    long long int multiplicationUnderModulo(long long int a, long long int b)
    {
        long long int multiplication = ((a % mod) * (b % mod)) % mod;

        return multiplication;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.multiplicationUnderModulo(a, b) << "\n";
    }

    return 0;
}