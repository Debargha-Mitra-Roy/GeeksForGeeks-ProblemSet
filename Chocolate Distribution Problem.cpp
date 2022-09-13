/*
    Chocolate Distribution Problem :-

    Link:   https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    long long int findMinDiff(vector<long long int> a, long long int n, long long int m)
    {
        sort(a.begin(), a.end());

        int i = 0, j = m - 1;
        int minimum = INT_MAX;

        while (j < a.size())
        {
            int diff = a[j] - a[i];
            minimum = min(minimum, diff);
            i++;
            j++;
        }

        return minimum;
    }
};

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a;
        long long int x;
        for (long long int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }

        long long int m;
        cin >> m;

        Solution ob;
        cout << ob.findMinDiff(a, n, m) << endl;
    }

    return 0;
}