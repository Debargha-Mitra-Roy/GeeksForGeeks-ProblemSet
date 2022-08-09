/*
    Factorial Of Number :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/factorial-of-number/0/
*/

#include <iostream>
using namespace std;

long long factorial(int);

class Solution
{
public:
    long long factorial(int N)
    {
        // Base Case
        if (N <= 1)
            return 1;

        return (N * factorial(N - 1));
    }
};

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;

        Solution ob;
        cout << ob.factorial(N) << "\n";
    }

    return 0;
}