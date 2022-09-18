/*
    Reverse array in groups :-

    Link:   https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/reverse-array-in-groups0255
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long int> &arr, int n, int k)
    {
        for (int i = 0; i + k < n; i = i + k)
        {
            reverse(arr.begin() + i, arr.begin() + i + k);
        }

        if (n % k != 0)
            reverse((arr.end() - (n % k)), arr.end());
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

        vector<long long int> arr;
        int k;
        cin >> k;

        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution ob;
        ob.reverseInGroups(arr, n, k);

        for (long long int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}