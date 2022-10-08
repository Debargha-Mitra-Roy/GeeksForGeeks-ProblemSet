/*
    Geek and Strings :-

    Link:   https://practice.geeksforgeeks.org/problems/geek-and-strings3030/1
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> prefixCount(int N, int Q, string li[], string query[])
    {
        unordered_map<string, int> q;

        for (int i = 0; i < Q; i++)
        {
            q[query[i]] = 0;
        }

        for (int i = 0; i < N; i++)
        {
            string s = li[i];
            string t = "";

            for (int j = 0; j < s.size(); j++)
            {
                t.push_back(s[j]);

                if (q.find(t) != q.end())
                    q[t]++;
            }
        }

        vector<int> ans;
        for (int i = 0; i < Q; i++)
        {
            string val = query[i];
            ans.push_back(q[val]);
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
        int Q, N, i = 0, x;
        cin >> N;

        string s;
        string li[N];

        for (int i = 0; i < N; i++)
        {
            cin >> li[i];
        }

        cin >> Q;
        x = Q;

        string query[Q];

        while (Q--)
        {
            cin >> s;
            query[i++] = s;
        }

        Solution ob;
        vector<int> ans = ob.prefixCount(N, x, li, query);

        for (auto i : ans)
        {
            cout << i << "\n";
        }
    }

    return 0;
}