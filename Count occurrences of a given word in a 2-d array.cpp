/* 
    Count occurrences of a given word in a 2-d array :-

    Link:   https://practice.geeksforgeeks.org/problems/count-occurences-of-a-given-word-in-a-2-d-array/11
*/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution
{
    int vis[51][51];
    int ans = 0;

public:
    void solve(vector<vector<char>> &mat, string target, int i, int j, int k)
    {
        if (i < 0 || j < 0 || j >= mat[0].size() || i >= mat.size() || k == target.length() || vis[i][j] || mat[i][j] != target[k])
            return;

        if (k == target.length() - 1)
        {
            ans++;
            return;
        }

        vis[i][j] = 1;

        solve(mat, target, i + 1, j, k + 1);
        solve(mat, target, i, j + 1, k + 1);
        solve(mat, target, i - 1, j, k + 1);
        solve(mat, target, i, j - 1, k + 1);

        vis[i][j] = 0;
    }

    int findOccurrence(vector<vector<char>> &mat, string target)
    {
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                memset(vis, 0, sizeof(vis));
                solve(mat, target, i, j, 0);
            }
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
        int R, C;
        cin >> R >> C;
 
        vector<vector<char>> mat(R);
 
        for (int i = 0; i < R; i++)
        {
            mat[i].resize(C);
 
            for (int j = 0; j < C; j++)
                cin >> mat[i][j];
        }
 
        string target;
        cin >> target;
 
        Solution obj;
        cout << obj.findOccurrence(mat, target) << "\n";
    }
}