/*
	Square root of a number:-
	
	LINK:	https://practice.geeksforgeeks.org/problems/square-root/1/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /* Recursive function that returns square root of a number with precision upto 5 decimal places */
    double square(double n, double i, double j)
    {
        double mid = (i + j) / 2;
        double sqr = mid * mid;

        /* If mid itself is the square root, return mid */
        if ((sqr == n) || (abs(sqr - n) < 0.00001))
            return mid;

        /* If sqr is less than n, recursive second half */
        else if (sqr < n)
            return square(n, mid, j);

        /* Else recursive first half */
        else
            return square(n, i, mid);
    }

    /* Function to find the square root of n */
    void square_root(double n)
    {
        double i = 1;

        /* While the square root is not found */
        bool found = false;

        while (!found)
        {
            /* If n is a perfect square */
            if (i * i == n)
            {
                cout << fixed << setprecision(0) << i << "\n";
                found = true;
            }

            else if (i * i > n)
            {
                /* Square root will lie in the interval (i - 1) and i */
                double res = square(n, i - 1, i);
                cout << fixed << setprecision(5) << res << "\n";
                found = true;
            }

            i++;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;

        /* Function call */
        Solution obj;
        obj.square_root(n);
    }

    return 0;
}