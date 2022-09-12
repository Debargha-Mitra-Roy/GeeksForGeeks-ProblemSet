/*
    Minimum Exchange :-

    Link:   https://practice.geeksforgeeks.org/problems/distributing-question-papers2513/1
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    int isStackPermutation(int N, vector<int> &A, vector<int> &B)
    {
        stack<int> st;

        int j = 0;

        for (int i = 0; i < N; i++)
        {
            st.push(A[i]);

            while (!st.empty() && st.top() == B[j])
            {
                st.pop();
                j++;
            }
        }

        if (st.empty())
            return 1;

        else
            return 0;
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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        Solution ob;
        cout << ob.isStackPermutation(n, a, b) << endl;
    }

    return 0;
}