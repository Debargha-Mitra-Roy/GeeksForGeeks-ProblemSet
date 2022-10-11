/*
    Count nodes of linked list :-

    Link:   https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to count nodes of a linked list.
    int getCount(struct Node *head, int count = 0)
    {

        // Base Case
        if (head == NULL)
            return count;

        // Recursion
        return (getCount(head->next, count + 1));
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

        int data;
        cin >> data;

        struct Node *head = new Node(data);
        struct Node *tail = head;
        
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getCount(head) << "\n";
    }

    return 0;
}