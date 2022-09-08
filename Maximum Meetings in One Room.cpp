/*
    Maximum Meetings in One Room :-

    Link:   https://practice.geeksforgeeks.org/problems/maximum-meetings-in-one-room/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    static bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
    {
        if (a.second.second == b.second.second)
            return (a.first < b.first);
    
        return (a.second.second < b.second.second);
    }

public:
    vector<int> maxMeetings(int N, vector<int> &start, vector<int> &end)
    {
        vector<pair<int, pair<int, int>>> meetings;

        for (int i = 0; i < N; i++)
        {
            meetings.push_back({i, {start[i], end[i]}});
        }

        sort(meetings.begin(), meetings.end(), compare);

        int curr_ending_time = meetings[0].second.second;

        vector<int> ans;
        ans.push_back(meetings[0].first + 1);

        for (int i = 1; i < N; i++)
        {
            if (meetings[i].second.first > curr_ending_time)
            {
                ans.push_back(meetings[i].first + 1);
                curr_ending_time = meetings[i].second.second;
            }
        }

        sort(ans.begin(), ans.end());

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

        vector<int> S(n), F(n);

        for (int i = 0; i < n; i++)
        {
            cin >> S[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> F[i];
        }

        Solution ob;
        vector<int> ans = ob.maxMeetings(n, S, F);

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];

            if (i != ans.size() - 1)
            {
                cout << " ";
            }
        }

        cout << "\n";
    }
    
    return 0;
}