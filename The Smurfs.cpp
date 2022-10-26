/*
    The Smurfs :-

    Link:   https://practice.geeksforgeeks.org/problems/the-smurfs4201/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int findMin(int n, char a[])
    {
        int countRed = 0, countGreen = 0, countBlue = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R')
                countRed++;

            else if (a[i] == 'B')
                countBlue++;

            else
                countGreen++;
        }

        if (countRed % 2 == 0 && countBlue % 2 == 0 && countGreen % 2 == 0)
            return 2;

        if (countRed % 2 == 1 && countBlue % 2 == 1 && countGreen % 2 == 1)
            return 2;

        return 1;
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

        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        cout << ob.findMin(n, a) << "\n";
    }

    return 0;
}