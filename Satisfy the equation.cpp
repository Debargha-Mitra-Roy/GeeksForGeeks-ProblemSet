/*
    Satisfy the equation :-

    Link:   https://practice.geeksforgeeks.org/problems/satisfy-the-equation5847/1
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> satisfyEqn(int A[], int N)
    {
        unordered_map<int, vector<int>> mpp;
        vector<int> ans;

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int store = A[i] + A[j];

                if (mpp.count(store) == 1)
                {
                    if ((mpp[store][0] != i and mpp[store][1] != j) and (mpp[store][0] != j and mpp[store][1] != i))
                    {
                        mpp[store].push_back(i);
                        mpp[store].push_back(j);

                        if (ans.size() == 0 or ans > mpp[store])
                            ans = mpp[store];
                    }
                }

                else
                {
                    mpp[store].push_back(i);
                    mpp[store].push_back(j);
                }
            }
        }

        if (ans.empty())
            return {-1, -1, -1, -1};

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

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        Solution ob;

        vector<int> ptr = ob.satisfyEqn(A, N);
        cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << " " << ptr[3] << "\n";
    }

    return 0;
}