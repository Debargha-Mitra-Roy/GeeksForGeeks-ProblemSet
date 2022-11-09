/* 
    Minimum Sum of Absolute Differences of Pairs :-

    Link:   https://practice.geeksforgeeks.org/problems/minimum-sum-of-absolute-differences-of-pairs/1
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long findMinSum(vector<int> &A, vector<int> &B, int N)
    {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        vector<pair<int, int>> v;

        for (int i = 0; i < N; i++)
        {
            pair<int, int> pr = make_pair(A[i], B[i]);
            v.push_back(pr);
        }

        vector<int> arr;

        for (auto it : v)
        {
            arr.push_back(abs(it.first - it.second));
        }

        long long int sum = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            sum = sum + arr[i];
        }

        return sum;
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
 
        vector<int> A(N), B(N);
 
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
 
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
 
        Solution ob;
        cout << ob.findMinSum(A, B, N) << "\n";
    }
}