/*
    Remove loop in Linked List :-

    Link:   https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
*/

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node *head, Node *tail, int position)
{
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
    {
        walk = walk->next;
    }

    tail->next = walk;
}

bool isLoop(Node *head)
{
    if (!head)
        return false;

    Node *fast = head->next;
    Node *slow = head;

    while (fast != slow)
    {
        if (!fast || !fast->next)
            return false;

        fast = fast->next->next;
        slow = slow->next;
    }

    return true;
}

int length(Node *head)
{
    int ret = 0;
    while (head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

class Solution
{
public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node *head)
    {
        if (!head)
            return;

        // Using two pointers and moving one pointer(slow) by one node and another pointer(fast) by two nodes in each iteration.
        Node *fast = head->next;
        Node *slow = head;

        while (fast != slow)
        {
            // If the node pointed by first pointer(fast) or the node next to it is null, then loop is not present.
            if (!fast || !fast->next)
                return;
            fast = fast->next->next;
            slow = slow->next;
        }

        // Both pointers now point to the same node in the loop.
        int size = 1;
        fast = fast->next;

        // We start iterating the loop with first pointer and continue till both pointers point to same node again.
        while (fast != slow)
        {
            // Incrementing the counter which stores length of loop.
            size++;
            fast = fast->next;
        }

        // Updating the pointers again to starting node.
        slow = head;
        fast = head;

        // Moving pointer (fast) by (size-1) nodes.
        for (int i = 0; i < size - 1; i++)
            fast = fast->next;

        // Now we keep iterating with both pointers till fast reaches a node such that the next node is pointed by slow. At this situation slow is at the node where loop starts and first at last node so we simply update the link part of first.
        while (fast->next != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }

        // Storing null in link part of the last node.
        fast->next = NULL;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n;

        Node *head, *tail;
        cin >> num;
        head = tail = new Node(num);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin >> pos;
        loopHere(head, tail, pos);

        Solution ob;
        ob.removeLoop(head);

        if (isLoop(head) || length(head) != n)
            cout << "0\n";

        else
            cout << "1\n";
    }

    return 0;
}