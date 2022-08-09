/*
    While loop- printTable:-

    Link:   https://practice.geeksforgeeks.org/problems/while-loop-printtable/1/
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    void printTable(int n)
    {
        int multiplier = 10;

        while (multiplier != 0)
        {
            int x = multiplier * n;

            multiplier--;

            cout << x << " ";
        }

        cout << endl;
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

        Solution obj;
        obj.printTable(n);
    }

    return 0;
}