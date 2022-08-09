/*
    C++ Data Types :-

    Link:   https://practice.geeksforgeeks.org/problems/c-data-types1523/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int cppIntType()
    {
        int a;
        cin >> a;
        cout << a;
    }

    char cppCharType()
    {
        char c;
        cin >> c;
        cout << c;
    }

    float cppFloatType()
    {
        float f;
        cin >> f;
        cout << f;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solution ob;
        cout << ob.cppIntType() << "\n";
        cout << ob.cppCharType() << "\n";
        cout << ob.cppFloatType() << "\n";
    }

    return 0;
}