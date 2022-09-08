/*
    N meetings in one room :-

    Link:   https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    static bool compare(pair<int, int> a, pair<int, int> b)
    {
        return (a.second < b.second);
    }

public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            pair<int, int> pr = make_pair(start[i], end[i]);

            v.push_back(pr);
        }

        sort(v.begin(), v.end(), compare);

        int count = 1;
        int ansEnd = v[0].second;

        for (int i = 0; i < n; i++)
        {
            if (v[i].first > ansEnd)
            {
                count++;
                ansEnd = v[i].second;
            }
        }

        return count;
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

        int start[n], end[n];

        for (int i = 0; i < n; i++)
        {
            cin >> start[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> end[i];
        }

        Solution ob;

        int ans = ob.maxMeetings(start, end, n);
        cout << ans << "\n";
    }

    return 0;
}