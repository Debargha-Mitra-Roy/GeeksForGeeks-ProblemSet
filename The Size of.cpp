/*

    The Size of:-

    Link:   https://practice.geeksforgeeks.org/problems/the-size-of/1/
*/

#include <iostream>
using namespace std;

void dataTypes(int, float, double, long long, string);

void dataTypes(int a, float b, double c, long long l, string d) {

    float p = b / c;

    double q = b / a;

    int r = c / a;

    long long m = r + l;

    cout << sizeof(p) << " " << sizeof(q) << " " << sizeof(r) << " " << sizeof(m) << "\n";
    cout << sizeof(d) << " " << sizeof(char(c)) << "\n";;
}

int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;

    int t;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> l >> d;

        dataTypes(a, b, c, l, d);
    }

    return 0;
}