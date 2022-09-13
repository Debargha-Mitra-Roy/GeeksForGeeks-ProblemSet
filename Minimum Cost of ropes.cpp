/*
    Minimum Cost of ropes :-

    Link:   https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution
{
public:
    long long int minCost(long long int arr[], long long int n)
    {
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;

        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }

        long long int cost = 0;

        while (pq.size() > 1)
        {
            long long int first = pq.top();
            pq.pop();

            long long int second = pq.top();
            pq.pop();

            long long int mergedLength = first + second;
            cost = cost + mergedLength;

            pq.push(mergedLength);
        }

        return cost;
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

        long long int i, a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        cout << ob.minCost(a, n) << "\n";
    }

    return 0;
}