/*
    Phone directory:-

    LINK:	https://practice.geeksforgeeks.org/problems/phone-directory4628/1
*/

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        map<string, vector<string>> mpp;

        sort(contact, contact + n);

        vector<vector<string>> ans;

        for (int i = 0; i < s.size(); i++)
        {
            string res = s.substr(0, i + 1);

            for (int j = 0; j < n; j++)
            {
                if (res == contact[j].substr(0, i + 1))
                {
                    if (find(mpp[res].begin(), mpp[res].end(), contact[j]) == mpp[res].end())
                        mpp[res].push_back(contact[j]);
                }
            }

            if (mpp[res].size() == 0)
                mpp[res].push_back("0");
        }

        for (auto pr : mpp)
        {
            ans.push_back(pr.second);
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
        int n;
        cin >> n;

        string contact[n], s;

        for (int i = 0; i < n; i++)
        {
            cin >> contact[i];
        }

        cin >> s;

        Solution ob;

        vector<vector<string>> ans = ob.displayContacts(n, contact, s);

        for (int i = 0; i < s.size(); i++)
        {
            for (auto u : ans[i])
            {
                cout << u << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}