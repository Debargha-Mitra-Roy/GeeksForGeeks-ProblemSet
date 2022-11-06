/*
    Minimum number of Coins:-

    Link:   https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

public:
    vector<int> minPartition(int N)
    {
        int i = 9;
        vector<int> ans;

        while (N)
        {
            if (coins[i] <= N)
            {
                ans.push_back(coins[i]);
                N -= coins[i];
            }

            else
                i--;
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
        int N;
        cin >> N;

        Solution ob;

        vector<int> numbers = ob.minPartition(N);
        for (auto u : numbers)
        {
            cout << u << " ";
        }
        cout << "\n";
    }

    return 0;
}