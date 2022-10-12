/*
    Save Your Life :-

    Link:   https://practice.geeksforgeeks.org/problems/save-your-life4601/1
*/

#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution
{
public:
    string maxSum(string w, char x[], int b[], int n)
    {
        unordered_map<char, int> mpp;

        for (int i = 0; i < n; i++)
        {
            mpp[x[i]] = b[i];
        }

        int len = 1, curr = 0, maxValue = INT_MIN;
        string ans = "", temp = "";

        for (int i = 0; i < w.size(); i++)
        {
            if (mpp.find(w[i]) != mpp.end())
                curr += mpp[w[i]];

            else
                curr += (int)w[i];

            temp += w[i];

            if (curr > maxValue)
            {
                maxValue = curr;
                ans = temp;
            }

            if (curr < 0)
            {
                curr = 0;
                temp = "";
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
        string w;
        cin >> w;

        int n;
        cin >> n;

        char x[n];
        int b[n];

        for (int i = 0; i < n; i++)
            cin >> x[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.maxSum(w, x, b, n) << "\n";
    }

    return 0;
}