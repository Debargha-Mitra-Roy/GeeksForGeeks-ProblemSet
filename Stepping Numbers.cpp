/*
    Stepping Numbers:-

    Link:   https://practice.geeksforgeeks.org/problems/stepping-numberswrong-output1813/1
*/

#include <iostream>
using namespace std;

class Solution
{
private:
    bool solve(int n)
    {
        int a = n % 10;
        n /= 10;

        while (n != 0)
        {
            if (abs(a - n % 10) != 1)
                return false;

            a = n % 10;
            n /= 10;
        }

        return true;
    }

public:
    int steppingNumbers(int n, int m)
    {
        int ans = 0;

        for (int i = n; i <= m; i++)
        {
            if (solve(i))
                ans++;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        Solution obj;
        cout << obj.steppingNumbers(n, m) << endl;
    }

    return 0;
}