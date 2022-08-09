/*
    Convert Celsius To Fahrenheit :-

    Link:   https://practice.geeksforgeeks.org/batch-problems/convert-celsius-to-fahrenheit/0/
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    double cToF(int C)
    {
        return ((C * 9 / 5) + 32);
    }
};

int main()
{
    int T;
    int C, F;
    cin >> T;
    while (T--)
    {
        cin >> C;

        Solution ob;
        cout << floor(ob.cToF(C)) << "\n";
    }

    return 0;
}