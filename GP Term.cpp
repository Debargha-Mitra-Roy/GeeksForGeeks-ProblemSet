/*
    GP Term :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/gp-term/0/
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    double termOfGP(int A, int B, int N)
    {
        // Base Case
        if (N == 1)
            return A;

        return (termOfGP(A, B, N - 1) * (double(B) / double(A))); // Recursion
    }
};

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;

        int N;
        cin >> N;

        Solution ob;
        cout << floor(ob.termOfGP(A, B, N)) << endl;
    }

    return 0;
}