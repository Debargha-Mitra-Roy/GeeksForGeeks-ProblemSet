/*
    Intersection of Two Linked Lists :-

    LINK:	https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1
*/

#include <iostream>
#include <map>
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

Node *inputList(int size)
{
    Node *head, *tail;
    int val;

    cin >> val;
    head = tail = new Node(val);

    while (--size)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n)
{
    while (n)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

class Solution
{
public:
    Node *findIntersection(Node *head1, Node *head2)
    {
        Node *head = new Node(-1);
        Node *temp = head;

        map<int, int> mpp;

        while (head2 != NULL)
        {
            mpp[head2->data]++;
            head2 = head2->next;
        }

        while (head1 != NULL)
        {
            if (mpp.find(head1->data) != mpp.end())
            {
                Node *node = new Node(head1->data);

                temp->next = node;
                temp = node;
            }

            head1 = head1->next;
        }

        return head->next;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n;
        Node *head1 = inputList(n);

        cin >> m;
        Node *head2 = inputList(m);
        Solution obj;
        Node *result = obj.findIntersection(head1, head2);

        printList(result);
        cout << endl;
    }
    return 0;
}