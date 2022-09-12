/*
    Minimum Exchange :-

    Link:   https://practice.geeksforgeeks.org/problems/distributing-question-papers2513/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int MinimumExchange(vector<vector<char>> matrix)
    {
        int m = matrix.size(), n = matrix[0].size();

        int count1 = 0, count2 = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 'A')
                {
                    if ((i + j) % 2)
                        count1++;

                    else
                        count2++;
                }
                else
                {
                    if ((i + j) % 2)
                        count2++;

                    else
                        count1++;
                }
            }
        }

        int result = min(count1, count2);

        int ans = 0;

        if (result % 2 == 0)

            ans = result / 2;

        else
            ans = min(result, (m * n - result) / 2);

        return ans;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> matrix(n, vector<char>(m, 'x'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution obj;

        int ans = obj.MinimumExchange(matrix);
        cout << ans << "\n";
    }

    return 0;
}