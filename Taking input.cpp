/*
    Taking input:-

    Link:   https://practice.geeksforgeeks.org/problems/taking-input/1/
*/

#include<iostream>
using namespace std;

void inputData();

void inputData()
{
    int a;
    string b;

    cin >> a >> b;

    cout << a << " " << b << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        inputData();
    }

    return 0;
}