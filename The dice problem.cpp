/*
    The dice problem:-

    Link:   https://practice.geeksforgeeks.org/problems/the-dice-problem2316/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int oppositeFaceOfDice(int N)
    {
        int ans = 7 - N;

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;

        int ans = ob.oppositeFaceOfDice(N);
        cout << ans << endl;
    }

    return 0;
}