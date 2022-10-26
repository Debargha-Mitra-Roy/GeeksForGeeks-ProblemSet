/*
    Reverse a Stack :-

    Link:   https://practice.geeksforgeeks.org/problems/reverse-a-stack/1
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
private:
    void insertAtButtom(stack<int> &st, int element)
    {
        if (st.empty())
        {
            st.push(element);
            return;
        }

        int topElement = st.top();
        st.pop();

        insertAtButtom(st, element);

        st.push(topElement);
    }

public:
    void Reverse(stack<int> &St)
    {
        if (St.empty())
            return;

        int element = St.top();
        St.pop();

        Reverse(St);

        insertAtButtom(St, element);
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        
        stack<int> St;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            St.push(x);
        }

        Solution ob;
        ob.Reverse(St);

        vector<int> res;
        while (St.size())
        {
            res.push_back(St.top());
            St.pop();
        }

        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}