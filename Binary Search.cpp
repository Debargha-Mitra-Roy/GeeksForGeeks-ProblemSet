/*
    Binary Search :-

    Link:   https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int binarysearch(int arr[], int n, int k)
    {
        int left = 0, right = n - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (arr[mid] == k)
                return mid;

            else
            {
                if (arr[mid] < k)
                    left = mid + 1;

                else
                    right = mid - 1;
            }
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

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int key;
        cin >> key;

        Solution ob;

        int found = ob.binarysearch(arr, N, key);
        cout << found << "\n";
    }

    return 0;
}