/*
    Find length of Loop :-

    Link:   https://practice.geeksforgeeks.org/problems/find-length-of-loop/1
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

int countNodesinLoop(Node *head);

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

        cout << countNodesinLoop(head) << "\n";
    }
    return 0;
}

// Function to find the length of a loop in the linked list.
int countNodes(struct Node *head)
{
    int count = 1;

    struct Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

int countNodesinLoop(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return countNodes(slow);
    }

    return 0;
}