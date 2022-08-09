/*
    Learning to be precise:-

    Link:   https://practice.geeksforgeeks.org/problems/learning-to-be-precise/1/
*/

#include <iostream>
#include <iomanip>
using namespace std;

void precise(float a, float b)
{
    float c = a / b;

    cout << c << fixed << " " << setprecision(3) << c << "\n";

    cout << "\n";
}

void precise(float, float);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b;
        cin >> a >> b;

        precise(a, b);
    }

    return 0;
}