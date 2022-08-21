/*
    Strongest Neighbour :-

    Link:   https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/strongest-neighbour
*/

#include <iostream>
#include <climits>
using namespace std;

void maximumAdjacent(int, int[]);

void maximumAdjacent(int sizeOfArray, int arr[])
{
    int temp[sizeOfArray - 1];

    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        temp[i] = max(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < sizeOfArray - 1;i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;

        int arr[sizeOfArray];
        for (int index = 0; index < sizeOfArray; index++)
        {
            cin >> arr[index];
        }

        maximumAdjacent(sizeOfArray, arr);

        cout << "\n";
    }

    return 0;
}