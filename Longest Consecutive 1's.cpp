/*
    Longest Consecutive 1's :-

    LINK:	https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1/
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    /* Function to find the length of the longest consecutive 1s in binary representation of a number */
    int max_consecutive_ones(int x)
    {
        int count = 0;

        while (x != 0)
        {
            x = (x & (x << 1));
            count++;
        }

        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        /* Function call */
        Solution obj;
        cout << obj.max_consecutive_ones(n) << "\n";
    }

    return 0;
}