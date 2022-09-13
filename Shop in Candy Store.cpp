/*
    Shop in Candy Store :-

    Link:   https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        vector<int> ans;

        sort(candies, candies + N);

        // For minimum amount
        int minimum = 0, buyMin = 0, freeMin = N - 1;

        while (buyMin <= freeMin)
        {
            minimum = minimum + candies[buyMin];
            buyMin++;
            freeMin = freeMin - K;
        }

        ans.push_back(minimum);

        // For maximum amount
        int maximum = 0, buyMax = N - 1, freeMax = 0;

        while (freeMax <= buyMax)
        {
            maximum = maximum + candies[buyMax];
            buyMax--;
            freeMax = freeMax + K;
        }

        ans.push_back(maximum);

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;

        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << "\n";
    }

    return 0;
}