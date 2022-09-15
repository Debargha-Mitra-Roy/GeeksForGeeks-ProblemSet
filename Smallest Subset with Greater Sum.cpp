/*
    Smallest Subset with Greater Sum :-

    Link:   https://practice.geeksforgeeks.org/problems/smallest-subset-with-greater-sum/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minSubset(vector<int> &Arr, int N)
    {
        sort(Arr.begin(), Arr.end(), greater<int>());

        long long int sum = 0, count = 0, t_sum = 0;

        for (int i = 0; i < N; i++)
        {
            t_sum += Arr[i];
        }

        for (int i = 0; i < N; i++)
        {
            sum = sum + Arr[i];
            count++;

            if (sum > t_sum - sum)
                return count;
        }
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
        vector<int> Arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> Arr[i];
        }

        Solution ob;
        cout << ob.minSubset(Arr, N) << endl;
    }

    return 0;
}