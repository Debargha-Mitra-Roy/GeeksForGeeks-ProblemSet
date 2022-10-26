/*
    Implement stack using array :-

    Link:   https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1
*/

#include <bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;

public:
    MyStack() { top = -1; }
    int pop();
    void push(int);
};

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--)
        {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1)
            {
                int a;
                cin >> a;
                sq->push(a);
            }

            else if (QueryType == 2)
                cout << sq->pop() << " ";
        }
        cout << "\n";
    }
}

void MyStack ::push(int x)
{
    top++;
    arr[top] = x;
}

int MyStack ::pop()
{
    if (top == -1)
        return -1;

    int num = arr[top];
    top--;

    return num;
}
