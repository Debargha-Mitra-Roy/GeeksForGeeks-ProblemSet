/*
    XOR Game :-
    
    LINK:   https://practice.geeksforgeeks.org/problems/xor-game2143/1#
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int xorCal(int k)
    {
        if (k == 1)
            return 2;

        if ((k & (k + 1)) == 0)
            return k / 2;

        return -1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        Solution ob;
        cout << ob.xorCal(k) << "\n";
    }

    return 0;
}