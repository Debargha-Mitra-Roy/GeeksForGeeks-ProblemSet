/*
    Number Of Open Doors :-

    Link:   https://practice.geeksforgeeks.org/problems/number-of-open-doors1552/1
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    int noOfOpenDoors(long long N)
    {
        return sqrt(N);
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
        cout << ob.noOfOpenDoors(N) << "\n";
    }

    return 0;
}