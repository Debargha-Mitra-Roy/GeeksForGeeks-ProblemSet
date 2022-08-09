/*
    For Loop- primeCheck:-

    Link:   https://practice.geeksforgeeks.org/problems/for-loop-primechecl/1/
*/

#include <iostream>
#include <math.h>
using namespace std;

string isPrime(int n)
{
    string s;
    int count = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }

    if (n > 1 && count == 0)
        s = "Yes";

    else
        s = "No";

    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << isPrime(n) << "\n";
    }

    return 0;
}