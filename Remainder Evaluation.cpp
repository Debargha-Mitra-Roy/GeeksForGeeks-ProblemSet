/*
    Remainder Evaluation:-

    Link:   https://practice.geeksforgeeks.org/problems/remainder-evaluation3755/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int findRemainder(int num1, int num2)
    {
        int rem = num1 % num2;

        return rem;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        Solution ob;

        int ans = ob.findRemainder(num1, num2);
        cout << ans << "\n";
    }

    return 0;
}