/*
    Tom and Jerry :-

    Link:   https://practice.geeksforgeeks.org/problems/tom-and-jerry1325/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isFit(int arr[], int brr[], int n)
    {
        sort(arr, arr + n);
        sort(brr, brr + n);

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= brr[i])
                count++;
        }

        if (count == n)
            return true;

        else
            return false;
    }
};

int main()
{
    int i, j, z, t, n, flag;
    cin >> t;

    for (z = 0; z < t; z++)
    {
        flag = 0;
        cin >> n;

        int arr[n + 1], brr[n + 1];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        Solution ob;

        if (ob.isFit(arr, brr, n))
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}