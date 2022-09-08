/*
    Smallest number with sum of digits as N and divisible by 10^N :-

    Link:   https://practice.geeksforgeeks.org/problems/smallest-number-with-sum-of-digits-as-n-and-divisible-by-10n4032/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string digitsNum(int N)
    {
        string ans = "";

        int temp = N;

        for (int i = 0; i < N; i++)
        {
            ans.push_back('0');
        }

        while (temp >= 9)
        {
            ans.push_back('9');
            temp = temp - 9;
        }

        if (temp > 0)
            ans = ans + to_string(temp);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        Solution ob;

        string ans = ob.digitsNum(n);
        cout << ans << "\n";
    }

    return 0;
}