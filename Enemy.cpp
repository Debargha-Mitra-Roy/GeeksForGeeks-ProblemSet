/*
    Enemy :-

    Link:   https://practice.geeksforgeeks.org/problems/enemy/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int largestArea(int n, int m, int k, vector<vector<int>> &enemy)
    {
        if (enemy.size() == 0)
            return n * m;

        vector<int> row;
        vector<int> col;

        for (int i = 0; i < enemy.size(); i++)
        {
            row.push_back(enemy[i][0]);
            col.push_back(enemy[i][1]);
        }

        sort(row.begin(), row.end());
        sort(col.begin(), col.end());

        int MaxCol = 0, currRow = 0;
        int MaxRow = 0, currCol = 0;

        for (int i = 0; i < row.size(); i++)
        {
            MaxRow = max(MaxRow, abs(currRow - row[i]) - 1);
            currRow = row[i];
        }

        for (int i = 0; i < col.size(); i++)
        {
            MaxCol = max(MaxCol, abs(currCol - col[i]) - 1);
            currCol = col[i];
        }

        MaxRow = max(MaxRow, abs(currRow - n));
        MaxCol = max(MaxCol, abs(currCol - m));

        if (!MaxRow or !MaxCol)
            return MaxRow ? MaxRow : MaxCol;

        return MaxRow * MaxCol;
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

        int k;
        cin >> k;

        vector<vector<int>> e(k, vector<int>(2));
        for (int i = 0; i < k; i++)
        {
            cin >> e[i][0] >> e[i][1];
        }

        Solution a;
        cout << a.largestArea(n, m, k, e) << "\n";
    }

    return 0;
}