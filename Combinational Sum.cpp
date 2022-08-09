/*
    Combinational Sum :-

    LINK:   https://www.geeksforgeeks.org/combinational-sum/
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    void possibleCombinations(vector<int> &nums, vector<vector<int>> &temp, vector<int> &res, int target)
    {
        // Base Case
        if (target == 0)
        {
            temp.push_back(res);

            return;
        }

        int i = 0;

        while (i < nums.size() && abs(target - nums[i]) >= 0)
        {
            // Add the elements to the list
            res.push_back(nums[i]);

            // Recusion
            possibleCombinations(nums, temp, res, abs(target - nums[i]));
            i++;

            // Remove the elements to the list
            res.pop_back(); // Backtracking
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int> &nums, int target)
    {
        // Sort the array in non-decreasing order
        sort(nums.begin(), nums.end());

        // Removes all the duplicate elements from the array
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        vector<vector<int>> temp;
        vector<int> res;

        possibleCombinations(nums, temp, res, target);

        return temp;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    Solution obj;

    vector<vector<int>> ans = obj.combinationSum(nums, target);

    // If result is empty
    if (ans.size() == 0)
    {
        cout << "Empty";

        return 0;
    }

    // Print all combinations stored in ans
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i].size() > 0)
        {
            cout << "{";

            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }

            cout << "}\n";
        }
    }

    return 0;
}