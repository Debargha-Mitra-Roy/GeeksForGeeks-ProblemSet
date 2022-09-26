/*
    Tom and Jerry :-

    Link:   https://practice.geeksforgeeks.org/problems/tom-and-jerry1325/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int numsGame(int N)
    {
        return (N % 2 == 0);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        cout << ob.numsGame(N) << endl;
    }

    return 0;
}