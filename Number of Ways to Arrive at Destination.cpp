/*
    Number of Ways to Arrive at Destination :-

    Link:   https://practice.geeksforgeeks.org/problems/smallest-subset-with-greater-sum/1
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define mod 1000000007;

class Solution
{
public:
    int countPaths(int n, vector<vector<int>> &roads)
    {
        vector<vector<pair<int, int>>> adj(n);
        for (auto road : roads)
        {
            int u = road[0];
            int v = road[1];
            int t = road[2];

            adj[u].push_back({v, t});
            adj[v].push_back({u, t});
        }

        priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;
        vector<long long int> dist(n, 1e18);
        
        pq.push({0, 0});

        dist[0] = 0;
        long long int ans = 0;

        while (!pq.empty())
        {
            long long int node = pq.top().second, d = pq.top().first;
            pq.pop();

            if (node == n - 1 && d == dist[n - 1])
            {
                ans = (ans + 1) % mod;
                continue;
            }

            for (auto child : adj[node])
            {
                if (d + child.second <= dist[child.first])
                {
                    dist[child.first] = d + child.second;
                    pq.push({dist[child.first], child.first});
                }
            }
        }

        return ans;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i)
        {
            vector<int> temp;
            for (int j = 0; j < 3; ++j)
            {
                int x;
                cin >> x;

                temp.push_back(x);
            }

            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}