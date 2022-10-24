/*
    Earthquake and the Paint Shop :-

    Link:   https://practice.geeksforgeeks.org/problems/earthquake-and-the-paint-shop4518/1
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct alphanumeric
{
    string name;
    int count;
};

class Solution
{
public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A)
    {
        map<string, int> mpp;

        for (int i = 0; i < N; i++)
        {
            mpp[A[i]]++;
        }

        vector<alphanumeric> ans;

        for (auto it : mpp)
        {
            ans.push_back({it.first, it.second});
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
        int N;
        cin >> N;

        cin.ignore();

        vector<string> v;
        for (int i = 0; i < N; i++)
        {
            string s;
            getline(cin, s);
            v.push_back(s);
        }

        Solution ob;

        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans)
        {
            cout << u.name << " " << u.count << "\n";
        }
    }

    return 0;
}