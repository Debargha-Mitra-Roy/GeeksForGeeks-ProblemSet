/*
    Floyd Warshall :-

    Link:   https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void shortest_distance(vector<vector<int>> &matrix)
    {
        int n = matrix.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (j != k && j != i && matrix[j][i] != -1 && matrix[i][k] != -1)
                    {
                        if (matrix[j][k] == -1)
                            matrix[j][k] = matrix[j][i] + matrix[i][k];
                    }

                    matrix[j][k] = min(matrix[j][k], matrix[j][i] + matrix[i][k]);
                }
            }
        }
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution obj;
        obj.shortest_distance(matrix);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}