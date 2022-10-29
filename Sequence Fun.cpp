/*
    Phone directory:-

    LINK:	https://practice.geeksforgeeks.org/problems/phone-directory4628/1
*/

#include <iostream>
using namespace std;

#define mod 1000000007

class Solution
{
public:
    int NthTerm(int n)
    {
        // Code  here
        long long int ans = 1, i = 1;

        while (n != 0)
        {
            ans = (ans * i) % mod + 1;
            n--;
            i++;
        }

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

        Solution obj;

        int ans = obj.NthTerm(n);
        cout << ans << "\n";
    }

    return 0;
}