/*
    Array insert at index :-

    Link:   https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/mean-and-median-1587115620
*/

#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int median(int A[], int N)
    {
        sort(A, A + N);

        int medianArray = 0;

        if (N % 2 == 0)
            medianArray = (A[N / 2] + A[(N / 2) - 1]) / 2;

        else
            medianArray = A[N / 2];

        return medianArray;
    }

    int mean(int A[], int N)
    {
        int sum = 0;

        for (int i = 0; i < N; i++)
        {
            sum = sum + A[i];
        }

        int meanArray = sum / N;

        return meanArray;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        cout << ob.mean(a, N) << " " << ob.median(a, N) << "\n";
    }

    return 0;
}