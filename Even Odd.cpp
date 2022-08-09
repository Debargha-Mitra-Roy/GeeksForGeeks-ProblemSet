/*
    Even Odd:-

    Link:   https://practice.geeksforgeeks.org/problems/even-odd/1/
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    void evenOdd(int a, int b)
    {
        int even = 0, odd = 0;

        if (a % 2 == 0)
        {
            even = a;
            odd = b;
        }

        else
        {
            odd = a;
            even = b;
        }

        cout << even << "\n";
        cout << odd << "\n";
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;

        Solution obj;
        obj.evenOdd(a, b);
    }

    return 0;
}