/*
    Modular Multiplicative Inverse :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/modular-multiplicative-inverse-1587115620/0/
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int modInverse(int a, int m)
    {
        for (int i = 0; i < m; i++)
        {
            if ((a * i) % m == 1)
                return i;
        }

        return -1;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, m;
        cin >> a >> m;

        Solution ob;
        cout << ob.modInverse(a, m) << "\n";
    }

    return 0;
}