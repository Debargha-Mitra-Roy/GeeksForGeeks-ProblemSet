/*
    Number Of Islands :-

    Link:   https://practice.geeksforgeeks.org/problems/number-of-islands/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void dfs(vector<vector<int>> &grid, vector<vector<int>> &vis, int r, int c, int n, int m)
    {
        if (r < 0 || r >= n || c < 0 || c >= m || grid[r][c] == 0 || vis[r][c] == 1)
            return;

        vis[r][c] = 1;

        dfs(grid, vis, r + 1, c, n, m);
        dfs(grid, vis, r - 1, c, n, m);
        dfs(grid, vis, r, c + 1, n, m);
        dfs(grid, vis, r, c - 1, n, m);
    }

public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
    {
        vector<int> ans;
        vector<vector<int>> grid(n, vector<int>(m, 0));

        for (auto it : operators)
        {
            int count = 0;
            grid[it[0]][it[1]] = 1;

            vector<vector<int>> vis(n, vector<int>(m, 0));

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (vis[i][j] == 0 && grid[i][j] == 1)
                    {
                        dfs(grid, vis, i, j, n, m);
                        count++;
                    }
                }
            }
            
            ans.push_back(count);
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
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> a;

        for (int i = 0; i < k; i++)
        {
            vector<int> temp;
            for (int j = 0; j < 2; j++)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }

            a.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.numOfIslands(n, m, a);

        for (auto x : res)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}