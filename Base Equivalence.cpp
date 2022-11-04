/*
    Base Equivalence :-

    Link:   https://practice.geeksforgeeks.org/problems/base-equivalence1022/1
*/

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    string baseEquiv(int n, int m)
    {
        bool flag = false;
        for (int i = 2; i <= 32; i++)
        {
            int num = n;
            int count = 0;
            while (num > 0)
            {
                num /= i;
                count++;
            }
            
            if (count == m)
            {
                flag = true;
                break;
            }
        }
        return ((flag) ? "Yes" : "No");
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

        Solution ob;
        cout << ob.baseEquiv(n, m) << endl;
    }

    return 0;
}