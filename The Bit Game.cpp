/*
    The Bit Game :-

    Link:   https://practice.geeksforgeeks.org/problems/the-bit-game2313/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    int swapBitGame(long long int N)
    {
        long long int count = 1;
        long long int temp = N;

        if (N == 1 or N == 2)
            return 1;

        while (temp > 2)
        {
            if (temp % 2 != 0)
                count++;

            temp = temp / 2;
        }

        if ((count % 2) == 0)
            return 2;

        else
            return 1;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;

        Solution ob;
        cout << ob.swapBitGame(N) << endl;
    }

    return 0;
}