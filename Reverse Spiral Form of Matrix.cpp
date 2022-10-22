/*
    Merge two sorted linked lists :-

    LINK:	https://practice.geeksforgeeks.org/problems/reverse-spiral-form-of-matrix4033/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    void dfsRight(int i, int j, int n, int m, vector<vector<int>> &a, vector<vector<int>> &vis, vector<int> &ans)
    {

        if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] == 1)
            return;

        vis[i][j] = 1;
        ans.push_back(a[i][j]);

        dfsRight(i, j + 1, n, m, a, vis, ans);
        dfsDown(i + 1, j, n, m, a, vis, ans);

        return;
    }

    void dfsDown(int i, int j, int n, int m, vector<vector<int>> &a, vector<vector<int>> &vis, vector<int> &ans)
    {

        if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] == 1)
            return;

        vis[i][j] = 1;
        ans.push_back(a[i][j]);

        dfsDown(i + 1, j, n, m, a, vis, ans);
        dfsLeft(i, j - 1, n, m, a, vis, ans);

        return;
    }

    void dfsLeft(int i, int j, int n, int m, vector<vector<int>> &a, vector<vector<int>> &vis, vector<int> &ans)
    {

        if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] == 1)
            return;

        vis[i][j] = 1;
        ans.push_back(a[i][j]);

        dfsLeft(i, j - 1, n, m, a, vis, ans);
        dfsUp(i - 1, j, n, m, a, vis, ans);

        return;
    }

    void dfsUp(int i, int j, int n, int m, vector<vector<int>> &a, vector<vector<int>> &vis, vector<int> &ans)
    {

        if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] == 1)
            return;

        vis[i][j] = 1;
        ans.push_back(a[i][j]);

        dfsUp(i - 1, j, n, m, a, vis, ans);
        dfsRight(i, j + 1, n, m, a, vis, ans);

        return;
    }

public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>> &a)
    {
        vector<vector<int>> vis(R, vector<int>(C, 0));
        vector<int> ans;

        dfsRight(0, 0, R, C, a, vis, ans);
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;

        vector<vector<int>> a(R, vector<int>(C, 0));

        for (int i = 0; i < R * C; i++)
        {
            cin >> a[i / C][i % C];
        }

        Solution ob;

        vector<int> ans = ob.reverseSpiral(R, C, a);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}