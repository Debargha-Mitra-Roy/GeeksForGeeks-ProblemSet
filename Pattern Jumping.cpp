/*
    Pattern Jumping:-

    Link:   https://practice.geeksforgeeks.org/problems/pattern-jumping4855/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    string canJump(long long N)
    {
        if ((N & N - 1) == 0)
            return "True";

        else
            return "False";
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;

        Solution ob;
        cout << ob.canJump(N) << "\n";
    }

    return 0;
}