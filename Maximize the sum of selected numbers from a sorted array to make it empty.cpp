/*
    Maximize the sum of selected numbers from a sorted aay to make it empty :-

    Link:   https://practice.geeksforgeeks.org/problems/maximize-the-sum-of-selected-numbers-from-an-aay-to-make-it-empty0836/1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int maximizeSum(int a[], int n)
    {
        int sum = 0;

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
            mp[a[i]]++;

        int i = n - 1;

        while (i >= 0)
        {
            int x = a[i];

            if (mp.find(x - 1) != mp.end() && mp.find(x) != mp.end())
            {
                mp[x - 1]--;
                mp[x]--;

                if (mp[x - 1] == 0)
                    mp.erase(x - 1);

                if (mp[x] == 0)
                    mp.erase(x);

                sum += x;
            }

            else if (mp.find(x) != mp.end())
            {
                mp[x]--;

                if (mp[x] == 0)
                    mp.erase(x);

                sum += x;
            }

            i--;
        }

        return sum;
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

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        Solution ob;
        cout << ob.maximizeSum(a, n) << endl;
    }
}