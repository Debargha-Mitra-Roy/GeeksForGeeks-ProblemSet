/*
    Median in a row-wise sorted Matrix :-

    Link:   https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    int median(vector<vector<int>> &matrix, int R, int C)
    {
        int min = INT_MAX, max = INT_MIN;

        for (int i = 0; i < R; i++)
        {
            if (matrix[i][0] < min)
                min = matrix[i][0];

            if (max < matrix[i][C - 1])
                max = matrix[i][C - 1];
        }

        int req = (R * C + 1) / 2;

        while (min < max)
        {
            int mid = (min + max) / 2;
            int count = 0;

            for (int i = 0; i < R; i++)
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();

            if (count < req)
                min = mid + 1;

            else
                max = mid;
        }

        return min;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;

        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        Solution obj;
        cout << obj.median(matrix, r, c) << endl;
    }

    return 0;
}