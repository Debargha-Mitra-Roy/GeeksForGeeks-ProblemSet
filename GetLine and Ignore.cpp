/*
    GetLine and Ignore:-

    Link:   https://practice.geeksforgeeks.org/problems/getline-and-ignore/1/
*/

#include <iostream>
using namespace std;

void getLineAndIgnore();

void getLineAndIgnore()
{

    string a, d;
    int b;

    getline(cin, a);
    cin >> b;

    cin.ignore();

    getline(cin, d);

    cout << a << "\n";

    cout << b << "\n";

    cout << d << "\n";
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getLineAndIgnore();
    }

    return 0;
}