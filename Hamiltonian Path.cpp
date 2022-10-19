/*
    Hamiltonian Path :-

    Link:   https://practice.geeksforgeeks.org/problems/hamiltonian-path2522/1
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
private:
    bool dfs(int i, map<int, vector<int>> &mpp, vector<bool> &vis, int count)
    {
        // Traverse every node of the path
        if (count == mpp.size())
            return true;

        vis[i] = true; // Marking node as visited

        // Going for unvisited adjacent nodes
        for (auto &it : mpp[i])
        {
            if (vis[it] == false)
            {
                if (dfs(it, mpp, vis, count + 1))
                    return true;
            }
        }

        vis[i] = false; // Marking node as unvisited

        return false;
    }

public:
    bool check(int N, int M, vector<vector<int>> Edges)
    {
        map<int, vector<int>> mpp;

        for (int i = 0; i < Edges.size(); i++)
        {
            // Storing nodes in adjacency list form
            int u = Edges[i][0];
            int v = Edges[i][1];

            mpp[u].push_back(v);
            mpp[v].push_back(u);
        }

        vector<bool> vis(mpp.size() + 1, false); // Visited array for checking visited nodes

        // Loop for every node in the graph
        for (int i = 1; i <= mpp.size(); i++)
        {
            int count = 1; // Number of visited nodes

            if (dfs(i, mpp, vis, count))
                return true;
        }

        return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, X, Y;
        cin >> N >> M;

        vector<vector<int>> Edges;
        for (int i = 0; i < M; i++)
        {
            cin >> X >> Y;
            Edges.push_back({X, Y});
        }

        Solution obj;

        if (obj.check(N, M, Edges))
            cout << "1"
                 << "\n";

        else
            cout << "0"
                 << "\n";
    }
}