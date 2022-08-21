/*
    Array insert at index :-

    Link:   https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/who-has-the-majority
*/

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[])
    {
        int max = INT_MIN, max2 = -1;

        vector<int> ans;

        for (int i = 0; i < sizeOfArray; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }

        for (int i = 0; i < sizeOfArray; i++)
        {
            if (arr[i] != max && arr[i] > max2)
                max2 = arr[i];
        }

        ans.push_back(max);
        ans.push_back(max2);

        return ans;
    }
};

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;

        int arr[sizeOfArray];
        for (int index = 0; index < sizeOfArray; index++)
        {
            cin >> arr[index];
        }

        Solution obj;
        vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);

        cout << ans[0] << ' ' << ans[1] << "\n";
    }

    return 0;
}