/*
    Move Last Element to Front of a Linked List :-

    Link:   https://practice.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1
*/

#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution
{
public:
    ListNode *moveToFront(ListNode *head)
    {
        if (head->next == NULL)
            return head;

        ListNode *p = head;
        ListNode *q = NULL;

        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }

        p->next = head;
        q->next = NULL;
        head = p;

        return head;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ListNode *> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = new ListNode(x);
            if (i != 0)
            {
                a[i - 1]->next = a[i];
            }
        }

        ListNode *head = a[0];

        Solution ob;
        head = ob.moveToFront(head);

        while (head != NULL)
        {
            cout << head->val;
            if (head->next != NULL)
            {
                cout << " ";
            }
            head = head->next;
        }
        cout << "\n";
    }

    return 0;
}