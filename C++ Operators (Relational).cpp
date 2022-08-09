/*
    C++ Operators (Relational) | Set 2 :-

    LINK:   https://practice.geeksforgeeks.org/problems/c-operators-relational-set-21407/1#
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    string compareNum(int a, int b)
    {
        string s;
        string a1 = to_string(a);
        string b1 = to_string(b);

        if (a > b)
            s = a1 + " is greater than " + b1;

        else if (a < b)
            s = a1 + " is less than " + b1;

        else
            s = a1 + " is equals to " + b1;

        return s;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;

        Solution ob;
        cout << ob.compareNum(A, B) << "\n";
    }

    return 0;
}