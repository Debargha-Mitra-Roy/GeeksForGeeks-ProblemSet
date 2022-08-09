/*
    C++ Input / Output :-

    Link:   https://practice.geeksforgeeks.org/problems/c-input-output2432/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int multiplication(int A, int B)
    {
        int m = A * B;

        return m;
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
        cout << ob.multiplication(A, B) << "\n";
    }

    return 0;
}