/*
    Absolute Value :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/absolute-value/0/
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int absolute(int I)
    {
        if (I < 0)
            return (-I);

        else
            return I;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int I;
        cin >> I;

        Solution ob;
        cout << ob.absolute(I) << "\n";
    }

    return 0;
}