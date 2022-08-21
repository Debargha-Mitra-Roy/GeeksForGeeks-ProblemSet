/*
    Array insert at end :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/array-insert-at-end/0/
*/

#include <iostream>
using namespace std;

void insertAtEnd(int arr[], int sizeOfArray, int element);

void insertAtEnd(int arr[], int sizeOfArray, int element)
{
    arr[sizeOfArray - 1] = element;
}

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

        int element;
        cin >> element;

        insertAtEnd(arr, sizeOfArray, element);

        for (int i = 0; i < sizeOfArray; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}