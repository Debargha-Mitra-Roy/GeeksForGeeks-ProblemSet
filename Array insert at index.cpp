/*
    Array insert at index :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/array-insert-at-index/0/
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        for (int i = sizeOfArray; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = element;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int sizeOfArray;
        cin >> sizeOfArray;

        int arr[sizeOfArray];
        for (int i = 0; i < sizeOfArray - 1; i++)
        {
            cin >> arr[i];
        }

        int index;
        cin >> index;

        int element;
        cin >> element;

        Solution obj;
        obj.insertAtIndex(arr, sizeOfArray, index, element);

        for (int i = 0; i < sizeOfArray; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}