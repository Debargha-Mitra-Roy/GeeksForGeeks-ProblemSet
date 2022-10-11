/*
    Majority Element :-

    LINK:	https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(int a[], int size)
    {
        unordered_map<int, int> mpp;

        for (int i = 0; i < size; i++)
        {
            mpp[a[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second > size / 2)
                return it.first;
        }

        return -1;
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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}