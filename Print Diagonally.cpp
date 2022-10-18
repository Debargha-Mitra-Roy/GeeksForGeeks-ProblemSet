/*
    Print Diagonally :-

    Link:   https://practice.geeksforgeeks.org/problems/print-diagonally4331/1
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> downwardDigonal(int N, vector<vector<int>> A)
    {
        vector<int> res;
        int row = 0;

        for (int col = 0; col < A[0].size() and row < A.size(); col++)
        {
            int i = row, j = col;

            while (j >= 0 and i < A.size())
            {
                res.push_back(A[i++][j--]);
            }

            if (col == A[0].size() - 1)
                row++, col--;
        }

        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for (auto i : ans)
        {
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}