/*
    Step by Step Condition:-

    Link:   https://practice.geeksforgeeks.org/problems/step-by-step-condition/1/
*/

#include <iostream>
using namespace std;

void isDivisibleByPrime(int);

void isDivisibleByPrime(int n)
{
    if (n % 11 == 0)
        cout << "Eleven" << "\n";

    else
    {
        if (n % 3 == 0)
            cout << "Three" << "\n";

        else
        {
            if (n % 2 == 0)
                cout << "Two" << "\n";

            else
                cout << "-1" << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        isDivisibleByPrime(n);
    }

    return 0;
}