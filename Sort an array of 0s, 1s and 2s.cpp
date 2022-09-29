/*
    Sort an array of 0s, 1s and 2s :-

    Link:   https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    void sort012(int a[], int n)
    {
        int left = 0;
        int right = n - 1;
        int mid = 0;

        // Iterate till all the elements are sorted
        while (mid <= right)
        {
            switch (a[mid])
            {
            // If the element is 0
            case 0:
                swap(a[left++], a[mid++]);
                break;

            // If the element is 1
            case 1:
                mid++;
                break;

            // If the element is 2
            case 2:
                swap(a[mid], a[right--]);
                break;
            }
        }
    }

    // Function to print array a[]
    void printArray(int a[], int n)
    {
        // Iterate and print every element
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
};

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}