/*
    Number of Distinct Islands :-

    Link:   https://practice.geeksforgeeks.org/problems/number-of-distinct-islands/1
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
private:
    void dfs(int r, int c, int m, int n, vector<vector<int>> &vis, vector<vector<int>> &grid, vector<pair<int, int>> &v)
    {
        if (r < 0 || c < 0 || r >= m || c >= n || vis[r][c] || grid[r][c] == 0)
            return;

        v.push_back({r, c});
        vis[r][c] = 1;
        
        dfs(r + 1, c, m, n, vis, grid, v);
        dfs(r - 1, c, m, n, vis, grid, v);
        dfs(r, c + 1, m, n, vis, grid, v);
        dfs(r, c - 1, m, n, vis, grid, v);
    }

public:
    int countDistinctIslands(vector<vector<int>> &grid)
    {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));
        set<vector<pair<int, int>>> s;

        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < n; c++)
            {
                if (!vis[r][c] && grid[r][c] == 1)
                {
                    vector<pair<int, int>> v;

                    dfs(r, c, m, n, vis, grid, v);

                    auto t = v[0];

                    for (auto &it : v)
                    {
                        it.first -= t.first;
                        it.second -= t.second;
                    }

                    if (s.find(v) == s.end())
                        s.insert(v);
                }
            }
        }

        return s.size();
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

        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout << obj.countDistinctIslands(grid) << "\n";
    }

    return 0;
}