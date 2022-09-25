/*
    Queries on a Matrix :-

    Link:   https://practice.geeksforgeeks.org/problems/queries-on-a-matrix0443/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries)
    {
        vector<vector<int>> ans(n, vector<int>(n, 0));

        for (auto it : Queries)
        {
            int a = it[0];
            int b = it[1];
            int c = it[2];
            int d = it[3];

            for (int j = a; j <= c; j++)
            {
                for (int k = b; k <= d; k++)
                {
                    ans[j][k]++;
                }
            }
        }

        return ans;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;

        vector<vector<int>> Queries;
        for (int i = 0; i < q; i++)
        {
            vector<int> cur(4);
            for (int j = 0; j < 4; j++)
            {
                cin >> cur[j];
            }

            Queries.push_back(cur);
        }

        Solution obj;

        vector<vector<int>> ans = obj.solveQueries(n, Queries);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}